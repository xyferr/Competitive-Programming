def powr(x, y):
    res = 1
    while y > 0:
        print(x, y, res)
        if y%2==1:
            res *= x
        x*=x
        y=y//2
    return res

print(powr(2, 5))


