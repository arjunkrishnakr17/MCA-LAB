class rectangle:
    def __init__(self):
        self.length=int(input("enter length: "))
        self.breadth=int(input("enter breadth: "))
class cuboid(rectangle):
    def __init__(self):
        super().__init__()
        self.height=int(input("enter height: "))
    def volume(self):
        return self.length*self.breadth*self.height
    def __le__(self,other):
        if(self.volume()<=other.volume()):
            print("true")
        else:
            print("false")
try:
    print("cuboid 1")
    c1=cuboid()
    print("cuboid2")
    c2=cuboid()
    c1.__le__(c2)
    #print(c1<=c2)
except Exception as e:
    print(e)