// success
// https://www.codewars.com/kata/559a28007caad2ac4e000083/train/cpp
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

class SumFct
{
public:
    static ull fibo(int n)
    {
        if (n <= 2)
            return 1;
        ull f1 = 1;
        ull f2 = 1;
        ull f3 = 0;
        int i = 2;
        while (i++ < n)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
    static ull perimeter(int n)
    {
        if (n == 0)
            return 4;
        if (n == 1)
            return 8;
        ull sum = 0; // 8 = 4 * (1 + 1)
        for (int i = 0; i <= n; i++)
        {
            sum += fibo(i + 1);
        }
        sum *= 4;
        return sum;
    }
};

int main()
{
    cout << SumFct::perimeter(7) << endl;
    return 0;
}