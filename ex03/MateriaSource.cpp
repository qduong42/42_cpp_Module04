#include "MateriaSource.hpp"
#include "colors.hpp"

//	CONSTRUCTORS | DESTRUCTOR

MateriaSource::MateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource default constructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		this->mem[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource copy constructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		this->mem[i] = NULL;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (obj.mem[i])
			this->mem[i] = obj.mem[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	if (DEBUG)
		std::cout << C_GREY << "MateriaSource operator = overload" C_DEF << std::endl;
	if (this != &obj)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->mem[i])
			{
				delete this->mem[i];
				this->mem[i] = NULL;
			}
		}
		for (size_t i = 0; i < 4; i++)
		{
			if (obj.mem[i])
				this->mem[i] = obj.mem[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource default destructed" C_DEF << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->mem[i])
		{
			delete this->mem[i];
			this->mem[i] = NULL;
		}
	}
}

//	MEMBER FUNCTIONS

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->mem[i] == NULL)
		{
			if (DEBUG)
				std::cout << "Materia learned!" << std::endl;
			this->mem[i] = m;
			return ;
		}
	}
	delete m;
	if (DEBUG)
		std::cout << "All memory Materia slots full" << std::endl;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->mem[i] != NULL)
		{
			if (this->mem[i]->getType() == type)
			{
				if (DEBUG)
					std::cout << "Type found!" << std::endl;
				return (this->mem[i]->clone());
			}
		}
	}
	if (DEBUG)
		std::cout << "Type unknown" << std::endl;
	return (0);
}