n=int(input("enter a number: "))
def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
print("factorial of",n,"=",fact(n))

