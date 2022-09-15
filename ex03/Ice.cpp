#include "Ice.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Ice::Ice()
{
	if (DEBUG)
		std::cout << "Ice default constructed" << std::endl;	
}

Ice::Ice(Ice const& obj)
{
	if (DEBUG)
	std::cout << "Ice copy constructed" << std::endl;
}

Ice& Ice::operator=(Ice const& obj)
{
	if (DEBUG)
	std::cout << "Ice operator = overload" << std::endl;
}

Ice::~Ice()
{
	if (DEBUG)
	std::cout << "Ice default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

