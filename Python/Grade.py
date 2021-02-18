#WAP to input Five Subject Marks and calculate total marks , Percentage and Grade.

phy=int(input("Enter Marks of Physics : "))
che=int(input("Enter Marks of Chemistry : "))
mat=int(input("Enter Marks of Maths : "))
eng=int(input("Enter Marks of English : "))
hin=int(input("Enter Marks of Hindi : "))

total=phy+che+mat+eng+hin
per=total/5

if (per>90 and per<100):
    grade="O"
elif (per>80 and per<=90):
    grade="A+"
elif (per>70 and per<=80):
    grade="A"
elif (per>60 and per<=70):
    grade="B+"
elif (per>50 and per<=60):
    grade="B"
elif (per>40 and per<=50):
    grade="C"
else:
    grade="F"

print("Total Marks = ",total)
print("Percentage = ",per)
print("Grade = ",grade)