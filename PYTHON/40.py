def arithemetic(a,b):
    return (a+b,a*b,a-b,a/b)
a=int(input("enter first number: "))
b=int(input("enter second number: "))
n=arithemetic(a,b)
print("sum= ",n[0],"product= ",n[1],"subtraction= ",n[2],"division= ",n[3])

