#include "Cure.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Cure::Cure() : AMateria("cure")
{
	if (DEBUG)
		std::cout << C_GREY << "Cure default constructed" C_DEF << std::endl;
}

Cure::Cure(std::string const& type): AMateria(type)
{
	if (DEBUG)
		std::cout << C_GREY << "Cure type constructed" C_DEF << std::endl;
}

Cure::Cure(Cure const& obj) : AMateria()
{
	if (DEBUG)
		std::cout << C_GREY << "Cure copy constructed" C_DEF << std::endl;
	(*this) = obj;
}

Cure& Cure::operator=(Cure const& obj)
{
	(void) obj;
	if (DEBUG)
		std::cout << C_GREY << "Cure operator = overload" C_DEF << std::endl;
	return (*this);
}

Cure::~Cure()
{
	if (DEBUG)
		std::cout << C_GREY << "Cure default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

Cure* Cure::clone() const
{
	if (DEBUG)
		std::cout << C_GREY << "Cure clone()" C_DEF << std::endl;
	Cure *pointer = new Cure();
	return (pointer);
}

void Cure::use(ICharacter& target)
{
	if (DEBUG) 
		std::cout << "Cure Use()" << std::endl;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
