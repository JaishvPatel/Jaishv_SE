l=[]

while 1:
    print("Press '1' to append string into tuple.")
    print("Press '2' to append integers into tuple.")
    print("Press '0' to continue further.")
    c=int(input("Enter your choice : "))
    if c==1:
        s=input("Enter a string : ")
        l.append(s)
        continue
    elif c==2:
        i=int(input("Enter a number : "))
        l.append(i)
        continue
    elif c==0:
        break
    else:
        print("Invalid Input")
        break

t=tuple(l)
print(t)