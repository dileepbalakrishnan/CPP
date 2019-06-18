#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
class Rectangle
{
private:
	double _width{};
	double _height{};
public:
	Rectangle() = default;
	Rectangle(double width, double height);
	double Width() const;
	double Height() const;
	void Scale(double scaleFactor);
	double Area() const;
	double Perimeter() const;
};
#endif // !RECTANGLE_HPP