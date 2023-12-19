class Point:
    def __init__(self,x,y):
        print("Init Called")
        self.x = x
        self.y = y

    def __str__(self):
        return "{0},{1}".format(self.x,self.y)
    
    def __add__(self,obj):
        x= self.x + obj.x
        y= self.y + obj.y

        return (x,y)
    
    def __sub__(self,obj):
        x= self.x - obj.x
        y= self.y - obj.y

        return (x,y)
    
obj = Point(30,40)
print(obj)

obj1 = Point(10,20)
print(obj1)

print("Addition : ",obj+obj1)
print("Subtraction : ",obj-obj1)