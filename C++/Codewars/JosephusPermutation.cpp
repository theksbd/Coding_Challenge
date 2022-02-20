// success
// https://www.codewars.com/kata/5550d638a99ddb113e0000a2/train/cpp
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

std::vector<int> josephus(std::vector<int> items, int k)
{
    //your code here
    if (items.size() == 0)
        return {};
    if (k == 1)
        return items;
    std::vector<int> res;
    std::queue<int> q;
    for (int i = 0; i < int(items.size()); i++)
        q.push(items[i]);
    while (q.size() != 1)
    {
        int i = 0;
        while (i++ < k - 1)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        res.push_back(q.front());
        q.pop();
    }
    res.push_back(q.front());
    return res;
}

int main()
{
    std::vector<int> v = josephus({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 2);
    for (int x : v)
        std::cout << x << ' ';
    return 0;
}