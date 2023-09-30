#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
struct Student
{
	int mNumber;
	int mScore;
	std::string mName;
};

std::ostream& operator << (std::ostream& os, const std::vector<Student>& students)
{
	for (const auto& e : students)
	{
		std::cout << e.mNumber << " : " << e.mName << ", " << e.mScore << std::endl;
	}
	return os;
}

void Print()
{
	std::vector<Student> students
	{
		{ 1, 100, "Doggy" }, { 2, 50, "Kitty" }, { 3, 90, "Piggy" }, { 4, 20, "Bunny" }
	};

	
	// 내림차순정렬
	std::sort(students.begin(), students.end(), [](const Student& s1, const Student& s2) {return s1.mScore > s2.mScore; });
	std::cout << students << std::endl;


	// 오름차순정렬
	std::sort(students.begin(), students.end(), [](const Student& s3, const Student& s4) {return s3.mScore < s4.mScore; }); 
	std::cout << students << std::endl;
}

void Ex_1()
{
	std::string str{"123"};
	std::string str1{ 123 };
	std::stoi(str);
	std::to_string(123);
}