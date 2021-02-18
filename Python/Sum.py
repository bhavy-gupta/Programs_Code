a,b=input().split()
b=int(b)
i=a*b
print(i)
i=int(i)
ans=i
while ans>9 :
    j=ans
    ans=0
    while j>0 :
        ans=ans+(j%10)
        j=j//10
print(ans)
