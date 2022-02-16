// success
// https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
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

vector<int> gradingStudents(vector<int> grades)
{
    int size = grades.size();
    for (int i = 0; i < size; i++)
    {
        if (grades[i] < 38)
            continue;
        int g = grades[i] % 10;
        if (g < 5 && 5 - g < 3)
            grades[i] += 5 - g;
        else if (g > 5 && g - 5 >= 3)
            grades[i] += 10 - g;
    }
    return grades;
}

int main()
{
    vector<int> v = {84, 39, 58};
    v = gradingStudents(v);
    for (int x : v)
        cout << x << ' ';
    return 0;
}