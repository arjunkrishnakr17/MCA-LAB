n=input("enter a list of numbers: ").split(" ")
n=list(map(int,n))
sum=0
for i in n:
    sum+=i
print("sum= ",sum)
