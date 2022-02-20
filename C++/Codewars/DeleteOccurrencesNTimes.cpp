// success
// https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/cpp
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

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    if (arr.size() <= n)
        return arr;
    std::vector<int> res;
    std::map<int, int> mp;
    for (int x : arr)
    {
        if (mp[x] >= n)
            continue;
        mp[x]++;
        res.push_back(x);
    }
    return res;
}

int main()
{
    for (int x : deleteNth({1, 1, 3, 3, 7, 2, 2, 2, 2}, 3))
        std::cout << x << ' ';
    return 0;
}