// success
// https://www.codewars.com/kata/556e0fccc392c527f20000c5/train/cpp
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

std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    int size = signature.size();
    if (n == size)
        return signature;
    if (n == 0)
        return {};
    std::vector<int> res;
    if (n < size)
    {
        for (int i = 0; i < n; i++)
            res.push_back(signature[i]);
        return res;
    }
    res = signature;
    // std::vector<int> sig(size + 1, 0);
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += signature[i];
    int i = size;
    int j = 0;
    while (i++ < n)
    {
        int new_sig = sum;
        res.push_back(new_sig);
        sum -= res[j];
        sum += new_sig;
        j++;
    }
    return res;
}

int main()
{
    for (int x : xbonacci({1, 1, 1}, 10))
        std::cout << x << ' ';
    return 0;
}