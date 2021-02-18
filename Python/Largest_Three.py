# WAP to check Largest Number from Three Numbers.

a=int(input("Enter First Number : "))
b=int(input("Enter Second Number : "))
c=int(input("Enter Third Number : "))

if a>b and a>c:
    print("First Number is Largest")
elif b>a and b>c:
    print("Second Number is Largest")
else:
    print("Third Number is Largest")
