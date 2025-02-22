import mysql.connector

db = mysql.connector.connect(
    user='root', 
    password='chamoli',
    host='localhost',
    port='3306',
    database='bank_management'
)

cursor = db.cursor()