try:
    l=[1,2,3,4,5,6]
    c = int(input("Enter index : "))
    print(l[c])
except ValueError as e:
    print("Exception Caught : ",e)
except IndexError as e:
    print("Exception Caught : ",e)
finally:
    print("Thank you.")