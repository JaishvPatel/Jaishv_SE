n1=int(input("Enter the number 1 : "))
n2=int(input("Enter the number 2 : "))
n3=int(input("Enter the number 3 : "))

if(n1>n2):
    if(n1>n3):
        print("number 1 is greatest.")
    else:
        print("number 3 is greatest.")
else:
    if(n2>n3):
        print("number 2 is greatest.")
    else:
        print("number 3 is greatest.")