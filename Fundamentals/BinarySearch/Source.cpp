#include<iostream>
#include<vector>
// Assuming that the list is sorted
int BinarySearch(int elementToSearchFor, const int *list, int listSize)
{
	int left = 0;
	int right = listSize - 1;

	while (left <= right)
	{
		int middle = (right + left) / 2;
		if (list[middle] == elementToSearchFor)
		{
			//Item found ! So we return the index of the item.
			return middle;
		}
		else if (list[middle] < elementToSearchFor)
		{
			// Item could be in the right half of the list
			left = middle + 1;
		}
		else if (list[middle] > elementToSearchFor)
		{
			right = middle - 1;
		}
	}
	return -1; // A flag is better since we could be searching for -1 !
}

int main()
{
	std::vector<int> list{};
	for (int i = 0; i < 100000000; i++)
	{
		list.push_back(i);
	}
	int itemToFind{};
	std::cout << "Enter an item to search:";
	std::cin >> itemToFind;
	int index = BinarySearch(itemToFind, list.data(), list.size());
	std::cout << "Index is (-1 means not found): " << index;
	return 0;
}