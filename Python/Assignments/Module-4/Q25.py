class Circle:
    def radius(self):
        r = int(input("Enter the radius of the circle : "))
        self.r=r
    def area(self):
        a = self.r**2
        print("The area of the circle is : ",3.14*a)
    def perimeter(self):
        print("The perimeter of the circle is : ",2*3.14*self.r)

obj = Circle()
obj.radius()
obj.area()
obj.perimeter()