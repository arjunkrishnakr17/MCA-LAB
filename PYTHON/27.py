n=int(input("enter the number: "))
f=1
if n==0:
    print("factorial=0")
else:
    for i in range (1,n+1):
        f*=i
        i+=i
    print("factoriral=",f)