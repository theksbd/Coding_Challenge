// success
// https://www.codewars.com/kata/556deca17c58da83c00002db/train/cpp
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <climits>

// using namespace std;

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if (n == 3)
        return signature;
    if (n == 0)
        return {};
    std::vector<int> res;
    if (n < 3)
    {
        for (int i = 0; i < n; i++)
            res.push_back(signature[i]);
        return res;
    }
    res = signature;
    int f0 = signature[0],
        f1 = signature[1],
        f2 = signature[2],
        f3 = 0;
    int i = 3;
    while (i++ < n)
    {
        f3 = f0 + f1 + f2;
        f0 = f1;
        f1 = f2;
        f2 = f3;
        res.push_back(f3);
    }
    return res;
}

int main()
{
    for (int x : tribonacci({1, 1, 1}, 10))
        std::cout << x << ' ';
    return 0;
}