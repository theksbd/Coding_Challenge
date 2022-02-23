// success
// https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/cpp
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

int FindOutlier(std::vector<int> arr)
{
    int res = 0;
    int numOdd = 0;
    bool isOdd = false;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] % 2 != 0)
            numOdd++;
    }
    if (numOdd > 1)
        isOdd = true;
    for (int x : arr)
    {
        if (isOdd)
        {
            if (x % 2 == 0)
            {
                res = x;
                break;
            }
        }
        else
        {
            if (x % 2 != 0)
            {
                res = x;
                break;
            }
        }
    }
    return res;
}

int main()
{
    std::cout << FindOutlier({2, 4, 0, 100, 4, 11, 2602, 36}) << '\n';
    return 0;
}