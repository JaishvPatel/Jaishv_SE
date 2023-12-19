f=open(r"C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass.txt","r")
l=f.read().split()
d={}
for i in l:
    if i in d:
        d[i]+=1
    else:
        d[i]=1

print(d)
f.close()