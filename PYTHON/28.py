n=int(input("enter the limit: "))
f,a=0,1
for i in range(n):
        print(f,end='\t')
        f,a=a,f+a
