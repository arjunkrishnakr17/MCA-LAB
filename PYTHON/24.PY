n=input("enter a string: ")
if len(n)==2:
    print(n+n)
elif len(n)<2:
    print("")
else:
    print(n[0:2]+n[-2:])