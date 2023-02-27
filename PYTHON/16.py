n=input("enter a word: ")
print(n)
dict={}
for i in n:
    if i in dict:
        dict[i]+=1
    else:
        dict[i]=1
print(dict)
