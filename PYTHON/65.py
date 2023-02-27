n=False
try:
    n=open(arjun.txt)
    line=n.read()
    print(line)
except IOError as e:
    print(e)
finally:
    if(n):n.close()