num=int(input("Enter Number : "))
x=num
sum=0

while num>0:
    d=num%10
    sum=sum+(d**3)
    num=num//10

if(x==sum):
    print("Armstrong")
else:
    print("Not Armstrong")