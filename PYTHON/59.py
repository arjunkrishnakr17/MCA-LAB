class rectangle:
    def __init__(self):
        self.__l=int(input("enter length: "))
        self.__b=int(input("enter breadth: "))
    def area(self):
        return self.__l*self.__b
    def __lt__(self,other):
         if (self.area())<(other.area()):
             print("true,area of rectangle1<area of rectangle2")
         else:
             print("false")
try:
    print("rectangle1")
    r1=rectangle()
    print("rectangle2")
    r2=rectangle()
    r1.area()
    r2.area()
    r1.__lt__(r2)
except Exception as e:
    print(e)


