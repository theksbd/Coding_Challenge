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

using namespace std;

// task: find out the smallest positive integer that does not occur in A
int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    set<int> exist;
    for (int x : A)
    {
        if (x > 0)
            exist.insert(x);
    }
    int res = 1;
    while (res < 1000000)
    {
        if (exist.find(res) == exist.end())
            return res;
        res++;
    }
    return 0;
}

int main()
{
    // Solution v1.0 - Time complexity: O() ~ ms - Memory: mb
    return 0;
}