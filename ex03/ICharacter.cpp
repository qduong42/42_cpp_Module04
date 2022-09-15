#include "ICharacter.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ICharacter::ICharacter()
{
	if (DEBUG)
	std::cout << "ICharacter default constructed" << std::endl;
}

ICharacter::ICharacter(ICharacter const& obj)
{
	if (DEBUG)
	std::cout << "ICharacter copy constructed" << std::endl;
}

ICharacter& ICharacter::operator=(ICharacter const& obj)
{
	if (DEBUG)
	std::cout << "ICharacter operator = overload" << std::endl;
}

ICharacter::~ICharacter()
{
	if (DEBUG)
	std::cout << "ICharacter default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

