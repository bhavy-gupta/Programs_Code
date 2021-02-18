import re
# To check 10 digit Mobile Number
'''
n=input("Enter Mobile Number : ")
result=re.match("[9][0-9]{9}",n)
print(result)
'''

'''
def check(s):
    ans=re.compile("[9][0-9]{9}")
    return ans.match(s)

n=input("Enter Mobile Number : ")
print(check(n))
'''
#To extract Words starting with Vowels
'''
s=input("Enter a String : ")
result=re.findall(r'\b[aeiouAEIOU]\w+',s)
print(result)
'''
#To extract Date from given String
'''
s=input("Enter a String : ")
result=re.findall(r"\d{2}-\d{2}-\d{4}",s)
print(result)
'''
#To extract Domain type of given Email ID
'''
s=(input("Enter a String : "))
result = re.search(r"@(\w+).(\w+).(\w+)",s)
print(result.group())
'''
#To extract First Two Characters of every word.
'''
s=input("Enter a String : ")
result=re.findall(r"\b\w\w",s)
print(result)
'''
