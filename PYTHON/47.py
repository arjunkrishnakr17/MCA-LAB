n=int(input("enter the limit: "))
def sum(n):
    if n==1:
        return 1
    else:
        return n+sum(n-1)
print("sum= ",sum(n))