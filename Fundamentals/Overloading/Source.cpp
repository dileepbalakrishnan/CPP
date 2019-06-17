#include<iostream>

void Swap(int& a, int&b) 
{
	int temp{ a };
	a = b;
	b = temp;
}

void Swap(double& a, double&b)
{
	double temp{ a };
	a = b;
	b = temp;
}

int main() 
{
	int a{ 8 }, b{ 4 };
	std::cout << "int Before swap :" << "a=" << a << " b=" << b <<std::endl;
	Swap(a, b);
	std::cout << "int After swap :" << "a=" << a << " b=" << b << std::endl;
	double c{ 2.2 }, d{ 3.3 };
	std::cout << "double Before swap :" << "c=" << c << " d=" << d << std::endl;
	Swap(c, d);
	std::cout << "double After swap :" << "c=" << c << " d=" << d << std::endl;
	return 0;
}