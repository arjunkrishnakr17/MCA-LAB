n=False
try:
    n=open(arjun.txt,"w")
    line=input("enter text: ")
    while(line):
        n.write(line)
        line=input("enter text: ")

except IOError as e:
    print(e)
finally:
    if(n):n.close()