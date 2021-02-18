class Rect():
    def __init__(self,l,b):
        self.len=l
        self.bre=b
    
    def area(self):
        return self.len*self.bre

l=int(input("Enter Length of Rectangle : "))
b=int(input("Enter Breadth of Rectangle : "))
a=Rect(l,b)
print("Area of Rectangle =",a.area())