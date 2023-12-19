class Display1:
    def A(self):
        name = input("Enter name : ")
        rollno = int(input("Enter roll no : "))

class Display2(Display1):
    def B(self,l=[]):
        self.s = l
        print("Your list is : ",self.s)

class Display3(Display2):
    def C(self):
        sum=0
        for i in self.s:
            sum=sum+i

        avg=sum/4
        print("Total sum : ",sum)
        print("Average : ",avg)
        per=sum*100/1600
        print("Percentage : ",per)

obj=Display3()
obj.A()
obj.B([199,200,300,500])
obj.C()