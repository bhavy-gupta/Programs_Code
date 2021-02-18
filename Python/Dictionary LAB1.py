# Dictionary Programs

#WAP that takes a string as input and generates a frequency of characters in it.

'''

a=input("Enter a String : ")
d={}
for i in a:
    if(i in d.keys()):
        d[i]+=1
    else:
        d.update({i:1})
print(d)

'''

#WAP to count the frequency of characters using get method and print the values into the dictionary.
'''
a=input("Enter a String : ")
d=dict()
for i in a:
    if(i in d):
        d[i]=d.get(i,0)+1
    else:
        d[i]=1
print(d)
'''
#WAP to print and store squares of number into a dictionary.
'''
a=int(input("Enter A Number : "))
d=dict()
for i in range(1,a+1):
    d[i]=i**2
print(d)
'''
#WAP to convert octal number into binary and store it into the dictionary.
'''
d=dict()
n=int(input("Enter a Octal Number : "))
for i in range(1,n):
    b=bin(int(str(i),16))
    d[i]=b
print(d)
'''
#WAP to evaluate a polynomial of one variable i.e. x if the value of x is 2
# Ex: p(x)=2+2x+3x^2 =2+4+12=18
'''
x=int(input("Enter value of x : "))
y=int(input("Enter number of terms : "))
p=dict()
for i in range(y):
    print("For ",i+1," Term : ")
    k=int(input("Enter Exponential of x : "))
    c=int(input("Enter Coefficient of x : "))
    p.update({k:c})
s=0
for i in p:
    s=s+p[i]*x**i
print(s)
'''
#WAP to concatenate two Dictionaries.
'''
d1={x:z for x in input("Enter Key : ").split() for z in input("Enter Value : ").split()}
d2={x:z for x in input("Enter Key : ").split() for z in input("Enter Value : ").split()}
d1.update(d2)
print(d1)
'''
#WAP to generate a dictionary for squares of number
'''
a=int(input("Enter a Number : "))
d={x:x*x for x in range(1,a+1)}
print(d)
'''
#WAP to store 5 username and password . the usernmae is not editable.
'''
d=dict()
for i in range(5):
    print("For",i+1,"User : ")
    u=input("Enter Username : ")
    p=input("Enter Password : ")
    d[u]=p
print(d)
'''
#Reverse a List
'''
l1=[100,200,300,400,500]
l1.reverse()
print(l1)
'''
#Concatenate List index-wise:
'''
l1=["M","na","i","ke"]
l2=["y","me","s","lly"]
res=[i+j for i,j in zip(l1,l2)]
print(res)
'''
#WAP to sum all items in a Dictionary.
'''
d={x:int(y) for x in input("Enter Keys : ").split() for y in input("Enter Value : ").split()}
print(sum(d.values()))
print(d)
'''
#WAP to user defined function in python named DELETION(name) where name is an argument to delete phone number from a dictionary phone-book on the basis of the name , where name is the key.
'''
def DELETION(name):
    del d[name]
    
d={x:y for x in input("Enter Name : ").split() for y in input("Enter Number : ").split()}
print(d)
n=input("Enter Name for Delete Phone Number : ")
DELETION(n)
print(d)
'''
# Python Program to Check if a Given Key exists in a Dictionary or not .
'''
d={x:y for x in input("Enter Key : ").split() for y in input("Enter Value : ").split()}
c=input("Enter Key to Check : ")
if c in d:
    print("Key Exists..")
else:
    print("Key Not Exists..")
'''
