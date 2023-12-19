d={}
while True:
    n=int(input("Enter a key : "))
    v=int(input("Enter it's value : "))
    d[n]=v
    print("Want to append more key-value pair in the dictionary?")
    print("Press '1' to enter more, else press '0' to continue further.")
    c=int(input("Enter your choice : "))
    if c==1:
        continue
    elif c==0:
        break
    else:
        print("Invalid Input.")
        break

print(d)