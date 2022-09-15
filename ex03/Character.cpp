#include "Character.hpp"
#include "colors.hpp"
#include <stdio.h>

//	CONSTRUCTORS | DESTRUCTOR

Character::Character()
{
	if (DEBUG) 
	std::cout << C_GREY << "Character default constructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = NULL;
	}
}

Character::Character(std::string name): _name(name)
{
	if (DEBUG) 
	std::cout << C_GREY << "Character default constructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = NULL;
	}
}

Character::Character(Character const& obj):ICharacter(), _name(obj.getName())
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

void Character::equip(AMateria* m)
{
	bool	full;

	full = true;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->arr[i] == NULL)
		{
			full = false;
			this->arr[i] = m;
			std::cout << "Materia successfully equipped" << std::endl;
			break ;
		}
	}
	if (full)
		std::cout << "Inventory full" << std::endl;
}

