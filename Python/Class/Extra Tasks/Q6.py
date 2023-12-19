# Q3 second method(shorter)

l=[]   # declared a blank list

#---------------------------------------------------------------------------------------

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

#---------------------------------------------------------------------------------------

index=int(input("Enter the index till you want to reverse the string : "))
print(l[index::-1] + l[index+1:])

"""It will print the output which is the sum of reverse of the string from starting upto that particular index 
 and the remaining list from the next index upto end."""