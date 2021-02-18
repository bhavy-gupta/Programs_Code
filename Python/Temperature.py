# Write a program to read a temperature in celsius from the user and convert it into Fahrenheit.

cel=float(input("Enter Temperature in Celsius : "))

fah=(cel*9/5)+32

print("Temperature in Fahrenheit = ",format(fah,'.2f'),"'F")
