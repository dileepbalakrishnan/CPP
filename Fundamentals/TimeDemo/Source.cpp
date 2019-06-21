#include<iostream>
#include<chrono>
using namespace std::chrono;
void PrintTime(microseconds ms)
{
	std::cout << ms.count() << "us" << std::endl;
}

int main()
{
	auto milliSeconds = 2ms;
	PrintTime(milliSeconds);
	auto microSeconds = 3us;
	PrintTime(microSeconds);
	auto seconds = 2s;
	PrintTime(seconds);
	auto minutes = 3min;
	PrintTime(minutes);
	return 0;
}