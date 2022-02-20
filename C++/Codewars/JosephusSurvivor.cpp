// success
// https://www.codewars.com/kata/555624b601231dc7a400017a/train/cpp
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

int josephusSurvivor(int n, int k)
{
    // your code here
    if (k == 1)
        return n;
    std::queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);
    while (q.size() != 1)
    {
        int i = 0;
        while (i++ < k - 1)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        q.pop();
    }
    return q.front();
}

int main()
{
    std::cout << josephusSurvivor(7, 3) << std::endl;
    return 0;
}