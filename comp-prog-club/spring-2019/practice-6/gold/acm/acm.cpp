#include <iostream>
#include <string>

#include <vector>
#include <unordered_map>
#include <algorithm>

int main(void)
{
    int min = 0;
    char problem;
    std::string result;

    std::vector<char> solved;
    std::unordered_map<char, int> time_taken;
    std::unordered_map<char, int> number_attempts;


    while (std::cin >> min && min != -1)
    {
        std::cin >> problem >> result; 

        // first correct
        if (result == "right" && 
            std::find(solved.begin(), solved.end(), problem) == solved.end())
        {
            solved.push_back(problem);
            time_taken[problem] = min;
        } 
        // incorrect, need to track 
        else
        {
            if(number_attempts.find(problem) != number_attempts.end())
            {
                number_attempts[problem]++;
            }
            else
            {
                number_attempts[problem] = 1;
            }
        }

    }
    int total_time = 0;
    for (const char p : solved)
    {
        total_time += time_taken[p];
        total_time += 20 * number_attempts[p];
    }

    std::cout << solved.size() << " " << total_time << std::endl;
    return 0;
}
