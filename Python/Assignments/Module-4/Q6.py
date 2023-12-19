l=[]
f=open(r"C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass.txt","r")
while True:
    s=f.readline()
    l.append(s)
    if not s:
        break
f.close()
print(l)