# success
# https://www.codewars.com/kata/515e271a311df0350d00000f/train/python
def square_sum(numbers):
    # your code here
    sum = 0
    for i in numbers:
        sum += i * i
    return sum


print(square_sum([1, 5, 3, 2]))
