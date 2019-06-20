#include "Tweeter.h"

Tweeter::Tweeter(std::string firstName, std::string lastName, std::string email, std::string twitterHandle)
	: Person(firstName, lastName, email), _twitterHandle(twitterHandle)
{}