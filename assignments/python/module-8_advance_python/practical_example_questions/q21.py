# q - Write a Python program to create a database and a table using MySQL.

# Answer -

import mysql.connector

db = mysql.connector.connect(
    host="localhost",
    user="root",
    password="chamoli",
    database="instagram"  
)

cursor = db.cursor()

if db.is_connected():
    print("Connected to MySQL database successfully!")
cursor.execute("""
    create table if not exists users (
        id int auto_increment primary key,
        name varchar(100),
        email varchar(100) unique
    )
""")
db.commit()
print("Table 'users' created successfully!")