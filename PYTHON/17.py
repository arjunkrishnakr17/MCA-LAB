n=input("enter list 1: ")
m=input("enter list 2: ")
n=list(map(int,n.split(" ")))
m=list(map(int,m.split(" ")))
print(n)
print(m)
if len(n)==len(m):
    print("same length")
else:
    print("different length")
sum1,sum2=0,0
for i in n:
    sum1+=i
for i in m:
    sum2+=i
if sum1==sum2:
    print("sum equal")
else:
    print("sum not equal")
for i in n:
    if i in m:
        f=1
    else:
        f=0
if f==1:
    print("some elements occur in both list")
else:
    print("no common elements")





