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

int solution(string &S, vector<int> &C)
{
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    int size_s = S.size();
    string temp;
    temp.push_back(S[0]);
    int indexOfLastLetter = 0;
    for (int i = 1; i < size_s; i++)
    {
        char letter = S[i];
        if (letter == temp.back())
        {
            if (C[i] > C[indexOfLastLetter])
            {
                res += C[indexOfLastLetter];
                indexOfLastLetter = i;
            }
            else
                res += C[i];
        }
        else
            indexOfLastLetter = i;
        temp.push_back(letter);
    }
    return res;
}

int main()
{
    string S = "abccbd";
    vector<int> C = {0, 1, 2, 3, 4, 5};
    // string S = "aabbcc";
    // vector<int> C = {1, 2, 1, 2, 1, 2};
    // string S = "aaaa";
    // vector<int> C = {6, 4, 5, 3};
    // string S = "ababa";
    // vector<int> C = {3, 4, 5, 6, 7};

    cout << solution(S, C) << endl;
    return 0;
}