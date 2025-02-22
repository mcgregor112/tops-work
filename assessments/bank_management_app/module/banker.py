from module.db_connection import db, cursor

class banker:  
    def __init__(self):
        self.create_customer_table()

    def create_customer_table(self):
        query = """create table if not exists customer (
                id int auto_increment primary key,
                name varchar(100),
                phone varchar(20) unique,
                email varchar(100) unique,
                balance int 
        )"""  
        cursor.execute(query)
        db.commit()

    def add_customer(self, name, phone, email, balance):
        query = "insert into customer (name, phone, email, balance) values (%s, %s, %s, %s)"
        try:
            cursor.execute(query, (name, phone, email, balance))
            db.commit()
            print("Customer added successfully!")
        except Exception as e:
            print(f"Error: {e}")

    def view_all_customers(self):
        query = "select id, name, phone, email, balance from customer"
        cursor.execute(query)
        customers = cursor.fetchall()
        if customers:
            print("\nCustomer List:")
            for cust in customers:
                print(f"ID: {cust[0]}, Name: {cust[1]}, Phone: {cust[2]}, Email: {cust[3]}, Balance: ${cust[4]:.2f}")
        else:
            print("No customers found.")

    def search_customer(self, customer_id):
        query = "select * from customer where id = %s"
        cursor.execute(query, (customer_id,))
        customer = cursor.fetchone()
        if customer:
            print(f"\nCustomer Found - ID: {customer[0]}, Name: {customer[1]}, Phone: {customer[2]}, Email: {customer[3]}, Balance: ${customer[4]:.2f}")
        else:
            print("Customer not found.")

    def total_amount_in_bank(self):
        query = "select sum(balance) from customer"
        cursor.execute(query)
        total = cursor.fetchone()
        print(f"\nTotal Amount in Bank: ${total[0]:.2f}" if total[0] else "No funds available.")

    def delete_customer(self, customer_id):
        confirm = input(f"Are you sure you want to delete Customer ID {customer_id}? (Y/N): ")
        if confirm.lower() == 'y':
            query = "delete from customer where id = %s"
            cursor.execute(query, (customer_id,))
            db.commit()
            print("Customer deleted successfully!")
        else:
            print("Operation cancelled.")

    def banker_menu(self):
        while True:
            print("\n====== Banker Menu ======")
            print("1. Add Customer")
            print("2. View All Customers")
            print("3. Search Customer by ID")
            print("4. View Total Amount in Bank")
            print("5. Delete Customer")
            print("6. Back to Main Menu")

            try:
                choice = int(input("Enter task you want to perform: "))
                match choice:
                    case 1:
                        name = input("Enter customer name: ")
                        phone = input("Enter customer phone: ")
                        email = input("Enter customer email: ")
                        balance = float(input("Enter initial balance: "))
                        self.add_customer(name, phone, email, balance)
                    case 2:
                        self.view_all_customers()
                    case 3:
                        customer_id = input("Enter Customer ID to search: ")
                        self.search_customer(customer_id)
                    case 4:
                        self.total_amount_in_bank()
                    case 5:
                        customer_id = input("Enter Customer ID to delete: ")
                        self.delete_customer(customer_id)
                    case 6:
                        print("Returning to Main Menu...")
                        break
                    case _:
                        print("Invalid choice! Please try again.")
            except ValueError:
                print("Invalid input! Please enter a valid option.")
