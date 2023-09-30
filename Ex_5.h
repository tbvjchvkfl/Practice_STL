#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>

int solution(int number, int limit, int power) {
    int answer = 0;
    std::vector<int> Knights;
    for (int i = 1; i <= number; i++)
    {
        int sub{};
        for (int j = 1; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                sub++;
                if (j * j < i)
                {
                    sub++;
                    if (sub > limit)
                    {
                        sub = power;
                    }
                }
            }
        }
        Knights.push_back(sub);
    }
    for (auto& e : Knights)
    {
        answer += e;
    }
    return answer;
}
