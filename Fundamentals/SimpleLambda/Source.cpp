#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main()
{
	std::vector<std::string> names{ "a", "ab","abc","abcd", "abcde" };
	std::sort(std::begin(names), std::end(names));
	std::cout << "Sorting using defualt comparer (alphabectical order)" << std::endl;
	for (auto name : names)
	{
		std::cout << name << std::endl;
	}
	std::sort(std::begin(names), std::end(names),
		[](std::string const& a, std::string const& b) { // comparer using lambda
		return a.length() > b.length();
	}
	);
	std::cout << "Sorting using custom comparer (length order)" << std::endl;
	for (auto name : names)
	{
		std::cout << name << std::endl;
	}
	return 0;
}
