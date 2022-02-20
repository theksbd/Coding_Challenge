// success
// https://www.codewars.com/kata/55e2adece53b4cdcb900006c/train/cpp
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

class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g)
    {
        if (v1 >= v2)
            return {-1, -1, -1};
        std::vector<int> res;
        // xA = g + v1 * t
        // xB = v2 * t
        // xA = xB <=> t = g / (v2 - v1)
        double meet_time = (double)g / ((double)v2 - (double)v1); // calculate time that 2 racers meet each other

        // get hour
        res.push_back(int(meet_time));
        
        meet_time *= 3600.0; // convert meet_time from unit of time hour to second
        int time = meet_time;

        // get minute
        meet_time -= res[0] * 3600;
        time = meet_time / 60.0;
        res.push_back(time);

        // get second
        meet_time -= res[1] * 60;
        res.push_back(int(meet_time));

        return res;
    }
};

int main()
{
    std::vector<int> v = Tortoise::race(720, 850, 70);
    for (int x : v)
        std::cout << x << ' ';
    return 0;
}