// success
// https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/cpp
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

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    return numbers[0] + numbers[1];
}

int main()
{
    vector<int> v = {19, 5, 42, 2, 77};
    cout << sumTwoSmallestNumbers(v) << endl;
    return 0;
}