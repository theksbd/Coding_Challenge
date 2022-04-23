// success
// https://www.codewars.com/kata/5544c7a5cb454edb3c000047/train/cpp
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

class Bouncingball
{
public:
    // (((h * bounce) * bounce) * bounce) ... * bounce < window => bounce^n * h < window => n < log_bounce(window / h)
    static int bouncingBall(double h, double bounce, double window)
    {
        if (h <= 0 || (bounce <= 0 || bounce >= 1) || window >= h)
            return -1;
        int res = 1;
        int n = 0;
        double height = bounce * h;
        while (height > window)
        {
            height *= bounce;
            n++;
        }
        return res + n * 2;
    }
};

int main()
{
    cout << Bouncingball::bouncingBall(2, 0.5, 1.5) << endl;
    return 0;
}