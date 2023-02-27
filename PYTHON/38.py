n=input("enter a string: ")
def string(n):
    if n.startswith("ls"):
        return (n)
    else:
        return ("ls"+n)
print("string= ",string(n))