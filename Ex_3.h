#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(int k, std::vector<int> score) {
    std::vector<int> answer;
    std::vector<int> honor;
    for (int i = 0; i < score.size(); i++)
    {
        honor.push_back(score[i]);
        
        std::sort(honor.begin(), honor.end());

        if (i < k)
        {
            answer.push_back(*min_element(honor.begin(), honor.end()));
        }
        else if (i >= k)
        {
            answer.push_back(honor[honor.size() - k]);
        }
    }
    return answer;
}