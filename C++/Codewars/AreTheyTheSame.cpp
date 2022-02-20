// success
// https://www.codewars.com/kata/550498447451fbbd7600041c/train/cpp
#include <iostream>
#include <vector>

class Same
{
public:
    static bool comp(std::vector<int> &a, std::vector<int> &b)
    {
        // your code
        if (a.size() != b.size())
            return false;
        for (int x : a)
        {
            std::vector<int>::iterator it = b.begin();
            bool isErase = false;
            while (it != b.end())
            {
                if (*it == x * x)
                {
                    b.erase(it);
                    isErase = true;
                    break;
                }
                it++;
            }
            if (it == b.end() && !isErase)
                return false;
        }
        return true;
    }
};

int main()
{
    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {121, 14641, 20736, 361, 25921, 361, 20736, 361};
    std::cout << Same::comp(a, b) << '\n';
    return 0;
}
