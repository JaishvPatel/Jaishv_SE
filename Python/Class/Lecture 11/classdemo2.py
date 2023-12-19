class Trial:
    def fact(self):
        n=int(input("Enter a number : "))
        fac=1
        for i in range (1,n+1):
            fac*=i
        print("The factorial of ",n," is : ",fac)
    
    def list(self):
        l=[1,2,3,4,1,2]
        l1=[]
        for i in l:
            if i not in l1:
                l1.append(i)
        print("The new list containing unique numbers is : ",l1)
    
obj= Trial()
obj.fact()
obj.list()