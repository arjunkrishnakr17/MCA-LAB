class time:
    def __init__(self,h,m,s):
        self.__hour=h
        self.__minute=m
        self.__second=s
    def display(self):
        print("{:02d}".format(self.__hour),"-","{:02d}".format(self.__minute),"-","{:02d}".format(self.__second))
    def __add__(self,other):
        s=m=h=0
        s+=(self.__second+other.__second)%60
        m+=(self.__second+other.__second)//60
        m+=(self.__minute+other.__minute)%60
        h+=(self.__minute+other.__minute)//60
        h+=(self.__hour+other.__hour)%12
        return(time(h,m,s))

try:
    print("time1")
    h1=int(input("enter hour: "))
    m1=int(input("enter minute: "))
    s1=int(input("enter second: "))
    t1=time(h1,m1,s1)
    print("time2")
    h2=int(input("enter hour: "))
    m2=int(input("enter minute: "))
    s2=int(input("enter second: "))
    t2=time(h2,m2,s2)
    t1.display()
    t2.display()
    t3=t1+t2
    t3.display()
except Exception as e:
    print(e)

