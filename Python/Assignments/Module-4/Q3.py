f=open(r'C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass.txt','a')
f.write("\nThis is my first text.")
f.close()

f=open(r'C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass.txt',"r")
print(f.read())
f.close()