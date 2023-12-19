#Q3 proper program

l=[]
while 1:
    e=input("Enter any element to input in a list : ")
    l.append(e)
    print("Please enter'1' to add another element in list, else enter '0'.")
    c=int(input("Enter your choice : "))
    if c==1:
        continue
    elif c==0:
        break
    else:
        print("Invalid Input.")
        break
print("Your list is : ",l)
while True:
    index=int(input("Enter the index till you want to reverse the string : "))
    if len(l)>=index:
        l1=l[:index]
        l1.reverse()
        l=l1+l[index:]
        print(l)
        break
    else:
        print("Please enter a valid index value.")
        continue