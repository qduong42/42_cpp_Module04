#include "AMateria.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

AMateria::AMateria()
{
	if (DEBUG) 
		std::cout << C_GREY << "AMateria default constructed" << C_DEF << std::endl;
}

AMateria::AMateria(std::string const& type): _type(type)
{
	if (DEBUG)
		std::cout << C_GREY << "AMateria type constructed" C_DEF << std::endl;
}

AMateria::AMateria(AMateria const& obj) : _type(obj.getType())
{
	if (DEBUG) 
		std::cout << C_GREY << "AMateria copy constructed" C_DEF << std::endl;
}

AMateria& AMateria::operator=(AMateria const& obj)
{
	if (DEBUG)
		std::cout << C_GREY << "AMateria operator = overload" C_DEF << std::endl;
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria()
{
	if (DEBUG) 
		std::cout << C_GREY << "AMateria default destructed" C_DEF << std::endl;
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
