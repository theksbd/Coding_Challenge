// success
// https://www.codewars.com/kata/5679aa472b8f57fb8c000047/train/cpp
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

int find_even_index(const vector<int> numbers)
{
    int size = numbers.size();
    for (int i = 0; i < size; i++)
    {
        int sumLeft = 0, sumRight = 0;
        for (int iL = 0; iL < i; iL++)
            sumLeft += numbers[iL];
        for (int iR = i + 1; iR < size; iR++)
            sumRight += numbers[iR];
        if (sumLeft == sumRight)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 3, 2, 1};
    vector<int> v2 = {1, 100, 50, -51, 1, 1};
    vector<int> v3 = {20, 10, -80, 10, 10, 15, 35};
    cout << find_even_index(v1) << endl;
    cout << find_even_index(v2) << endl;
    cout << find_even_index(v3) << endl;
    return 0;
}