// success
// https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/train/cpp
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

std::vector<std::string> wave(std::string y)
{
    //Code Here...
    if (y == "")
        return {};
    std::vector<std::string> res;
    int size = y.size();
    for (int i = 0; i < size; i++)
    {
        if (y[i] == ' ')
            continue;
        y[i] -= 32;
        res.push_back(y);
        y[i] += 32;
    }
    return res;
}

int main()
{
    string s[] = {"hello", "two words", " gap "};
    for (string str : s)
    {
        vector<string> v = wave(str);
        for (string res : v)
            cout << res << " ";
        cout << '\n';
    }
    return 0;
}