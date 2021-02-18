'''
a=input("Enter String 1 : ")
b=input("Enter String 2 : ")
for i in a:
    for j in b:
        if(i==j):
            print(i)
'''

a=input("Enter String 1 : ")
b=input("Enter String to check : ")
if b in a:
    print("True")
else:
    print("False")
