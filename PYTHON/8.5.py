n=input("enter the list: ")
n=list(map(int,n.split()))
list=[i for i in n if i%2!=0]
print(list)