import mysql.connector as m

a=m.connect(host="localhost",user="root",password="tiger",database="tkintertrial")
c=a.cursor()

def add():
    (self_id,self_fname,self_lname,self_email,self_mobile,self_address) = (e_id,e_fname,e_lname,e_email,e_mobile,e_address)
    c.execute("Insert into data values (%s,%s,%s,%s,%s,%s)" % (self_id,self_fname,self_lname,self_email,self_mobile,self_address))
    a.commit()

def find():
    s_id = int(input("Enter ID : "))
    c.execute("select * from data where id = %s"%(s_id))
    a.commit()

def erase():
    s_id = int(input("Enter ID : "))
    c.execute("delete from data where id = %s"%(s_id))
    a.commit()

def upd():
    u_id=int(input("Enter id to be updated : "))
    c.execute("Update data set (%s,%s,%s,%s,%s) where id = %s" % (e_fname,e_lname,e_email,e_mobile,e_address,u_id))
    a.commit()

def display():
    c.execute("Select * from data")
    a.commit()

from tkinter import *

root = Tk()
root.geometry("500x500")
root.configure(bg='black')
root.title("Registration Form")

label_id = Label(root,text="ID",font=("Arial",12,'bold'),fg='green',bg='black')
label_id.place(x=50,y=50)   

label_fname = Label(root,text="First Name",font=("Arial",12,'bold'),fg='green',bg='black')
label_fname.place(x=50,y=100)

label_lname = Label(root,text="Last Name",font=("Arial",12,'bold'),fg='green',bg='black')
label_lname.place(x=50,y=150)

label_email = Label(root,text="Email",font=("Arial",12,'bold'),fg='green',bg='black')
label_email.place(x=50,y=200)

label_mobile = Label(root,text="Mobile",font=("Arial",12,'bold'),fg='green',bg='black')
label_mobile.place(x=50,y=250)

label_address = Label(root,text="Address",font=("Arial",12,'bold'),fg='green',bg='black')
label_address.place(x=50,y=300)

e_id = Entry(root,font=("Arial",12),bg="red")  
e_id.place(x=150,y=50)                          
                                                
e_fname = Entry(root,font=("Arial",12),bg="red")
e_fname.place(x=150,y=100)

e_lname = Entry(root,font=("Arial",12),bg="red")
e_lname.place(x=150,y=150)

e_email = Entry(root,font=("Arial",12),bg="red")
e_email.place(x=150,y=200)

e_mobile = Entry(root,font=("Arial",12),bg="red")
e_mobile.place(x=150,y=250)

e_address = Entry(root,font=("Arial",12),bg="red")
e_address.place(x=150,y=300)

insert = Button(root,text="INSERT",font=("Arial",12),bg="aqua",fg='red',command=add())
insert.place(x=50,y=350)

search = Button(root,text="SEARCH",font=("Arial",12),bg="aqua",fg='red',command=find())
search.place(x=125,y=350)

delete = Button(root,text="DELETE",font=("Arial",12),bg="aqua",fg='red',command=erase())
delete.place(x=210,y=350)

update = Button(root,text="UPDATE",font=("Arial",12),bg="aqua",fg='red',command=upd())
update.place(x=292,y=350)

show = Button(root,text="SHOW",font=("Arial",12),bg="aqua",fg='red',command=display())
show.place(x=370,y=350)

root.mainloop()