import math
div=2
res=2
n=600851475143
temp=n
while div<=math.sqrt(n):
    if temp%div==0:
        res=div
        temp//=div
    else:
        div+=1

print(res)