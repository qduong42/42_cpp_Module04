#include "ICharacter.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

/**
 * @brief Construct a new ICharacter::ICharacter object
 * pointless => Class cant be instantiated anyway.
 */
ICharacter::ICharacter()
{
	if (DEBUG)
	std::cout << C_GREY << "ICharacter default constructed" C_DEF << std::endl;
}

ICharacter::ICharacter(ICharacter const& obj)
{
	(void) obj;
	if (DEBUG)
	std::cout << C_GREY << "ICharacter copy constructed" C_DEF << std::endl;
}

ICharacter& ICharacter::operator=(ICharacter const& obj)
{
	(void) obj;
	if (DEBUG)
	std::cout << C_GREY << "ICharacter operator = overload" C_DEF << std::endl;
	return (*this);
}

/**
 * @brief Destroy the ICharacter::ICharacter object
 * virtual, calls derived deconstructor
 */
ICharacter::~ICharacter()
{
	if (DEBUG)
	std::cout << C_GREY << "ICharacter default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

//None, as all functions are pure virtual
