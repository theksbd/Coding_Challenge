// success
// https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/cpp
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

// using namespace std;

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        if (nFloors == 0)
            return {};
        std::vector<std::string> res;
        char c = '*';
        int currentFloor = 1;
        for (int i = 0; i < nFloors; i++)
        {
            std::string str;
            int j = 1;
            int numChar = 2 * (currentFloor - 1) + 1; // number of char should be displayed at each floor
            while (j <= nFloors - currentFloor + 1)
            {
                if (j == nFloors - currentFloor + 1)
                {
                    if (numChar == 0)
                        break;
                    else
                    {
                        str += c;
                        numChar--;
                        if (numChar == 0)
                            j = 1; // re-loop to add space after adding all number of char needed
                        continue;
                    }
                }
                str += ' ';
                j++;
            }
            res.push_back(str);
            currentFloor++;
        }
        return res;
    }
};

int main()
{
    Kata k;
    std::vector<std::string> v = k.towerBuilder(6);
    for (std::string str : v)
        std::cout << str << ";\n";
    return 0;
}