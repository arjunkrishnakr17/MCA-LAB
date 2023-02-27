list1=input("enter list 1:")
list1=list(map(str,list1.split(" ")))
print(list1)
list2=input("enter list 2:")
list2=list(map(str,list2.split(" ")))
print(list2)
for i in list2:
    list3=[j for j in list1 if j!=i]
print(list3)
