#include<iostream>

double CelsiusFromFahrenheit(double tempInFahrenheit)
{
	return (tempInFahrenheit - 32)*5.0 / 9.0;
}
int main() 
{
	float tempInFahrenheit{};
	float tempInCelsius{};
	std::cout << "Fahrenheit to Celsius Converter"<<std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << "Enter temprature in Fahrenheit :";
	std::cin >> tempInFahrenheit;
	std::cout << "Temperature in Celsius :" << CelsiusFromFahrenheit(tempInFahrenheit);
	return 0;
}

