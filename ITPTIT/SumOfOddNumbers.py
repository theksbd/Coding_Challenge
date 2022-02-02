# success
# https://code.itptit.com/problems/100023
def func(n):
    res = (1 + n) * ((n - 1) / 2 + 1) / 2
    return int(res)

n = int(input())
print(func(n))
