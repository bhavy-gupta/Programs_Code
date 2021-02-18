# WAP to read weight of an object in grams ad display its weight in kg and gms.

# 1500gms = 1kg and 500 gms

weight=int(input("Enter Weight in Grams : "))
kg=weight//1000
gm=weight%1000
print("Weight = {0} kg and {1} gms .".format(kg,gm))
