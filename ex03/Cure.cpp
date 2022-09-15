#include "Cure.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Cure::Cure()
{
	if (DEBUG)
		std::cout << "Cure default constructed" << std::endl;
}

Cure::Cure(Cure const& obj)
{
	if (DEBUG)
		std::cout << "Cure copy constructed" << std::endl;
}

Cure& Cure::operator=(Cure const& obj)
{
	if (DEBUG)
		std::cout << "Cure operator = overload" << std::endl;
}

Cure::~Cure()
{
	if (DEBUG)
		std::cout << "Cure default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

