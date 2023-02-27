n=list(map(int,input("enter list of integers: ").split(" ")))
a=list(map(lambda i:(i+((10/100)*i)) if i>1000 else (i+((5/100)*i)),n))
print(a)
