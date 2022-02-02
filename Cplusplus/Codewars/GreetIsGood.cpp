// success
// https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
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

int score(const std::vector<int> &dice)
{
    // your code here
    std::vector<int> v = {0, 0, 0, 0, 0, 0}; // indicate for the number of appearance 1, 2, 3, 4, 5, 6 which are six-sided dice values
    for (int i : dice)
        v[i - 1]++; // the index of the vector is 0-indexed and the minimum value of six-sided dice is 1, so it should be v[i - 1]
    int score = 0;
    for (int i = 0; i < 6; i++)
    {
        if (v[i] >= 3)
        {
            score += (i + 1) * 100;
            if (i == 0) // three 1's gets 1000 points, not 100
                score *= 10;
            v[i] -= 3;
        }
        if (i == 0 || i == 4) // for One 1 and One 5
        {
            int temp = 0;
            if (v[i] > 0)
                temp += v[i] * (i + 1) * 10;
            if (i == 0) // One 1 gets 100 points
                temp *= 10;
            score += temp;
        }
    }
    return score;
}

int main()
{
    cout << score({1, 1, 1, 3, 1}) << endl;
    return 0;
}