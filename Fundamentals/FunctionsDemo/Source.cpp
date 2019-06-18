#include <iostream>
using namespace std;

double CelsiusFromFahrenheit(double fahrenheit)
{
	return (fahrenheit - 32.0)*5.0 / 9.0;
}
int main() {
	double fahrenheit{};
	double celsius{};

	cout << "Temperature value in Fahrenheit ?: ";
	cin >> fahrenheit;
	cout << "Temeperature in Celsius is: " << CelsiusFromFahrenheit(fahrenheit) << '\n';
}

