#include "IMateriaSource.hpp"

//	CONSTRUCTORS | DESTRUCTOR

IMateriaSource::IMateriaSource()
{
	if (DEBUG)
	std::cout << "IMateriaSource default constructed" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const& obj)
{
	if (DEBUG)
	std::cout << "IMateriaSource copy constructed" << std::endl;
}

IMateriaSource& IMateriaSource::operator=(IMateriaSource const& obj)
{
	if (DEBUG)
	std::cout << "IMateriaSource operator = overload" << std::endl;
}

IMateriaSource::~IMateriaSource()
{
	if (DEBUG)
	std::cout << "IMateriaSource default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

