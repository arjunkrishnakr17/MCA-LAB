class publisher:
    def __init__(self):
        self.name=input("enter name: ")
    def display(self):
        print("name=",self.name)
class book(publisher):
    def __init__(self):
        super().__init__()
        self.title=input("enter title: ")
        self.author=input("enter author name: ")
    def display(self):
        super().display()
        print("title: ",self.title)
        print("author= ",self.author)
class python(book):
    def __init__(self):
        super().__init__()
        self.price=int(input("enter price: "))
        self.page=int(input("enter page: "))
    def display(self):
        super().display()
        print("price=",self.price)
        print("pages=",self.page)
try:
    p1=python()
    p1.display()
except Exception as e:
    print(e)