from packagedemo import *

while True:
    print("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Factorial")
    c=int(input("Enter your choice here : "))
    if c==1:
        add()
        continue
    elif c==2:
        sub()
        continue
    elif c==3:
        mul()
        continue
    elif c==4:
        div()
        continue
    elif c==5:
        fac()
        continue
    else:
        print("Invalid Input.")
        break