l=[]
while 1:
    print("Want to enter anything in the list ? ")
    c=int(input("Please enter '1' to add more strings else enter '0' to continue further."))
    if c==1:
        s=input("Enter a string : ")
        l.append(s)
        continue
    elif c==0:
        break
    else:
        print("Invalid Input.")
        break

if len(l)>0:
    print("It is not an empty list.")
    print("Your list is : ",l)
else:
    print("It is an empty list.")