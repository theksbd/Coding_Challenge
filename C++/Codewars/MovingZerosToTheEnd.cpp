// success
// https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/cpp
#include <iostream>
#include <vector>

std::vector<int> move_zeroes(const std::vector<int> &input)
{
    // your code here
    std::vector<int> res;
    int count = 0;
    for (int x : input)
    {
        if (x != 0)
            res.push_back(x);
        else
            count++;
    }
    for (int i = 0; i < count; i++)
        res.push_back(0);
    return res;
}

int main()
{
    std::vector<int> v = {1, 0, 1, 2, 0, 1, 3};
    v = move_zeroes(v);
    for (int x : v)
        std::cout << x << ' ';
    return 0;
}