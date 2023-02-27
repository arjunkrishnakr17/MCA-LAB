n=int(input("enter a number: "))
def sumdigit(n):
    if n==0:
        return 0
    else:
        sum=0
        sum+=int(n%10+sumdigit(n/10))
        return sum
print("sum of digits= ",sumdigit(n))


