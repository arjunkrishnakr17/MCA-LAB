n=input("enter a list of first names: ")
n=n.split(" ")
print(n)
list=[i for i in n if i.lower().startswith('a')]
print(list)
