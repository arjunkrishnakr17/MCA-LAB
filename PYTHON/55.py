try:
    class rectangle:
        def __init__(self):
            self.l=int(input("enter length: "))
            self.b=int(input("enter breadth: "))
        def area(self):
            return self.l*self.b
        def perimeter(self):
            return 2*(self.l+self.b)
    r=rectangle()
    print("area= ",r.area())
    print("perimeter= ",r.perimeter())
except ValueError as e:
    print(e)