# success
# https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/python
def summation(num):
    if num == 1:
        return num
    return (1 + num) * num // 2


print(summation(5))
print(summation(1))
print(summation(8))

