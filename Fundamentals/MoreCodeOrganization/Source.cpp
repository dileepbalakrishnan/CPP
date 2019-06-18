#include<iostream>
#include<string>
#include "Rectangle.hpp"
using namespace std;

void PrintInfo(const Rectangle& rectangle, const string& type)
{
	cout << "Rectangle Parameters (" << type << ")" << endl;
	cout << "********************" << endl;
	cout << "Width : " << rectangle.Width() << endl;
	cout << "Height : " << rectangle.Height() << endl;
	cout << "Area : " << rectangle.Area() << endl;
	cout << "Perimeter : " << rectangle.Perimeter() << endl;
}
int main()
{
	Rectangle rectangle1{};
	PrintInfo(rectangle1, "default");
	Rectangle rectangle2{ 10,20 };
	PrintInfo(rectangle2, "parameterized");
	cout << "After 2X scaling" << endl;
	rectangle2.Scale(2);
	PrintInfo(rectangle2, "parameterized, scaled");
	return 0;
}