from module.banker import banker
from module.customer import customer

def banker_menu():
    bank = banker()
    while True:
        print("\n====== Banker Menu ======")
        print("1. Add Customer")
        print("2. View All Customers")
        print("3. Search Customer by ID")
        print("4. View Total Amount in Bank")
        print("5. Delete Customer")
        print("6. Back to Main Menu")

        try:
            choice = int(input("Enter your choice: "))
            match choice:
                case 1:
                    name = input("Enter customer name: ")
                    phone = input("Enter customer phone: ")
                    email = input("Enter customer email: ")
                    balance = float(input("Enter initial balance: "))
                    bank.add_customer(name, phone, email, balance)
                case 2:
                    bank.view_all_customers()
                case 3:
                    customer_id = input("Enter Customer ID to search: ")
                    bank.search_customer(customer_id)
                case 4:
                    bank.total_amount_in_bank()
                case 5:
                    customer_id = input("Enter Customer ID to delete: ")
                    bank.delete_customer(customer_id)
                case 6:
                    print("Returning to Main Menu...")
                    break
                case _:
                    print("Invalid choice! Please try again.")
        except ValueError:
            print("Invalid input! Please enter a valid option.")

def customer_menu():
    cust = customer()
    while True:
        print("\n====== Customer Menu ======")
        print("1. Deposit Money")
        print("2. Withdraw Money")
        print("3. View Balance")
        print("4. Back to Main Menu")

        try:
            choice = int(input("Enter your choice: "))
            match choice:
                case 1:
                    customer_id = input("Enter Customer ID: ")
                    amount = float(input("Enter Deposit Amount: "))
                    cust.deposit(customer_id, amount)
                case 2:
                    customer_id = input("Enter Customer ID: ")
                    amount = float(input("Enter Withdrawal Amount: "))
                    cust.withdraw(customer_id, amount)
                case 3:
                    customer_id = input("Enter Customer ID: ")
                    cust.view_balance(customer_id)
                case 4:
                    print("Returning to Main Menu...")
                    break
                case _:
                    print("Invalid choice! Please try again.")
        except ValueError:
            print("Invalid input! Please enter a valid option.")

def main_menu():
    while True:
        print("\n====== Bank Management System ======")
        print("1. Banker Menu")
        print("2. Customer Menu")
        print("3. Exit")

        try:
            choice = int(input("Enter your choice: "))
            match choice:
                case 1:
                    banker_menu()
                case 2:
                    customer_menu()
                case 3:
                    print("Exiting System...")
                    break
                case _:
                    print("Invalid choice! Please try again.")
        except ValueError:
            print("Invalid input! Please enter a valid option.")

if __name__ == "__main__":
    main_menu()
