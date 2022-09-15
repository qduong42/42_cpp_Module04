#include "Ice.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Ice::Ice() : AMateria("ice")
{
	if (DEBUG) 
		std::cout << C_GREY << "Ice default constructed" C_DEF << std::endl;
}

Ice::Ice(std::string const& type): AMateria(type)
{
	if (DEBUG)
		std::cout << C_GREY << "Ice type constructed" C_DEF << std::endl;
}

Ice::Ice(Ice const& obj) : AMateria()
{
	if (DEBUG)
	std::cout << C_GREY << "Ice copy constructed" C_DEF << std::endl;
}

Ice& Ice::operator=(Ice const& obj)
{
	(void) obj;
	if (DEBUG)
	std::cout << C_GREY << "Ice operator = overload" C_DEF << std::endl;
	return (*this);
}

Ice::~Ice()
{
	if (DEBUG)
	std::cout << C_GREY << "Ice default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

Ice* Ice::clone() const
{
	if (DEBUG)
		std::cout << C_GREY << "Ice clone()" C_DEF << std::endl;
	Ice *pointer = new Ice();
	return (pointer);
}

// void Ice::use(ICharacter& target)
// {
// 	if (DEBUG) 
// 		std::cout << "Ice Use()" << std::endl;
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }
