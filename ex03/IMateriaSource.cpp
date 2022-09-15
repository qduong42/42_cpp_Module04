#include "IMateriaSource.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

IMateriaSource::IMateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "IMateriaSource default constructed" C_DEF << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "IMateriaSource copy constructed" C_DEF << std::endl;
}

IMateriaSource& IMateriaSource::operator=(IMateriaSource const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "IMateriaSource operator = overload" C_DEF << std::endl;
}

IMateriaSource::~IMateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "IMateriaSource default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

