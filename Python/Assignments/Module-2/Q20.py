s1=[]

while True:
    s=input("Enter a word : ")

    print("Want to enter another word?\nPlease press '1' to enter more and '0' to stop.")
    a=int(input("Enter your choice : "))
    if(a==1):
        s1.append(s)
        continue
    elif(a==0):
        s1.append(s)
        break
    else:
        s1.append(s)
        print("Invalid Input.")
        break

n=len(s1)
l=len(s1[0])
for i in range (1,n):
    if(len(s1[i])>l):
        l=len(s1[i])
    else:
        l=l

print("The length of the longest word is : ",l)