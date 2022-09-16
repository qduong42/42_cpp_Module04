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
		if (m == this->arr[i])
		{
			std::cout << "Materia already equipped!" << std::endl;
			return ;
		}
	}
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

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index, inv only has 0, 1, 2, 3" << std::endl;
	else if (this->arr[idx] != NULL)
	{
		std::cout << "Materia unequipped!" << std::endl;
		this->arr[idx] = NULL;
	}
	else
	{
		std::cout << "Materia not equipped!" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index, inv only has 0, 1, 2, 3" << std::endl;
	if (this->arr[idx])
		this->arr[idx]->AMateria::use(target);
}