#include "Character.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Character::Character()
{
	if (DEBUG) 
	std::cout << "Character default constructed" << std::endl;
	std::cout << C_GREY << "" C_DEF << std::endl;
}

Character::Character(Character const& obj):_name(obj.getName())
{
	if (DEBUG) 
		std::cout << C_GREY << "Character copy constructed" C_DEF << std::endl;
	(*this) = obj;
}

Character& Character::operator=(Character const& obj)
{
	if (DEBUG)
		std::cout << C_GREY << "Character operator = overload" C_DEF << std::endl;
	if (this != &obj)
	{
		this->_name = obj.getName();
		for (size_t i = 0; i < 4; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	if (DEBUG)
		std::cout << C_GREY << "Character default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

std::string const & Character::getName() const
{
	return (this->_name);
}
