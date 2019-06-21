#include<iostream>
#include<memory>
int main()
{
	auto p = std::make_unique<int>(128);
	auto lambda = [ptr = std::move(p)]() 
	{
		std::cout << "Value of external variable inside lambda :" << *ptr;
	};
	lambda();
	*p = 256; // Will not work since it has already been moved !!!
	lambda();
	return 0;
}