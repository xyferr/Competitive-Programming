t=int(input())
while(t):
    # n=int(input())
    l,r = map(int,input().split())
    gap = 2*r-2*l+1
    print(gap)
    t-=1