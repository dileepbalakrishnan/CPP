#pragma once
#include<string>

class Person
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _email;
public:
	Person() = default;
	Person(std::string firstName, std::string lastName, std::string email);
	~Person(){ }
};
