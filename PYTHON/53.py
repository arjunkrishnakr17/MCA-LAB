"""
#operations.py
def sum(a,b):
    return a+b
def sub(a,b):
    return a-b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b
    """

import operations
try:

    a=int(input("enter number: "))
    b=int(input("enter number : "))
    print("sum= ",operations.sum(a,b),"subtraction= ",operations.sub(a,b),"multiplications= ",operations.mul(a,b),"division= ",operations.div(a,b))
except ValueError as e:
    print(e)
