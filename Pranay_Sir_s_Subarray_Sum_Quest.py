n,x=map(int,input().split())
l=list(map(int,input().strip().split()))
left,right=0,1
if n==1:
    if l[0]==x:
        print(1)
    else:
        print(0)
else:
    cnt=0
    prefix_sum = [0] * (n + 1)
    for i in range(n):
        prefix_sum[i + 1] = prefix_sum[i] + l[i]
    while right<=n:
        if prefix_sum[right] - prefix_sum[left] == x:
            cnt += 1
            left += 1
            right += 1
        elif prefix_sum[right] - prefix_sum[left] < x:
            right += 1
        else:
            left += 1
    print(cnt)
