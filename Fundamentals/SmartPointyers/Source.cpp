#include<iostream>
#include<memory>
using std::cout;
using std::endl;
class Resource
{
public:
	Resource()
	{
		cout << "Resource constructor is called." << endl;
	}
	~Resource()
	{
		cout << "Resource destructor is called." << endl;
	}
	void DoWork()
	{
		cout << "Doing some work." << endl;
	}
};

int main()
{
	cout << "Using raw pointers" << endl;
	cout << "******************" << endl;
	Resource * rx = new Resource{};
	rx->DoWork();
	cout << endl;
	cout << "Using smart pointers" << endl;
	cout << "******************" << endl;
	auto sx = std::make_unique<Resource>();
	sx->DoWork(); // Destructor will be automatically called when sx goes out of scope.
	return 0;
}