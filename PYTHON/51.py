try:
    n=int(input("enter a number: "))
    if n>90 and n<120:
        raise ValueError("abnormal condition")
    else:
        raise ValueError("number accepted")
except ValueError as e:
    print(e)