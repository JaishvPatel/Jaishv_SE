import mysql.connector as m

a = m.connect(host="localhost",user="root",password="tiger")
cursor = a.cursor()

cursor.execute("create database if not exists jaishv_python")
a.commit()

a = m.connect(host="localhost",user="root",password="tiger",database="jaishv_python")
cursor = a.cursor()

cursor.execute("create table if not exists students(Id int(10) primary key auto_increment,Name varchar(30),Subject varchar(30))")
a.commit()