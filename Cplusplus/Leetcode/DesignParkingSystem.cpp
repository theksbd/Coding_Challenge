// success
// https://leetcode.com/problems/design-parking-system/
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
#include <climits>

using namespace std;

class ParkingSystem
{
public:
    vector<int> car;
    ParkingSystem(int big, int medium, int small)
    {
        car.push_back(big);
        car.push_back(medium);
        car.push_back(small);
    }

    bool addCar(int carType)
    {
        if (car[carType - 1] != 0)
        {
            car[carType - 1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

int main()
{
    ParkingSystem *parkingSystem = new ParkingSystem(1, 1, 0);
    cout << parkingSystem->addCar(1) << endl; // return true because there is 1 available slot for a big car
    cout << parkingSystem->addCar(2) << endl; // return true because there is 1 available slot for a medium car
    cout << parkingSystem->addCar(3) << endl; // return false because there is no available slot for a small car
    cout << parkingSystem->addCar(1) << endl; // return false because there is no available slot for a big car.
                                              // It is already occupied.
    return 0;
}