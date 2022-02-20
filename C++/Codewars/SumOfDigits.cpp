// success
// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
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

// Solution v1.0
// int digital_root(int n)
// {
//     if (n < 10)
//         return n;
//     int n_ = n % 10 + digital_root(n / 10);
//     if (n_ < 10)
//         return n_;
//     return digital_root(n_);
// }

// Solution v2.0
int digital_root(int n)
{
    if (n < 10)
        return n;
    int n_ = 0;
    while (n > 0)
    {
        n_ += n % 10;
        n /= 10;
        if (n == 0 && n_ >= 10)
        {
            n = n_;
            n_ = 0;
        }
    }
    return n_;
}

int main()
{
    cout << digital_root(1992) << endl;
    return 0;
}