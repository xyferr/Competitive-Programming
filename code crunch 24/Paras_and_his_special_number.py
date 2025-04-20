t=int(input())
while(t):
    n=input().strip()
    flag = False
    sum=0
    for i in range(len(n)):
        cur = int(n[i])
        sum+=cur
        if cur%2==0:
            flag = True
    
    if flag and sum%3==0:
        print("YES")
    else:
        print("NO")
    t-=1