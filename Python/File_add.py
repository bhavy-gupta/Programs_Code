fp=open("Random.txt","a")
sum=0
for i in fp.read():
    sum+=int(i)
fp.write("Sum of Numbers = "+str(sum))
fp.close()