import mysql.connector as m

a=m.connect(host="localhost",user="root",password="tiger")
c=a.cursor()

c.execute("create database tkintertrial")
a.commit()

a=m.connect(host="localhost",user="root",password="tiger",database="tkintertrial")
c=a.cursor()

c.execute("create table data(ID int(5) PRIMARY KEY,First_name varchar(30), Last_name varchar(30),Email varchar(40),Mobile_no bigint(10),Address varchar(30))")
a.commit()

c.execute("")