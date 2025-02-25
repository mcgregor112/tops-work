import mysql.connector

db = mysql.connector.connect(
    user='root', 
    password='chamoli',
    host='localhost',
    port='3306',
    database='hotel_management_gui'
)

cursor = db.cursor()

