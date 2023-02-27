class Validate(Exception):pass
try:
    n=input("enter username: ")
    a=input("enter pass: ")
    if n=="arjun" and a=="arjun123":
        print("login successfull")
    else:
        raise Validate("login unsuccessfull")
except Validate as e:
    print(e)
