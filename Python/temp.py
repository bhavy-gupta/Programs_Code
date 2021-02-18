import re
'''
n="BCA_1_A_bhavy gupta"
#final = re.findall(r'(?=[0-9]).*(?=\_)',n)
final = re.findall(r'(?<=_)[a-zA-Z0-9]+',n)

print(final)


'''
n="GLAU"
s="_"
for i in n:
    if(i==s):
        n = n.partition(s)[2]
print(n)