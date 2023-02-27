n=list(map(int,input("enter the elements in list: ").split()))
print(n)
a=int(input("enter the element to be searched: "))
i=0
s=0
while i<len(n):
    if n[i]==a:
        s=s+1
    i=i+1
if s==0:
    print("element not found")
else:
    print("element found",s,"times")
