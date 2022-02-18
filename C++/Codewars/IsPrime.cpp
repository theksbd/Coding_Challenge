// success
// https://www.codewars.com/kata/5262119038c0985a5b00029f/train/cpp
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

bool isPrime(int num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << isPrime(19) << endl;
    return 0;
}