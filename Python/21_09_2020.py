#WAP to print odd indexes of a Tuple.
'''
t=(1,3,2,4,6,5)
o=[]
for i in t:
    if t.index(i)%2==0:
        o.append(i)
o=tuple(o)
print(o)
'''
#WAP to pass a list in a function .calculate total no. of +ve and -ve from the list and
#print them in dictionary.
#l=[1,-2,7,-9] Output: {'Positive':2,'Negative':2}
'''
def check(lis):
    d={'Positive':0,'Negative':0}
    for i in lis:
        if i>=0:
            d['Positive']=d['Positive']+1
        else:
            d['Negative']=d['Negative']+1
    print(d)

lis=[1,-2,-87,3]
check(lis)
'''
#WAP to sum_all() to accept a variable number of arguments and display the sum of all the elements present in it.
'''
def sum_all(*ele):
    s=0
    for i in ele:
        s=s+int(i)
    return s

print(sum_all(10,20,30))
'''
#Consider two lists 
