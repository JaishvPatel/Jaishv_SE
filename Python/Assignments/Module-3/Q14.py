l=[]
while 1:
    n=int(input("Enter numbers to append in list : "))
    print("Want to enter any more numbers ? ",end=" ")
    c=int(input("Please enter '1' to add more numberss else enter '0' to continue further."))
    if c==1:
        continue
    elif c==0:
        break
    else:
        print("Invalid Input.")
        break

l.sort()
print("The second smallest number in the list is : ",l[1])