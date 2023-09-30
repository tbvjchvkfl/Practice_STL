#include <string>
#include <vector>
#include <algorithm>
#include <map>
std::vector<std::string> solution(std::vector<std::string> players, std::vector<std::string> callings) {
    std::vector<std::string> answer;
    
    for (auto& e : players)
    {
        answer.push_back(e);
    }
    int i{};
    while (i != callings.size())
    {
        for (int j = 0; j<answer.size(); j++)
        {
            if (callings[i] == answer[j])
            {
                std::swap(answer[j], answer[j - 1]);
            }
        }
        i++;
    }
    return answer;
}

//std::vector<std::string> solution(std::vector<std::string> players, std::vector<std::string> callings) 
//{
//    std::vector<std::string> answer;
//    std::map<int, std::string> temp1;
//    std::map<std::string, int> temp2;
//    for (int i = 0; i < players.size(); i++)
//    {
//        temp2[players[i]] = i;
//    }
//
//    for (const auto& s : callings) 
//    {
//        int index = temp2[s];
//
//        temp2[players[index - 1]]++;
//
//        temp2[s]--;
//
//        swap(players[index - 1], players[index]);
//    }
//    return answer;
//}