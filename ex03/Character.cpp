#include "Character.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Character::Character()
{
	if (DEBUG)
	std::cout << "Character default constructed" << std::endl;
}

Character::Character(Character const& obj):_name(obj->getName())
{
	if (DEBUG)
		std::cout << "Character copy constructed" << std::endl;
	(*this) = obj;
}

Character& Character::operator=(Character const& obj)
{
	if (DEBUG)
		std::cout << "Character operator = overload" << std::endl;
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
		std::cout << "Character default destructed" << std::endl;
}

//	MEMBER FUNCTIONS

std::string const & Character::getName() const
{
	return (this->_name);
}