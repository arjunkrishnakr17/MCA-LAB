class time:
    def __init__(self,h=0,m=0,s=0):
        self.__hour=h
        self.__minute=m
        self.__second=s
    def display(self):
          print("{:02d}".format(self.__hour),"-","{:02d}".format(self.__minute),"-","{:02d}".format(self.__second))
    def __lt__(self,other):
        if((self.__hour<other.__hour) or (self.__hour==other.__hour and self.__minute<other.__minute) or (self.__hour==other.__hour and self.__minute==other.__minute and self.__second<other.__second) ):
            print("time1 is less than time 2")
        else:
            print("time1 is not less than time2")
try:
    print("time1")
    h1=int(input("enter hour: "))
    m1=int(input("enter minute: "))
    s1=int(input("enter second: "))
    t1=time(h1,m1,s1)
    t1.display()

    print("time2")
    h2=int(input("enter hour: "))
    m2=int(input("enter minute: "))
    s2=int(input("enter second: "))
    t2=time(h2,m2,s2)
    t2.display
    t1.__lt__(t2)
except Exception as e:
    print(e)



