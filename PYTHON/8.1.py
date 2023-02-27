n=input("enter list of numbers:")
print(n)
a=n.split(" ")
print(a)
b=list(map(int,a))
print(b)
lst=[i for i in b if i>0]
print(lst)
