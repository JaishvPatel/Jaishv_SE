import mysql.connector as m

a = m.connect(host="localhost",user="root",password="tiger",database="jaishv_python")
cursor = a.cursor()

while 1:
    data = """
            1) Insert Data
            2) Show Data
            3) Update Data
            4) Delete Data
            5) Exit
            """
    print(data)
    c = int(input("Enter Your Choice : "))
    if c==1:
        name = input("Enter Name : ")
        subject = input("Enter Subject : ")

        query = "insert into students(name,subject) values ('%s','%s')"%(name,subject)
        cursor.execute(query)
        a.commit()

    elif c==2:
        query = "select * from students"
        cursor.execute(query)
        data = cursor.fetchall()
        print(data)
        a.commit()

    elif c==3:
        id = int(input("Enter id : "))
        uname = input("Enter new name : ")
        usubject= input("Enter new Subject : ")
        query = "update students set name = '%s',subject = '%s' where id = '%s'" % (uname,usubject,id)
        cursor.execute(query)
        a.commit()

    elif c==4:
        id = int(input("Enter id : "))
        query = "delete from students where id = '%s'" % (id)
        cursor.execute(query)
        a.commit()

    elif c==5:
        print("Thank you for using this application!!!")
        break

    else:
        print("Invalid Input!!!")