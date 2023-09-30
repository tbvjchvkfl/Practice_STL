#pragma once
#include <iostream>
#include <string>
#include <vector>

std::string Exercise(std::string code)
{
	std::string answer = " ";
	std::string empty = "EMPTY";
	int mode{};
	
	for (int e : code)
	{
		if (mode == 0)
		{
			if (code[e] == '1')
			{
				mode = 1;
			}
			else if (e % 2 == 0)
			{
				answer.append(code, e, 1);
			}
		}
		else if (mode == 1)
		{
			if (code[e] == '1')
			{
				mode = 0;
			}
			else if (e % 2 != 0)
			{
				answer.append(code, e, 1);
			}
		}
	}
	if (answer.empty())
	{
		answer.append(empty);
	}

	return answer;
}