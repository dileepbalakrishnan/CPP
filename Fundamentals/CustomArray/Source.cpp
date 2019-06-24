#include<iostream>

class IndexOutOfBoundsException{};
class IntArray
{
private:
	int* _ptr{ nullptr };
	int _size{0};
public:
	IntArray() = default;
	explicit IntArray(int size)
	{
		if (size != 0)
		{
			_ptr = new int[size] {};
			_size = size;
		}
	}
	// Copy constructor to prevent shallow copying  
	/*IntArray(IntArray const& source)
	{
		if (source.Size() > 0)
		{
			_size = source.Size();
			_ptr = new int[_size];
			for (int i = 0; i < _size; i++)
			{
				_ptr[i] = source[i];
			}
		}
	}*/
	// Another way of copying objects aprat from copy constructors
	// This is called copy-swap idiom
	IntArray& operator=(IntArray source)
	{
		Swap(*this, source);
		return *this;
	}

	friend void Swap(IntArray& a, IntArray& b)
	{
		std::swap(a._size, b._size);
		std::swap(a._ptr, b._ptr);
	}
	~IntArray()
	{
		delete[] _ptr;
	}
	int Size() const
	{
		return _size;
	}
	bool IsEmpty()
	{
		return _size == 0;
	}
	int& operator[](int index) 
	{
		if (!IsValidIndex(index))
		{
			throw IndexOutOfBoundsException();
		}
		return _ptr[index];
	}
	int operator[](int index) const
	{
		if (!IsValidIndex(index))
		{
			throw IndexOutOfBoundsException();
		}
		return _ptr[index];
	}
	bool IsValidIndex(int index) const
	{
		return _size >= 0 && index < _size;
	}
	// When overloading the << operator, the irst parameter is implicitly the calling object.
	// So we should either overload it as friend function or as a free function.
	// However, the canonical way is to overload it as free function.
	// https://stackoverflow.com/questions/16291623/operator-overloading-c-too-many-parameters-for-operation
	// https://stackoverflow.com/questions/4421706/what-are-the-basic-rules-and-idioms-for-operator-overloading
	/*friend std::ostream& operator<<(std::ostream& os, const IntArray& arr)
	{
		os << "[";
		for (int i = 0; i < arr.Size(); i++)
		{
			os << arr[i] << ' ';
		}
		os << "]";
		return os;
	}*/
};

std::ostream& operator<<(std::ostream& os, const IntArray& arr)
{
	os << "[";
	for (int i = 0; i < arr.Size(); i++)
	{
		os << arr[i] << ' ';
	}
	os << "]";
	return os;
}
int main()
{
	IntArray a{ 5 };
	try
	{
		a[0] = 1;
		a[5] = 10;
		std::cout << a[0];
	}
	catch (const IndexOutOfBoundsException& ex)
	{
		std::cout << "Error : Index was out of range!" << std::endl;
	}

	for (int i = 0; i < a.Size(); i++)
	{
		a[i] = i;
	}
	std::cout << a;
	IntArray b = a;
	std::cout << std::endl << "Copied a to b" << std::endl;
	for (int i = 0; i < b.Size(); i++)
	{
		b[i] *= 2;
	}
	std::cout << b;
	return 0;
}
