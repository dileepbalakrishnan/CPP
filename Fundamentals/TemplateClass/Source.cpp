#include<iostream>
#include "Accumulator.h"
int main()
{
	Accumulator acc(5); // Available in C++17 onwards
	std::cout << "Total in accumulator now is " << acc.GetTotal() << std::endl;
	acc += 20;
	std::cout << "Total in accumulator after adding 20 is " << acc.GetTotal() << std::endl;
	return 0;
}