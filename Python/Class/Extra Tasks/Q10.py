# Banking System
print("********************Welcome to Universal Bank********************")
while True:
    print("Please Press '1' to Login or Press '2' to Sign Up")
    c=int(input("Enter your choice  : "))
    if c==1:
        name=input("Enter your name : ")
        password=input("Enter your password : ")
        while True:
            accno=int(input("Enter your bank account number : "))
            an=str(accno)
            if len(an)==8:
                break
            else:
                print("Please enter valid 8-digit Account Number.")
                continue
        break
    elif c==2:
        name=input("Enter your name : ")
        while True:
            password=input("Enter password : ")
            cpass=input("Enter your password again to confirm : ")
            if password==cpass:
                print("Your password has been saved successfully.")
                break
            else:
                print("Match not found.")
                print("Please enter again.")
                continue
        while True:
            while True:
                accno=int(input("Enter your bank account number : "))
                an=str(accno)
                if len(an)==8:
                    break
                else:
                    print("Please enter valid 8-digit Account Number.")
                    continue
            ch=input("Please enter 'Yes' to confirm and proceed or 'No' to reenter the account number : ")
            if ch=='Yes' or ch=='yes':
                print("Saved succuessfully.")
                break
            elif ch=='No' or ch=='no':
                continue
        print("Signed Up Successfully")
    else:
        print("Warning : Please enter valid input.")
        continue
    break
while True:
    print("Press '1' to Deposit Amount.")
    print("Press '2' to Withdraw Amount.")
    print("Press '3' to Check Balance.")
    print("Press '4' to Exit.")
    Balance=5000
    choice=int(input("Enter your choice : "))
    if choice==1:
        def depo():
            da=int(input("Enter the amount to deposit in the account : "))
            return da
        da=depo()
        continue
    elif choice==2:
        def withdraw(Balance):
            wa=int(input("Enter the amount to be withdrawn : "))
            if wa>Balance:
                print("The amount to be withdrawn exceeds the account balance.")
            else:
                print("The amount is withdrawn successfully.")
            return wa
        wa=withdraw(Balance)
        continue
    elif choice==3:
        Balance=Balance+da
        b=Balance-wa
        print("The balance in your account is : ",b)
        continue
    elif choice==4:
        break
    else:
        print("Invalid Input.\nWarning : Please enter valid inputs.")
        continue