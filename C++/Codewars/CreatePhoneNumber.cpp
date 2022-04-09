// success
// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp
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

std::string createPhoneNumber(const int arr[10])
{
    //your code here
    std::string res;
    res += "(";
    int i = 0;
    while (i < 3)
    {
        res += std::to_string(arr[i]);
        i++;
    }
    res += ") ";
    while (i < 6)
    {
        res += std::to_string(arr[i]);
        i++;
    }
    res += "-";
    while (i < 10)
    {
        res += std::to_string(arr[i]);
        i++;
    }
    return res;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << createPhoneNumber(arr) << std::endl;
    return 0;
}