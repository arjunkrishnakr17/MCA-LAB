n=input("enter a string: ").split(" ")
print(n)
#print(n.sorted())
#a=list(n)
#print(n)
#a.sort()
#print(a)
i=0
a=[]
while i<len(n):
    if n[i] not in a:
        a.append(n[i])
    i+=1
a.sort()
print(a)



