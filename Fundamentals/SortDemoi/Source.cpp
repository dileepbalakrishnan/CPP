#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> companies{ "Microsoft", "Intel","Google","Apple", "Borland", "Citrix", "Dell","EMC" };
	cout << "Before sorting" << endl;
	cout << "**************" << endl;
	for (string const& company : companies)
	{
		cout << company << endl;
	}
	cout << "After sorting" << endl;
	cout << "**************" << endl;
	std::sort(begin(companies), end(companies));
	for (string const& company : companies)
	{
		cout << company << endl;
	}
	return 0;
}

