# q - Write a Python program to insert data into an MySQL database and fetch it.

# Answer -

# q - Write a Python program to connect to an SQLite3 database, create a table, insert data, and fetch data.

# Amswer -

# this is for mysql :

import mysql.connector

db = mysql.connector.connect(
    host="localhost",
    user="root",
    password="chamoli",
    database="instagram"  
)

if db.is_connected():
    print("Connected to MySQL database successfully!")

cursor = db.cursor()
cursor.execute("""
    create table if not exists users (
        id int auto_increment primary key,
        name varchar(100),
        email varchar(100) unique
    )
""")
db.commit()
print("Table 'users' created successfully!")

insert_query = "insert into users (name, email) values (%s, %s)"
users = [
    ("Krishna", "krishna@example.com"),
    ("Nilesh", "nilesh@example.com")
]

for user in users:
    try:
        cursor.execute(insert_query, user)
        db.commit()
        print(f"Inserted {user[0]} into 'users' table.")
    except mysql.connector.IntegrityError:
        print(f"Skipping duplicate email: {user[1]}")

cursor.execute("select * from users")
print("\nFetching Data:")
for row in cursor.fetchall():
    print(row)

cursor.close()
db.close()
print("\nDatabase connection closed.")
