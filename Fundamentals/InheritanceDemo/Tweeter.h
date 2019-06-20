#pragma once
#include "Person.h"
class Tweeter : public Person
{
private:
	std::string _twitterHandle;
public:
	Tweeter() = default;
	Tweeter(std::string firstName, std::string lastName, std::string email, std::string twitterHandle);
	~Tweeter(){}
};
