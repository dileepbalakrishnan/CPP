#include <iostream>
#include "Status.h"
int main()
{
	Status s = Open;
	s = Closed;

	FileStatus fs = FileStatus::Open;
	fs = FileStatus::Closed;
	return 0;
}