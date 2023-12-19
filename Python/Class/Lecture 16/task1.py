class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def __str__(self):
        return "{0},{1}".format(self.x,self.y)
    
    def __add__(self,obj):
        x = self.x + obj.x
        y = self.y + obj.y

        return (x,y)
    
    def __sub__(self,obj):
        x = self.x - obj.x
        y = self.y - obj.y

        return (x,y)

    def add(self):
        return self.x + self.y
    
    def sub(self):
        return self.x - self.y
    
    def mul(self):
        return self.x * self.y
    
    def div(self):
        return self.x / self.y
    
obj = Point(20,30)
print("The two numbers are : ",obj)
print("Addition : ",obj.add())
print("Subtraction : ",obj.sub())
print("Multiplication : ",obj.mul())
print("Division : ",obj.div())

obj1 = Point(30,40)
print("The two numbers are : ",obj1)
print("Addition : ",obj1.add())
print("Subtraction : ",obj1.sub())
print("Multiplication : ",obj1.mul())
print("Division : ",obj1.div())

print("Addition of two objects will give : ",obj+obj1)
print("Subtraction of two objects will give : ",obj-obj1)