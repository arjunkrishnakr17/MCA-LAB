a=input("enter the string: ").split(" ")
b=list(a)
n=input("enter the item to be checked: ")
#for i in a:
 #   if i==n:
  #      f=1
#if f==1:
 #   print("item found")
#else:
 #   print("not found")
print("available") if n in b else print("not found")