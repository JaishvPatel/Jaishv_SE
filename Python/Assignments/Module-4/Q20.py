try:
    n = int(input("Enter a number : "))
    if n%2!=0:
        print("You entered a correct choice.")
    else:
        print("Exception Caught.")
except:
    print("Exception Caught.")
