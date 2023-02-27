n=input("enter a string: ")
ch=n[0]
n=n.lower().replace(ch,"&")
print(ch+n[1:])