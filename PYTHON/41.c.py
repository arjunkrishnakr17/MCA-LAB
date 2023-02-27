n=input("enter a list of strings: ").split(" ")
a=list(filter(lambda i:(len(i)>=5),n))
print("list= ",a)

