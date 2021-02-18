def check(x):
    if(x>=18):
        print("Voter is Eligible")
    else:
        print("Voter is Not-Eligible")

a=1
while(a==1):
    try:
        x=int(input("Enter Your Age : "))
        check(x)
    except:
        print("Error Occured")
        print("Press 1 for checking Eligibility Again Otherwise 0 ")
        a=int(input())
