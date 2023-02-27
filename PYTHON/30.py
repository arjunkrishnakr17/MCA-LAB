n=int(input("enter starting range: "))
a=int(input("enter ending range: "))
import math
for i in range (n,a):
    if i%2==0 and int(math.sqrt(i))**2==i:
        print(i)
    else:
        print("jhvq")
        break


