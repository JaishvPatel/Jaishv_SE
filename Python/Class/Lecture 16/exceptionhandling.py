try:
    a=int(input("Enter number 1 : "))
    b=int(input("Enter number 2 : "))
    c=a/b
    print("Division : ",c)

except ZeroDivisionError as e:
    print("Exception Caught : ",e)

except ValueError as e:
    print("Exception Caught : ",e)