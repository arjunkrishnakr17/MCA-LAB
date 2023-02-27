try:
    n=int(input("enter a number: "))
    a=int(input("enter a number"))
    s=n/a
    print(s)
except ZeroDivisionError as b:
    print(b)
except ValueError as e:
    print(e)