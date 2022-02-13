// success
// https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08/train/cpp
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

vector<vector<int>> multiplication_table(int n)
{
    vector<vector<int>> res;
    for (int i = 1; i <= n; i++)
    {
        vector<int> arr;
        int j = 1;
        while (j <= n)
        {
            arr.push_back(i * j);
            j++;
        }
        res.push_back(arr);
    }
    return res;
}

int main()
{
    vector<vector<int>> v = multiplication_table(3);
    for (auto i : v)
    {
        for (auto j : i)
            cout << j << " ";
        cout << '\n';
    }
    return 0;
}