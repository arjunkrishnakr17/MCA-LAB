class bank:
    def __init__(self):
        self.accno=int(input("enter acc no: "))
        self.name=input("enter name: ")
        self.acctype=input("enter acc type: ")
        self.b=int(input("enter balance: "))
    def deposit(self):
        self.d=int(input("enter deposit amount: "))
        self.b+=self.d
        print("balance=",self.b)
    def withdraw(self):
        self.w=int(input("enter amount to withdraw: "))
        if self.w>self.b:
            print("insufficient balance: ")
        else:
            print("amount withdrawed successfully")
            self.b=self.b-self.w
            print("balanace=",self.b)
try:
    b=bank()
    while(1):

        n=int(input("click 1 to deposit \nclick 2 to withdraw\n3.exit: \n"))
        if n==1:
            b.deposit()
        elif n==2:
            b.withdraw()
        else:
            break

except Exception as e:
    print(e)

