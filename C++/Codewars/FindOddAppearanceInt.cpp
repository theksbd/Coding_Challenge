// success
// https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp
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

int findOdd(const std::vector<int> &numbers)
{
    //your code here
    std::vector<int> temp = numbers;
    std::sort(temp.begin(), temp.end());
    int currentVal = temp[0];
    int count = 1;
    int size = temp.size();
    for (int i = 1; i < size; i++)
    {
        if (temp[i] != currentVal)
        {
            if (count % 2 != 0)
                return currentVal;
            else
            {
                currentVal = temp[i];
                count = 1;
                continue;
            }
        }
        count++;
    }
    return temp[size - 1];
}

int main()
{
    cout << findOdd({0, 0, 0, -1, 1, 2, 2, 0, 1}) << endl;
    return 0;
}