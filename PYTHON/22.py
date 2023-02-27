n=input("enter a string: ").split()
print(n)
dict={}
dict={i:len(i) for i in n}
print(dict)
print(max(dict.values()))
#print(len(dict[max(dict.keys())]))
if dict[max(dict.values())]>1:
    print("BING0")
