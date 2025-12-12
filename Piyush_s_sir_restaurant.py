n=int(input())
l=[]
for i in range(n):
    a,d=map(int,input().strip().split())
    l.append((a,1))
    l.append((d,-1))
l.sort()
cnt=0
res=0
for time in l:
    cnt+=time[1]
    res=max(res,cnt)
print(res)