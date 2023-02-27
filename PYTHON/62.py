class person:
    def __init__(self):
        self.name=input("enter name: ")
        self.rollno=input("enter rollno: ")
    def display(self):
        print("name=",self.name ,"\nrollno=",self.rollno)
class marks:
    def __init__(self):
        self.maths=int(input("enter maths marks: "))
        self.computer=int(input("enter computer marks: "))
    def display(self):
        print("maths=",self.maths,"\ncomputer=",self.computer)
class student(person,marks):
    def __init__(self):
        super().__init__()
        marks.__init__(self)
        self.percentage=(self.maths+self.computer)/2
    def dislpay(self):
        super().display()
        marks.display(self)
        print("percentage=",self.percentage)
try:
    s1=student()
    s1.display()
except Exception as e:
    print(e)


