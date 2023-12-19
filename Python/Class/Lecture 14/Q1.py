class Employee:
    def getdata(self,l=[]):
        self.id = id
        self.name = name
        self.c_name = c_name
        self.package = package
        self.m_salary = m_salary

    def printdata(self):
        print("Employee Id : ",self.id)
        print("Employee Name : ",self.name)
        print("Employee's Company Name : ",self.c_name)
        print("Employee's Package : ",self.package)
        print("Employee's Monthly Salary : ",self.m_salary)

obj = Employee()
while 1:
    id=int(input("Enter Employee's id here : "))
    name=input("Enter Employee Name here : ")
    c_name=input("Enter Employee's Company name here : ")
    package=int(input("Enter Employee's package here : "))
    m_salary=int(input("Enter Employee's monthly salary here : "))
    choice = int(input("Press 1 to Enter more data or 0 to end."))
    if choice == 1:
        l.append(obj.getdata([id,name,c_name,package,m_salary]))
    else:
        break
obj.printdata()