#pragma once
#include <string>
#include <vector>
#include <iostream>

std::string solution(std::string myString) {
    std::string answer = "";

    for (auto e : myString)
    {
        answer += tolower(e);
    }

    return answer;
}


int solution0(std::string num_str) 
{
    std::string str;
    int answer = 0;

    for (char e : num_str)
    {
        // char를 int로 전환하는 방법
        int i = e - '0';
        answer += i;
    }

    std::cout << str.size() << std::endl;

    std::cout << answer << std::endl;
    return answer;
}