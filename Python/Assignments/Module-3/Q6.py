l=[]
while 1:
    s=input("Enter a string : ")
    l.append(s)
    print("Want to enter any more strings ? ",end=" ")
    c=int(input("Please enter '1' to add more strings else enter '0' to continue further."))
    if c==1:
        continue
    elif c==0:
        break
    else:
        print("Invalid Input.")
        break

count=0

for i in l:
    n=len(i)
    if n>=2 and i[0]==i[n-1]:
        count+=1

print(count)