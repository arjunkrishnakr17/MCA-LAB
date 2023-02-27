n=list(map(int,input("enter a list of numbers: ").split()))
i=0
while i<len(n):
    if n[i]==237:
        break
    elif n[i]%2==0:
        print(n[i])
    i=i+1
