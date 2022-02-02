// success
// https://www.codewars.com/kata/583203e6eb35d7980400002a/train/cpp
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

int countSmileys(std::vector<std::string> arr)
{
    if (arr.empty())
        return 0;
    int res = 0;
    for (string face : arr)
    {
        if (face[0] != ':' && face[0] != ';')
            continue;
        if (face[1] == ')' || face[1] == 'D')
            res++;
        else if (face[1] == '-' || face[1] == '~')
        {
            if (face[2] == ')' || face[2] == 'D')
                res++;
        }
    }
    return res;
}

int main()
{
    cout << countSmileys({":)", ":(", ":D", ":O", ":;"});
    return 0;
}