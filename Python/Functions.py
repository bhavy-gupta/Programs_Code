#WAP to find maximum of two Numbers.
'''
def check(a,b):
    if a>b:
        print("A is greater than B.")
    else:
        print("B is greater than A.")

a=int(input("Enter First Number : "))
b=int(input("Enter Second Number : "))
check(a,b)
'''
#WAP to print factorial of the given number .
'''
def fact(a):
    f=1
    for i in range(1,a+1):
        f=f*i
    print("Factorial of ",a," = ",f)

a=int(input("Enter Number : "))
fact(a)
'''
#WAP to pass the radius of a circle as a parameter of a function area()
#return none if the value of radius is negative or return the area of circle
'''
def area(r):
    if r>=0:
        return 3.14*r*r
    else:
        return None

r=int(input("Enter Radius : "))
print("Area of Circle =",area(r))
'''
#WAP to calc(a,b) to calculate and return at once the result of arithmetic operations such as addition and subtraction
'''
def calc(n1,n2):
    return n1+n2,n1-n2

print(calc(10,20))
'''
#WAP to return multiple values from a function which returns square and cube together.
'''
def multiple(n):
    s=n**2
    c=n**3
    return s,c

n=int(input("Enter a Number : "))
s,c=multiple(n)
print("Square of Number = ",s)
print("Cube of Number = ",c)
'''
#WAP to compute Compound INterest with p,r,t as parameters
'''
def ci(p,r,t):
    return (p*(1+r/100)**t)-p

p=int(input("Enter Principle : "))
r=float(input("Enter Rate : "))
t=int(input("Enter Time : "))
print("Compound Interest = Rs.",ci(p,r,t))
'''
#WAP that prompts a user to enter the element of a list and add the elements to a list.
#Write a Function maximun(list) and minimum(list) to find max and min from the list.
'''
def maximum(lis):
    return max(lis)

def minimum(lis):
    return min(lis)

lis=[]
n=int(input("Enter Number of Elements : "))
for i in range(n):
    lis.append(int(input("Enter Element : ")))
print(maximum(lis))
print(minimum(lis))
'''
#WAP to remove first and last elements from the list.
'''
def remove(lis):
    return lis[1:-1]

lis=[]
n=int(input("Enter Number of Elements : "))
for i in range(n):
    lis.append(int(input("Enter the Elements : ")))
print(remove(lis))
'''
#WAP to extract even numbers from the list
'''
def extract(lis):
    even=[]
    for i in lis:
        if i%2==0:
            even.append(i)
    return even

lis=[]
n=int(input("Enter Number of Elements : "))
for i in range(n):
    lis.append(int(input("Enter the Elements : ")))
print(extract(lis))
'''
