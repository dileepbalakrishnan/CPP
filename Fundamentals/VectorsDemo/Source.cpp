#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> numbers{ 1,2,3,4 };
	numbers.push_back(5);
	cout << "Length :" << numbers.size() << endl;
	for (int i : numbers) 
	{
		cout << i << " " << endl;
	}
	return 0;
}