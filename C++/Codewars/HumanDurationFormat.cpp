// success
// https://www.codewars.com/kata/52742f58faf5485cae000b9a/train/cpp
#include <iostream>
#include <string>

#define SEC_PER_MIN 60
#define SEC_PER_HR SEC_PER_MIN * 60
#define SEC_PER_DAY SEC_PER_HR * 24
#define SEC_PER_YEAR SEC_PER_DAY * 365

std::string format_duration(int seconds)
{
    // your code here
    if (seconds == 0)
        return "now";
    std::string res;
    int time[5] = {0}; // years, days, hours, minutes and seconds

    int tempSeconds = seconds;
    double t = double(tempSeconds) / double(SEC_PER_YEAR); // 1 year = 31536000 seconds
    time[0] = int(t);                                      // get year
    tempSeconds -= time[0] * SEC_PER_YEAR;
    t = double(tempSeconds) / double(SEC_PER_DAY);
    time[1] = int(t); // get day
    tempSeconds -= time[1] * SEC_PER_DAY;
    t = double(tempSeconds) / double(SEC_PER_HR);
    time[2] = int(t); // get hour
    tempSeconds -= time[2] * SEC_PER_HR;
    t = double(tempSeconds) / double(SEC_PER_MIN);
    time[3] = int(t); // get minute
    tempSeconds -= time[3] * SEC_PER_MIN;
    time[4] = tempSeconds; // get second

    int start = -1, end = 0; // start indicates which is the most significant unit of time
                             // end indicates which is the least significant unit of time
    for (int i = 0; i < 5; i++)
    {
        if (time[i] != 0)
        {
            end = i;
            if (start == -1)
                start = i;
        }
    }

    if (start == end) // special case: in this case, seconds format to only one unit of time
    {
        res += std::to_string(time[start]);
        switch (start)
        {
        case 0:
            res += " year";
            if (time[start] > 1)
                res += "s";
            return res;
        case 1:
            res += " day";
            if (time[start] > 1)
                res += "s";
            return res;
        case 2:
            res += " hour";
            if (time[start] > 1)
                res += "s";
            return res;
        case 3:
            res += " minute";
            if (time[start] > 1)
                res += "s";
            return res;
        default:
            res += " second";
            if (time[start] > 1)
                res += "s";
            return res;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (time[i] == 0)
            continue;
        switch (i)
        {
        case 0:
            res += std::to_string(time[i]) + " year";
            if (time[i] > 1)
                res += "s";
            break;
        case 1:
            if (i != start)
            {
                if (i != end)
                    res += ", ";
                else
                    res += " and ";
            }
            res += std::to_string(time[i]) + " day";
            if (time[i] > 1)
                res += "s";
            break;
        case 2:
            if (i != start)
            {
                if (i != end)
                    res += ", ";
                else
                    res += " and ";
            }
            res += std::to_string(time[i]) + " hour";
            if (time[i] > 1)
                res += "s";
            break;
        case 3:
            if (i != start)
            {
                if (i != end)
                    res += ", ";
                else
                    res += " and ";
            }
            res += std::to_string(time[i]) + " minute";
            if (time[i] > 1)
                res += "s";
            break;
        default:
            if (i != start)
            {
                if (i != end)
                    res += ", ";
                else
                    res += " and ";
            }
            res += std::to_string(time[i]) + " second";
            if (time[i] > 1)
                res += "s";
            break;
        }
    }
    return res;
}

int main()
{
    std::cout << format_duration(120);
    std::cout << ';';
    return 0;
}