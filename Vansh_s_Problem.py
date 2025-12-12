


import math as m
n = int(input());
res = 2

for i in range(2,(int)(m.sqrt(n)+1)):
    if(n%i==0):
        if(n//i==i):
            res+=1
        else:
            res+=2

print(res)