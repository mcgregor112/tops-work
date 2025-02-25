import tkinter as tk
from tkinter import ttk, messagebox
from module.db_connection import db, cursor
import mysql.connector


class GuestDB:
    @staticmethod
    def create_tables():
        """Ensures the 'guests' table exists in the database."""
        try:
            cursor.execute('''
                create table if not exists guests (
                    id int auto_increment primary key,
                    name varchar(100) not null,
                    contact varchar(20) not null,
                    email varchar(100) not null,
                    gender varchar(10) not null,
                    city varchar(50) not null,
                    state varchar(50) not null
                )
            ''')
            db.commit()
        except mysql.connector.Error as err:
            print(f"Database Error: {err}")

    @staticmethod
    def insert_guest(name, contact, email, gender, city, state):
        """Inserts a new guest into the database."""
        try:
            cursor.execute('''
                insert into guests (name, contact, email, gender, city, state) 
                values (%s, %s, %s, %s, %s, %s)
            ''', (name, contact, email, gender, city, state))
            db.commit()
            messagebox.showinfo("Success", "Guest Registered Successfully!")
        except mysql.connector.Error as err:
            messagebox.showerror("Database Error", f"Error: {err}")

    @staticmethod
    def fetch_guests():
        """Fetches all guests from the database."""
        cursor.execute('select id, name, contact, city from guests')
        return cursor.fetchall()

    @staticmethod
    def fetch_guest_by_id(guest_id):
        """Fetches guest details by ID."""
        cursor.execute('select * from guests where id = %s', (guest_id,))
        return cursor.fetchone()

    @staticmethod
    def delete_guest(guest_id):
        """Deletes a guest record (Check-Out)."""
        try:
            cursor.execute('delete from guests where id = %s', (guest_id,))
            db.commit()
            return cursor.rowcount > 0 
        except mysql.connector.Error as err:
            messagebox.showerror("Database Error", f"Error: {err}")
            return False


class HotelManagementApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Hotel Management")
        self.root.geometry("600x400")
        self.root.configure(bg="lightgray")

        tk.Label(root, text="WELCOME", font=("Arial", 20, "bold"), bg="lightgray").pack(pady=10)

        frame = tk.Frame(root, bg="lightgray")
        frame.pack(pady=10)

        buttons = [
            ("1. CHECK IN", self.open_registration_form),
            ("2. SHOW GUEST LIST", self.show_guest_list),
            ("3. CHECK OUT", self.check_out),
            ("4. GET GUEST INFO", self.get_guest_info),
            ("5. EXIT", root.quit)
        ]

        for text, command in buttons:
            tk.Button(frame, text=text, width=30, height=2, font=("Arial", 12, "bold"), command=command).pack(pady=5)

    def show_guest_list(self):
        guests = GuestDB.fetch_guests()
        if not guests:
            messagebox.showinfo('Guest List', 'No guests found!')
            return

        guest_list = '\n'.join([f'ID: {g[0]}, Name: {g[1]}, Contact: {g[2]}, City: {g[3]}' for g in guests])
        messagebox.showinfo('Guest List', guest_list)

    def check_out(self):
        """Handles guest check-out by deleting the record."""
        guest_id = tk.simpledialog.askinteger("Check-Out", "Enter Guest ID:")
        if guest_id:
            success = GuestDB.delete_guest(guest_id)
            if success:
                messagebox.showinfo("Check-Out", f"Guest ID {guest_id} has been checked out successfully!")
            else:
                messagebox.showerror("Check-Out Error", "Guest ID not found!")

    def get_guest_info(self):
        """Retrieves guest information."""
        guest_id = tk.simpledialog.askinteger("Guest Info", "Enter Guest ID:")
        if guest_id:
            guest = GuestDB.fetch_guest_by_id(guest_id)
            if guest:
                info = f"ID: {guest[0]}\nName: {guest[1]}\nContact: {guest[2]}\nEmail: {guest[3]}\nGender: {guest[4]}\nCity: {guest[5]}\nState: {guest[6]}"
                messagebox.showinfo("Guest Info", info)
            else:
                messagebox.showerror("Guest Info Error", "Guest ID not found!")

    def open_registration_form(self):
        RegistrationForm(self.root)


class RegistrationForm:
    def __init__(self, parent):
        self.reg_root = tk.Toplevel(parent)
        self.reg_root.title("Guest Registration")
        self.reg_root.geometry("400x350")

        tk.Label(self.reg_root, text="Enter Guest Details", bg="orange", fg="white", font=("Arial", 12, "bold")).pack(fill="x")

        frame = tk.Frame(self.reg_root)
        frame.pack(pady=10)

        tk.Label(frame, text="Name *").grid(row=0, column=0, sticky="w")
        self.name_entry = tk.Entry(frame)
        self.name_entry.grid(row=0, column=1)

        tk.Label(frame, text="Contact *").grid(row=1, column=0, sticky="w")
        self.contact_entry = tk.Entry(frame)
        self.contact_entry.grid(row=1, column=1)

        tk.Label(frame, text="Email *").grid(row=2, column=0, sticky="w")
        self.email_entry = tk.Entry(frame)
        self.email_entry.grid(row=2, column=1)

        tk.Label(frame, text="Gender *").grid(row=3, column=0, sticky="w")
        self.gender_var = tk.StringVar()
        tk.Radiobutton(frame, text="Male", variable=self.gender_var, value="Male").grid(row=3, column=1, sticky="w")
        tk.Radiobutton(frame, text="Female", variable=self.gender_var, value="Female").grid(row=3, column=1, sticky="e")

        tk.Label(frame, text="City *").grid(row=4, column=0, sticky="w")
        self.city_combo = ttk.Combobox(frame, values=["New York", "Los Angeles", "Chicago"])
        self.city_combo.grid(row=4, column=1)

        tk.Label(frame, text="State *").grid(row=5, column=0, sticky="w")
        self.state_combo = ttk.Combobox(frame, values=["California", "Texas", "Florida"])
        self.state_combo.grid(row=5, column=1)

        self.error_label = tk.Label(frame, text="", fg="red", font=("Arial", 10))
        self.error_label.grid(row=6, columnspan=2, pady=5)

        register_btn = tk.Button(self.reg_root, text="Register", bg="orange", fg="black", font=("Arial", 12, "bold"),
                                 command=self.register)
        register_btn.pack(pady=5)

    def register(self):
        name = self.name_entry.get()
        contact = self.contact_entry.get()
        email = self.email_entry.get()
        gender = self.gender_var.get()
        city = self.city_combo.get()
        state = self.state_combo.get()

        if not name or not contact or not email or not gender or not city or not state:
            self.error_label.config(text="All fields are required!", fg="red")
            return

        GuestDB.insert_guest(name, contact, email, gender, city, state)
        self.reg_root.destroy()


if __name__ == '__main__':
    GuestDB.create_tables()
    root = tk.Tk()
    app = HotelManagementApp(root)
    root.mainloop()
