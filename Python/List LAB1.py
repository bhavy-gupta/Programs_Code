'''
#WAP to print list of multiples of a number

num=int(input("Enter a Number : "))
l=[]
for i in range(1,6):
    n=i*num
    l.append(n)

print(l)

'''
'''
#WAP to make a list of all Even Numbers by taking Starting and Ending from User.

num1=int(input("Enter Starting Number : "))
num2=int(input("Enter Ending Number : "))
l1=[]
for i in range(num1,num2):
    if(i%2==0):
        l1.append(i)

print(l1)

'''
#WAP to check whether the list is duplicate values or not. It prints("True") if a list contain duplicate elements
'''
l1=[]
n=int(input("Enter Number of Elements in list : "))
for i in range(1,n+1):
    a=int(input(("Enter {a} Element : ".format(a=i))))
    l1.append(a)
print(l1)
for i in range(0,n):
    a=0
    for j in range(0,n):
        if(l1[i]==l1[j]):
            a=a+1
if(a>1):
    print("Duplicate Element Found..")
else:
    print("List is Unique")
'''
'''
l1=[10,550,3,4,50]
l2=[]
for i in l1:
    if i not in l2:
        l2.append(i)
    else:
        print("List is Duplicate.")
        break
else:
    print("List is Unique")
'''
l1=[10,20,30,40,50]
l2=l1[::-1]
print(l2)
