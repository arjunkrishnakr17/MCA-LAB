n=list(map(int,input("enter list of numbers: ").split(" ")))
print(n)
def odd_even(n):
    i=0
    count_odd=0
    count_even=0
    while i<len(n):
        if n[i]%2==0:
            count_even+=1
        else:
            count_odd+=1
        i+=1
    return print("no of odd numbers is",count_odd,"no of even numbers is",count_even)
odd_even(n)
