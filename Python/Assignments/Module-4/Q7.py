f=open(r"C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass.txt","r")
s=f.read().split()
# print(s)
m=len(s[0])
w=s[0]
l1=[]
for i in s:
    if m>len(i):
        m=m
        w=w
    else:
        m=len(i)
        w=i
    
for i in s:
    if len(i)==m:
        l1.append(i)
print("The length of the longest words is : ",m)
print("The longest words are : ",l1)
f.close()