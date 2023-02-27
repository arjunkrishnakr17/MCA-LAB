n=int(input("enter a number: "))
a=int(input("enter second number: "))
b=lambda n,a:n if n>a else a
print("largest= ",b(n,a))
