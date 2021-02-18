'''
a=int(input())
fact=1
a=a+1
for i in range (1,a) :
    fact=fact*i;
print("Factorial = ",fact)
'''
from tkinter import *

#import tkinter as tk
fac=Tk()
labe = Label(fac,text="Factorial = ")
labe.pack()
fac.mainloop()
fac.title("FACTORIAL")

def fact(n):
    f=1
    for i in range (1,n+1) :
        f=f*i
    variable.set(f)

variable=tk.StringVar()

display=tk.Entry(fac,font=("Times New Roman",20,"bold"),bd=25,textvariable=variable,justify="center")
display.grid(columnspan=5)

