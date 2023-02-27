dict={1:'vineeth',2:'arjun'}
list=[i for i,k in dict.items()]
print(list)
f=0
n=int(input("enter a key: "))
print(type(n))
print(dict.items())
if(n in dict.keys()):
    print("key exists")
else:
    print("key doesnt exits")
for i in list:
    if n==i:
        print("key exists")
        break
        exit()
    else:
        print("key doesnt exists")
        break
          # f=1
        #if(f==1):
         #   print("key exits")
        #f+=f
if f==0:
    print("key doesnt exist")
#if f==1:
   # print("key exist")
#else:
    #print("doesnt exist")

#if n==dict.items():
 #   print("key exits")
#else:
 #   print("key doesnt exist")