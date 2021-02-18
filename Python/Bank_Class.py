class Bank:
    def __init__(self,n,ano,b):
        self.name=n
        self.anumber=ano
        self.bal=b
    
    def deposit(self):
        s=int(input("Enter Amount to Deposit : "))
        self.bal+=s
        print("Updated Balance = Rs.",self.bal)

    def withdraw(self):
        s=int(input("Enter Amount to Withdraw : "))
        if s>= self.bal:
            print("Insufficient Balance!!")
        else:
            self.bal-=s
            print("Updated Balance = Rs.",self.bal)

    def display(self):
        print("Available Balance = Rs.",self.bal)

n=input("Enter Name : ")
ano=input("Enter Account Number : ")
b=int(input("Enter Current Balance : "))

cust=Bank(n,ano,b)
choice=1
while choice != 0:
    print("\n1. Deposit")
    print("2. Withdraw")
    print("3. Display")
    print("0. Exit")
    choice = int(input("Enter Choice : "))
    if choice == 1:
        cust.deposit()
    elif choice == 2:
        cust.withdraw()
    elif choice == 3:
        cust.display()
    elif choice == 0:
        print("Exiting!!")
    else:
        print("Invalid Choice !!!")