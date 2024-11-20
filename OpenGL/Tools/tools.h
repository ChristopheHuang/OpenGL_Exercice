#pragma once
#include <string>

namespace Tools
{
	// A template function that prints a string to the console
	template <typename T>
	void print(const T& t)
	{
		std::cout << t << std::endl;
	}
}