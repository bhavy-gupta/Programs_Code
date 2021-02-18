#WAP to check String is palindrome or not.
'''
s1=input("Enter a String : ")
s2=s1[::-1]
if(s1==s2):
    print("String is Palindrome.")
else:
    print("String is Not Palindrome.")
'''
'''
s1=input("Enter a String : ")
s2="".join(reversed(s1))
if(s1==s2):
    print("String is Palindrome.")
else:
    print("String is Not Palindrome.")
'''
#WAP to remove Punctuations from a String.
# Punctuation = [,?/<>%&{}[]@$]
'''
s=input("Enter a String : ")
new=""
l=[',','?','/','<','>','%','&','{','}','[',']','@','$','#','_']
for i in s:
    if i not in l:
        new=new+i
print(new)
'''
#WAP to sort words in Alphabetic Order.
'''
str=GLA university is Famous.
is
famous
GLA
University
a,b,cdefghijklmnopqrstuvwxyz
'''
'''
s=sorted(list(input("Enter a String : ").split()))
print(s)
'''
#WAP to count the number of each Vowels.
str=input("Enter a String : ")
vowel={'a':0,'e':0,'i':0,'o':0,'u':0}
for i in str:
    if i in vowel.keys():
        vowel[i]+=1

print(vowel)
