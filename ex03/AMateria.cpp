#include "AMateria.hpp"

//	CONSTRUCTORS | DESTRUCTOR

AMateria::AMateria()
{
	if (DEBUG)
		std::cout << "AMateria default constructed" << std::endl;
}

AMateria::AMateria(std::string const& type): _type(type)
{
	if (DEBUG)
		std::cout << "AMateria type constructed" << std::endl;
}

AMateria::AMateria(AMateria const& obj) : _type(obj.getType())
{
	if (DEBUG)
		std::cout << "AMateria copy constructed" << std::endl;
}

AMateria& AMateria::operator=(AMateria const& obj)
{
	if (DEBUG)
		std::cout << "AMateria operator = overload" << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria()
{
	if (DEBUG)
		std::cout << "AMateria default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

std::string const& AMateria::getType()const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
		std::cout << "Amateria use() " << this->_type << "at " << target.getName() << std::endl;
}
