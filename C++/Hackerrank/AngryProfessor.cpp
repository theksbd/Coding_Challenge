// success
// https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true
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
#include <climits>

using namespace std;

string angryProfessor(int k, vector<int> a)
{
    int count = 0;
    for (int x : a)
    {
        if (x <= 0)
            count++;
        if (count == k)
            return "NO";
    }
    return "YES";
}

int main()
{
    cout << angryProfessor(5, {-1, -2, -5, 0, 0, 1, 2, 3, 4, 5, 6, 7, 89, 8}) << endl;
    return 0;
}