def add(a,b):
    return a+b

def sub(a,b):
    return a-b

def mul(a,b):
    return a*b


while True:
    a=int(input("Enter A : "))
    b=int(input("Enter B : "))
    print("Press 1 for 'Addition'")
    print("Press 2 for 'Subtraction'")
    print("Press 3 for 'Multiplication'")
    print("Press 4 to Exit")
    choice=int(input("Enter your choice : "))
    if(choice==1):
        i=add(a,b)
        print(i)
        continue
    elif(choice==2):
        j=sub(a,b)
        print(j)
        continue
    elif(choice==3):
        k=mul(a,b)
        print(k)
        continue
    elif(choice==4):
        break
    else:
        print("Invalid Input")
        break