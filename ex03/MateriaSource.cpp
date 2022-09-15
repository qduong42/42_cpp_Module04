#include "MateriaSource.hpp"

//	CONSTRUCTORS | DESTRUCTOR

MateriaSource::MateriaSource()
{
	if (DEBUG)
	std::cout << "MateriaSource default constructed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	if (DEBUG)
	std::cout << "MateriaSource copy constructed" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	if (DEBUG)
	std::cout << "MateriaSource operator = overload" << std::endl;
}

MateriaSource::~MateriaSource()
{
	if (DEBUG)
	std::cout << "MateriaSource default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

