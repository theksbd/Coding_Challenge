// success
// https://www.codewars.com/kata/55aa075506463dac6600010d/train/cpp
#include <iostream>
#include <utility>
#include <vector>

class SumSquaredDivisors
{
public:
    static bool isSquareNum(long long m, long long num)
    {
        long long i = m;
        while (i * i < num)
            i++;
        return (i * i == num);
    }
    static void sumSquaredDivisor(long long num, long long &sum)
    {
        for (long long i = 1; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                sum += i * i;
                if (i * i == num)
                    continue;
                sum += (num / i) * (num / i);
            }
        }
    }
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n)
    {
        std::vector<std::pair<long long, long long>> res;
        for (int i = m; i <= n; i++)
        {
            long long sum = 0;
            sumSquaredDivisor(i, sum);
            if (isSquareNum(i, sum))
                res.push_back(std::pair<long long, long long>(i, sum));
        }
        return res;
    }
};

int main()
{
    for (std::pair<long long, long long> x : SumSquaredDivisors::listSquared(1, 250))
        std::cout << x.first << ' ' << x.second << '\n';
    return 0;
}
