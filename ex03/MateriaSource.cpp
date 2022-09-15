#include "MateriaSource.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

MateriaSource::MateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource default constructed" C_DEF << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource copy constructed" C_DEF << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource operator = overload" C_DEF << std::endl;
}

MateriaSource::~MateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

