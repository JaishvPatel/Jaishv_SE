f=open(r"C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass1.txt","w")
l=['Darshan','Prashant','Jaishv']
for i in range (len(l)):
    f.writelines(l[i])
    f.writelines("\n")
f.close()