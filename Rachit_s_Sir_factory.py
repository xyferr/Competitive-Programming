
t=1
while(t):
    n,p=map(int,input().split())
    l=list(map(int,input().split()))

    def check(mid):
        cnt = 0
        for i in l:
            cnt += mid // int(i)
        return cnt >= p

    low = 1
    high = max(map(int, l)) * p
    ans = high
    while low <= high:
        mid = (low + high) // 2
        if check(mid):
            ans = mid
            high = mid - 1
        else:
            low = mid + 1
    print(ans)

    t-=1    