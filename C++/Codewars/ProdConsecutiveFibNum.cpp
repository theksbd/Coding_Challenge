// success
// https://www.codewars.com/kata/5541f58a944b85ce6d00006a/train/cpp
#include <iostream>
#include <vector>

typedef unsigned long long ull;

class ProdFib
{
public:
    static std::vector<ull> productFib(ull prod)
    {
        if (prod == 0)
            return {0, 1, 1};
        if (prod == 1)
            return {1, 1, 1};
        std::vector<ull> res;
        ull f1 = 1;
        ull f2 = 1;
        ull f3 = 0;
        while (f1 * f2 < prod)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        if (f1 * f2 == prod)
            return {f1, f2, 1};
        return {f1, f2, 0};
    }
};

int main()
{
    for (ull x : ProdFib::productFib(74049690))
        std::cout << x << ' ';
    return 0;
}