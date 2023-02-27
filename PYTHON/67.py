n=False
a=False
try:
    b=input("enter file 1: ")
    c=input("enter file 2: ")
    n=open(b,"r")
    a=open(c,"a")
    line=a.readline()
    while(line):
        n.write(line)
        line=a.readline()

