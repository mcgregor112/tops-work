from module.db_connection import db, cursor
# from banker import banker

class customer:
    
    def deposit(self, customer_id, amount):
        query = "update customer set balance = balance + %s WHERE id = %s"
        try:
            cursor.execute(query, (amount, customer_id))
            db.commit()
            print(f"₹{amount:.2f} deposited successfully!")
        except Exception as e:
            print(f"Error: {e}")

    def withdraw(self, customer_id, amount):
        query = "select balance from customer where id = %s"
        cursor.execute(query, (customer_id,))
        result = cursor.fetchone()

        if result and result[0] >= amount:
            query = "update customer set balance = balance - %s where id = %s"
            cursor.execute(query, (amount, customer_id))
            db.commit()
            print(f"₹{amount:.2f} withdrawn successfully!")
        else:
            print("Insufficient funds or customer not found!")

    def view_balance(self, customer_id):
        query = "select balance from customer where id = %s"
        cursor.execute(query, (customer_id,))
        balance = cursor.fetchone()
        if balance:
            print(f"Current Balance: ₹{balance[0]:.2f}")
        else:
            print("Customer not found!")
