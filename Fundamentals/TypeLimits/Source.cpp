#include<iostream>
#include<limits>
using namespace std;

int main()
{
	cout << " Int type limits" << endl;
	cout << "******************" << endl;
	cout << " Size: " << sizeof(int) << " bytes\n";
	cout << " Max:  " << numeric_limits<int>::max() << '\n';
	cout << " Min:  " << numeric_limits<int>::min() << '\n';
	return 0;
}