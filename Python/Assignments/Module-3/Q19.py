l=[]
while True:
    i=int(input("Enter a number : "))
    l.append(i)
    print("Press '1' to enter more numbers else press '0' to print the tuple.")
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