class flower:
    def __init__(self):
        self.name=input("enter flower name: ")
    def __str__(self):
        if hasattr(self,"petalcolor"):
            print("petal color=",self.petalcolor,"name=",self.name)
        else:
            print("unknown flower")
try:
    f=flower()
    print(f)
    setattr(f,"petalcolor","yellow")
    f.__str__()
except Exception as e:
    print(e)


