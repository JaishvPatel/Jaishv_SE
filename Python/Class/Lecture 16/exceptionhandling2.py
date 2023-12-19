# Method 1

try:
    l = [1,2,3,4,5,6]
    l1 = int(input("Enter index: "))
    print(l[l1])

except IndexError as e:
    print("Exception Caught : ",e)

# Method 2
    
try:
    l = [1,2,3,4,5,6]
    l1 = int(input("Enter index: "))
    print(l[l1])

except:
    print("Please input valid data!!")

finally:
    print("Thank you for using this!!")