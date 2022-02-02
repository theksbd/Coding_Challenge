// success
// https://www.codewars.com/kata/54da539698b8a2ad76000228/train/cpp
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

bool isValidWalk(std::vector<char> walk)
{
    //your code here
    if (walk.size() != 10)
        return false;
    int x = 0, y = 0;
    int size = walk.size();
    for (int i = 0; i < size; i++)
    {
        switch (walk[i])
        {
        case 'n':
            y++;
            break;
        case 's':
            y--;
            break;
        case 'w':
            x--;
            break;
        default: // case 'e'
            x++;
            break;
        }
    }
    if (x == 0 && y == 0)
        return true;
    return false;
}

int main()
{
    vector<char> v1 = {'n','s','n','s','n','s','n','s','n','s'};
    vector<char> v2 = {'s','e','w','n','n','s','e','w','n','s'};
    vector<char> v3 = {'e','e','e','w','n','s','n','s','e','w'};
    vector<char> v4 = {'n','s'};
    cout << isValidWalk(v1) << endl;
    cout << isValidWalk(v2) << endl;
    cout << isValidWalk(v3) << endl;
    cout << isValidWalk(v4) << endl;
    return 0;
}