import random
fp=open("Random.txt","w")
for i in range(50):
    fp.write(str(random.randint(500,1000))+"\n")
fp.close()