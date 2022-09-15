#include "Ice.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Ice::Ice()
{
	if (DEBUG) 
		std::cout << C_GREY << "Ice default constructed" C_DEF << std::endl;
}

Ice::Ice(Ice const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "Ice copy constructed" C_DEF << std::endl;
}

Ice& Ice::operator=(Ice const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "Ice operator = overload" C_DEF << std::endl;
}

Ice::~Ice()
{
	if (DEBUG)
	std::cout << C_GREY << "Ice default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

