f=open(r'C:\Users\jaish\OneDrive\Desktop\TOPS FILES\Jaishv_SE\Python\Assignments\Module-3\Timepass.txt',"r")
l=f.readlines()
n=int(input("Enter the number of lines you want to read from end : "))
d=len(l)
if n<=d:
    for i in range (d-1,d-n-1,-1):
        print(l[i]) 
else:
    print("The given number exceeds the number of lines in the file.")
    f.close()