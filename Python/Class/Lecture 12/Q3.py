# Write a python program to find index of not and poor in the string and replace "not poor" by "good".

s=input("Enter a string  : ")
in1=-1
in2=-1
for i in range (len(s)):
    if s[i]=='n' and s[i+1]=='o' and s[i+2]=='t':
        in1=i
        print("The index of not is : ",in1)
    if s[i]=='p' and s[i+1]=='o' and s[i+2]=='o' and s[i+3]=='r':
        in2=i
        print("The index of poor is : ",in2)
a=s[:in1]
b=s[in2+4:]

if in1+4==in2:
    print(a+"good"+b)