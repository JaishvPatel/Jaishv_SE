from tkinter import *

root = Tk()
root.geometry("500x500")  # provides the window size
root.configure(bg='black')  # gives the window\background color
root.title("Registration Form")  # gives the title of that window

label_id = Label(root,text="ID",font=("Arial",12,'bold'),fg='green',bg='black')  # Label() tag gives the label and allows doing adjustments
label_id.place(x=50,y=50)   # place() tag to manually place the object

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

e_id = Entry(root,font=("Arial",12),bg="red")  # Entry() tag makes the box where user can input values
e_id.place(x=150,y=50)                            # font() to change the font style, size or to bold it. We can also provide Italic to make fonts slant
                                                  # bg() tag to change the background color
e_fname = Entry(root,font=("Arial",12),bg="red")  # fg() tag to change the font color
e_fname.place(x=150,y=100)

e_lname = Entry(root,font=("Arial",12),bg="red")
e_lname.place(x=150,y=150)

e_email = Entry(root,font=("Arial",12),bg="red")
e_email.place(x=150,y=200)

e_mobile = Entry(root,font=("Arial",12),bg="red")
e_mobile.place(x=150,y=250)

e_address = Entry(root,font=("Arial",12),bg="red")
e_address.place(x=150,y=300)

insert = Button(root,text="INSERT",font=("Arial",12),bg="aqua",fg='red')  # Button() tag makes buttons
insert.place(x=50,y=350)

search = Button(root,text="SEARCH",font=("Arial",12),bg="aqua",fg='red')
search.place(x=125,y=350)

delete = Button(root,text="DELETE",font=("Arial",12),bg="aqua",fg='red')
delete.place(x=210,y=350)

submit = Button(root,text="SUBMIT",font=("Arial",12),bg="aqua",fg='red')
submit.place(x=292,y=350)

update = Button(root,text="UPDATE",font=("Arial",12),bg="aqua",fg='red')
update.place(x=370,y=350)

root.mainloop()   # .mainloop() is to show our window

# .pack() aligns the alloted object at the centre