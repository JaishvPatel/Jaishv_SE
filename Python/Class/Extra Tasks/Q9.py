l=[]

while 1:
    e=input("Enter any element to input in a list : ")  # input element to append in list
    l.append(e)
    print("Please enter'1' to add another element in list, else enter '0'.")
    c=int(input("Enter your choice : "))
    if c==1:
        continue  # if user chooses 1, then the loop will again start from top
    elif c==0:
        break  # if user chooses 0, then the while loop will be automatically break
    else:
        print("Invalid Input.")
        break  # if user chooses any other integer other than 1 or 0, then it will print the following statement and automatically break
print("Your list is : ",l)
print("\nPlease provide the following details below to reverse the required string.")

while True:
    index=int(input("Enter the starting index : "))
    index1=int(input("Enter the ending index : "))
    if len(l)>index and len(l)>=index1:
        if index1>index:
            l1=l[index:index1+1]
            l1.reverse()
            print(l[:index]+l1+l[index1+1:])
            break
        else:
            print("Please provide valid indexes.")
            continue
    else:
        print("Please provide valid indexes.")
        continue