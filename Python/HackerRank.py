t=int(input())
for x in range(t) :
    ns=int(input())
    b_num = list(input())
    value = 0
    a=-1
    for i in range(len(b_num)):
        digit = b_num.pop()
        if(digit == '1' or digit == '0') :
            a=a+1
            if(digit == '1') :
                value = value + pow(2, a)
    b_num.clear()
    print("NUM =",value)
