#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

template <class T>
T Max(T const& t1, T const& t2)
{
	return t1 > t2 ? t1 : t2;
}

int main()
{
	cout << "Max (10,20) is " << Max(10, 20) << endl;
	cout << "Max (20.1,20) is " << Max<double>(20.1, 20) << endl;
	string s1("Hello");
	string s2("World");
	cout << "Max (\"Hello\",\"World\") is " << Max(s1,s2) << endl;
	return 0;
}