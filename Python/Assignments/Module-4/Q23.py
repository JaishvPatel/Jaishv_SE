class Rectangle:
    def length(self):
        l= int(input("Enter the length of the rectangle : "))
        self.l = l
    def breadth(self):
        b = int(input("Enter the breadth of the rectangle : "))
        self.b = b
    def area(self):
        print("The area of the rectangle is : ",self.l*self.b)

obj = Rectangle()
obj.length()
obj.breadth()
obj.area()