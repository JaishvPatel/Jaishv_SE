l=[]
while True:
    i=input("Enter a value : ")
    l.append(i)
    print("Press '1' to enter more values else press '0' to proceed further.")
    c=int(input("Enter your choice : "))
    if c==1:
        continue
    elif c==0:
        break
    else:
        print("Invalid Input.")
        break
t=tuple(l)
print(t)