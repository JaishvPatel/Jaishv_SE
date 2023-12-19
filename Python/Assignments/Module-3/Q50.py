s=input("Enter a string : ")
n=len(s)
s1=s[n::-1]
if s1==s:
    print("The given string is a palindrome.")
else:
    print("The given string is not a palindrome.")