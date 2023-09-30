#include <string>
#include <vector>
#include <iostream>

int solution(std::vector<int> num_list) {
    int answer = 0;
    std::vector<int> v1;
    std::vector<int> v2;
    std::string str_1;
    std::string str_2;
    for (int e = 0; e < num_list.size(); e++)
    {
        if (num_list[e] % 2 == 0)
        {
            // Â¦¼ö
            v1.push_back(num_list[e]);
        }
        else if (num_list[e] % 2 != 0)
        {
            // È¦¼ö
            v2.push_back(num_list[e]);
        }
    }
    
    for (int e : v1)
    {
        str_1 += std::to_string(e);
    }

    for (int e : v2)
    {
        str_2 += std::to_string(e);
    }

    int a{};
    int b{};

    a = std::stoi(str_1);
    b = std::stoi(str_2);

    std::cout << a + b << std::endl;
    return 0;
}