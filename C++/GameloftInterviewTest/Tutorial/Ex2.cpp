#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int compute_closest_zero(vector<int> ts)
{
    // return the element in ts that is closest to zero, if the array is empty, return 0
    if (ts.empty())
        return 0;
    int closest_zero = ts[0];
    int distanceOfClosestZero = closest_zero > 0 ? closest_zero : closest_zero * -1;
    for (int i = 1; i < int(ts.size()); i++)
    {
        int temp = ts[i];
        int distanceOfTemp = temp > 0 ? temp : temp * -1;
        if (distanceOfTemp < distanceOfClosestZero)
        {
            closest_zero = temp;
            distanceOfClosestZero = distanceOfTemp;
        }
        else if (distanceOfTemp == distanceOfClosestZero && closest_zero < temp)
        {
            closest_zero = temp;
        }
    }
    return closest_zero;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> ts = {-1055, -273, -15, -7, -1, -8, -9};
    cout << compute_closest_zero(ts) << endl;
    return 0;
}