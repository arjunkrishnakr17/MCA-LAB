n=input("enter a number: ")
def sumdigit(n):
    sum=0
    for i in n:
        sum+=int(i)
    return sum
print("sum of digits= ",sumdigit(n))

