# To check whether the key exists in the dictionary or not.

d={101:'jaishv',103:'prashant',105:'darshan',107:'meet',109:'jaydeep'}
n=int(input("Enter a key between 100 and 110 : "))
count=0
if n in d:
    print("This key exists in the dictionary.")
else:
    print("This key does not exist in the dictionary.")