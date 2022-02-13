// success
// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp
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

unsigned int countBits(unsigned long long n)
{
    //your code here
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    unsigned int count = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    return count;
}

int main()
{
    cout << countBits(1234) << endl;
    return 0;
}