#include "ICharacter.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ICharacter::ICharacter()
{
	if (DEBUG)
	std::cout << C_GREY << "ICharacter default constructed" C_DEF << std::endl;
}

ICharacter::ICharacter(ICharacter const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "ICharacter copy constructed" C_DEF << std::endl;
}

ICharacter& ICharacter::operator=(ICharacter const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "ICharacter operator = overload" C_DEF << std::endl;
}

ICharacter::~ICharacter()
{
	if (DEBUG)
	std::cout << C_GREY << "ICharacter default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

