class book:
    def __init__(self):
        self.title=input("enter title name: ")
        self.author=input("enter author name: ")
    def __str__(self):
        if hasattr(self,"publisher"):
            print(self.title,"written by",self.author,"is published by",self.publisher)
        else:
            print("unknown publisher")

try:
    b=book()
    print(b)
    setattr(b,"publisher","arjun")
    b.__str__()
except Exception as e:
    print(e)
