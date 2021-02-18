#WAp to print
'''
        *
        **
        ***
        ****
        *****
'''

for i in range(6):
    for j in range(i):
        print("*",end='')
    print()
    
#Opposite of above

for i in range(6):
    for j in range(5,i,-1):
        print('*',end=" ")
    print()
