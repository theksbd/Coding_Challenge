// success
// https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/cpp
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

// using namespace std;

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int>& array)
    {
        int size = array.size();
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] % 2 == 0)
                continue;
            for (int j = i + 1; j < size; j++)
            {
                if (array[j] % 2 == 0)
                    continue;
                if (array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        return array;
    }
};

int main()
{
    Kata k;
    std::vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    k.sortArray(v);
    for (auto it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    return 0;
}