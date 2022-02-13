// https://www.codewars.com/kata/55b3425df71c1201a800009c/train/cpp
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

class Stat
{
public:
    static std::string stat(const std::string &strg)
    {
        if (strg == "")
            return "";
        std::string res = "";
        std::vector<int> v; // store competing time of all teams
        std::string temp = strg;
        int size = temp.size();
        int start = 0;    // start index to get each of substrings
        double sum = 0.0; // use to calculate average later
        for (int i = 0; i <= size; i++)
        {
            if (temp[i] == ',' || temp[i] == '\0')
            {
                std::string time = temp.substr(start, i - start); // get substring of each time

                bool twoDigitHour = false, twoDigitMinute = false; // true if time format is two digits
                int hour = 0, minute = 0, second = 0;              // store hours, minutes and seconds of each substring
                if (time[2] == '|')                                // get hour
                {
                    hour = std::stoi(time.substr(0, 2));
                    twoDigitHour = true;
                }
                else
                    hour = time[0] - '0';

                if (twoDigitHour) // get minute
                {
                    if (time[5] == '|')
                    {
                        minute = std::stoi(time.substr(3, 2));
                        twoDigitMinute = true;
                    }
                    else
                        minute = time[3] - '0';
                }
                else
                {
                    if (time[4] == '|')
                    {
                        minute = std::stoi(time.substr(2, 2));
                        twoDigitMinute = true;
                    }
                    else
                        minute = time[2] - '0';
                }

                if (twoDigitHour) // get second
                {
                    if (twoDigitMinute)
                        second = time[7] == '\0' ? time[6] - '0' : std::stoi(time.substr(6, 2));
                    else
                        second = time[6] == '\0' ? time[5] - '0' : std::stoi(time.substr(5, 2));
                }
                else
                {
                    if (twoDigitMinute)
                        second = time[6] == '\0' ? time[5] - '0' : std::stoi(time.substr(5, 2));
                    else
                        second = time[5] == '\0' ? time[4] - '0' : std::stoi(time.substr(5, 2));
                }

                v.push_back(hour * 3600 + minute * 60 + second);
                sum += (double)(hour * 3600 + minute * 60 + second);

                if (temp[i + 1] == ' ') // update start index for next substring
                {
                    start = i + 2;
                    i++;
                }
                else
                    start = i + 1;
            }
        }
        sort(v.begin(), v.end());

        int size_v = v.size();
        double range = (double)(v.back() - v.front());
        double average = sum / (double)size_v;
        double median = size_v % 2 == 0 ? (double)(v[size_v / 2 - 1] + v[size_v / 2]) / 2.0 : (double)v[size_v / 2];

        // get Range
        res += "Range: ";
        range /= 3600.0; // get hour
        if ((int)range < 10)
            res += "0" + std::to_string((int)range) + "|";
        else
            res += std::to_string((int)range) + "|";
        range -= (int)range;
        range *= 60.0; // get minute
        if ((int)range < 10)
            res += "0" + std::to_string((int)range) + "|";
        else
            res += std::to_string((int)range) + "|";
        range -= (int)range;
        range *= 60.0; //get second
        if ((int)range < 10)
            res += "0" + std::to_string((int)trunc(range)) + " ";
        else
            res += std::to_string((int)trunc(range)) + " ";

        // get Average
        res += "Average: ";
        average /= 3600.0; // get hour
        if ((int)average < 10)
            res += "0" + std::to_string((int)average) + "|";
        else
            res += std::to_string((int)average) + "|";
        average -= (int)average;
        average *= 60.0; // get minute
        if ((int)average < 10)
            res += "0" + std::to_string((int)average) + "|";
        else
            res += std::to_string((int)average) + "|";
        average -= (int)average;
        average *= 60.0; //get second
        if ((int)average < 10)
            res += "0" + std::to_string((int)trunc(average)) + " ";
        else
            res += std::to_string((int)trunc(average)) + " ";

        // get Median
        res += "Median: ";
        median /= 3600.0; // get hour
        if ((int)median < 10)
            res += "0" + std::to_string((int)median) + "|";
        else
            res += std::to_string((int)median) + "|";
        median -= (int)median;
        median *= 60.0; // get minute
        if ((int)median < 10)
            res += "0" + std::to_string((int)median) + "|";
        else
            res += std::to_string((int)median) + "|";
        median -= (int)median;
        median *= 60.0; //get second
        if ((int)median < 10)
            res += "0" + std::to_string((int)trunc(median));
        else
            res += std::to_string((int)trunc(median));

        return res;
    }
};

int main()
{
    std::cout << Stat::stat("02|15|59, 2|47|16, 02|17|20, 2|32|34, 2|17|17, 2|22|00, 2|31|41") << std::endl;
    return 0;
}