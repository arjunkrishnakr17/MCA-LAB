n=input("enter a string: ").split(" ")
i=0
count=0
while i<len(n):
    if i<len(n[i])>=2 and n[i][0]==n[i][-1]:
        count+=1
    i+=1
print("count=",count)



