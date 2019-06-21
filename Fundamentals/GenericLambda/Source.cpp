#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>
int main()
{
	std::ifstream file{ "data.txt" };
	std::vector<std::string> lines{};
	std::string oneLine{};

	while (std::getline(file, oneLine))
	{
		lines.push_back(oneLine);
	}
	std::sort(std::begin(lines), std::end(lines),
		[](auto const& a, auto const& b)
	{
		return a.length() > b.length();
	}
	);
	for (auto line : lines)
	{
		std::cout << line << std::endl;
	}
	return 0;
}