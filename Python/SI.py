# Write a Program to calculate SI by reading Principle, Rate of Interest and No.of years from User.

p=int(input("Enter Principle : "))
r=float(input("Enter Rate of Interest : "))
t=int(input("Enter Time in years : "))

si=p*r*t/100
print("Simple Interest = ",format(si,'.2f'))
