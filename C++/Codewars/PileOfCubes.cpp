// success
// https://www.codewars.com/kata/5592e3bd57b64d00f3000047/train/cpp
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

class ASum
{
public:
    static long long findNb(long long m)
    {
        long long res = 1;
        long long cube = 0;
        while (cube < m)
        {
            cube += res * res * res;
            res++;
        }
        return cube == m ? res - 1 : -1;
    }
};

int main()
{
    // cout << ASum::findNb(1071225) << endl;
    cout << ASum::findNb(27 + 8 + 1) << endl;
    return 0;
}