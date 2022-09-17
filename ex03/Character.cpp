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
	std::cout << C_GREY << "Character type constructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = NULL;
	}
}

Character::Character(Character const& obj): _name(obj.getName())
{
	if (DEBUG) 
		std::cout << C_GREY << "Character copy constructed" C_DEF << std::endl;
	this->_name = obj.getName();
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = NULL;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (obj.arr[i])
			this->arr[i] = obj.arr[i]->clone();
	}
}

Character& Character::operator=(Character const& obj)
{
	if (DEBUG)
		std::cout << C_GREY << "Character operator = overload" C_DEF << std::endl;
	if (this != &obj)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->arr[i])
			{
				delete this->arr[i];
				this->arr[i] = NULL;
			}
		}
		this->_name = obj.getName();
		for (size_t i = 0; i < 4; i++)
		{
			if (obj.arr[i])
				this->arr[i] = obj.arr[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	if (DEBUG)
		std::cout << C_GREY << "Character default destructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->arr[i])
			delete this->arr[i];
	}
}

//	MEMBER FUNCTIONS

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (m == this->arr[i])
		{
			if (DEBUG)
				std::cout << C_GREY << "Materia already equipped!" << C_DEF << std::endl;
			return ;
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (this->arr[i] == NULL)
		{
			this->arr[i] = m;
			if (DEBUG)
				std::cout << C_GREY << "Materia successfully equipped" << C_DEF << std::endl;
			return ;
		}
	}
	delete m;
	if (DEBUG)
		std::cout << "Inventory full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		if (DEBUG)
			std::cout << C_GREY << "Invalid index, inv only has 0, 1, 2, 3" << C_DEF << std::endl;
	}
	else if (this->arr[idx])
	{
		if (DEBUG)
			std::cout << C_GREY << "Materia unequipped!" << C_DEF << std::endl;
		this->arr[idx] = NULL;
	}
	else
	{
		if (DEBUG)
			std::cout << C_GREY << "Materia not equipped!" << C_DEF << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		if (DEBUG)
			std::cout << C_GREY << "Invalid index, inv only has 0, 1, 2, 3" << C_DEF << std::endl;
	}
	else if (this->arr[idx])
		this->arr[idx]->use(target);
	else
	{
		if (DEBUG)
			std::cout << C_GREY << "No Materia equipped at that inv idx" << C_DEF << std::endl;
	}
}
