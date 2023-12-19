l=[]
while 1:
    n=input("Enter a decimal number here : ")
    l.append(n)
    print("Press '1' to add more numbers else '0' to discontinue.")
    choice=int(input("Enter your choice : "))
    if choice==1:
        continue
    elif choice==0:
        break
    else:
        print("Invalid Input.")
        break
print(l)
max=l[0]
min=l[0]
for i in l:
    if max>i:
        max=max
    else:
        max=i
    if min<i:
        min=min
    else:
        min=i
print("The maximum number is : ",max)
print("The minimum number is : ",min)