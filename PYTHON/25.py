n= input("enter a string: ")
a=len(n)
b=n.find("not")
c=n.find("bad")
print(b,c)
if c>b and b>0 and c>0:
    print(n[0:b]+"good"+n[c+3:])
