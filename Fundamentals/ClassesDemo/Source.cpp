#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
private:
	double _width{};
	double _height{};
public:
	Rectangle() = default;
	Rectangle(double width, double height) : _width{ width }, _height{ height }{}
	double Width() const { return _width; }
	double Height() const { return _height; }
	void Scale(double scaleFactor)
	{
		_width *= scaleFactor;
		_height *= scaleFactor;
	}
	double Area() const
	{
		return _width * _height;
	}
	double Perimeter() const
	{
		return 2 * (_width + _height);
	}
};

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