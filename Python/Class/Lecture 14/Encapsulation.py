# Encapsulation method

class Data:
    def putdata(self,id,name,address):
        self.id = id
        self.name = name
        self.address = address
    
    def wrapdata(self,id1,name1,address1):
        self.id1 = id1
        self.name1 = name1
        self.address1 = address1

    def printdata(self):
        print("Id : ",self.id)
        print("Name : ",self.name)
        print("Address : ",self.address)

    def printdata1(self):
        print("Id : ",self.id1)
        print("Name : ",self.name1)
        print("Address : ",self.address1)

obj = Data()
obj.putdata(1,"Prashant","Ahmedabad")
obj.printdata()
obj.wrapdata(2,"Jaishv","Gandhinagar")
obj.printdata1()