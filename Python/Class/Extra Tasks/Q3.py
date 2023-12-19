l=[]   # a blank is pre defined to append the elements provided by the user

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

l1=[]
l2=[]
index=int(input("Enter the index till you want to reverse the string : "))
l1=l[:index] # a new list is created which has elements from list 'l' till the required index
l1.reverse()  # reverse the above list
l2=l[index:]  # a new list is created which has the remaining elements after the provided index
l=l1+l2  # the user defined list is recreated here
print(l)