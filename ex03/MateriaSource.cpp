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
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource operator = overload" C_DEF << std::endl;
}

MateriaSource::~MateriaSource()
{
	if (DEBUG)
	std::cout << C_GREY << "MateriaSource default destructed" C_DEF << std::endl;
}

//	MEMBER FUNCTIONS

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->mem[i] == NULL)
		{
			this->mem[i] = m;
			break ;
		}
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->mem[i] != NULL)
		{
			if (this->mem[i]->getType() == type)
				return (this->mem[i]);
		}
	}
	if (DEBUG)
		std::cout << "Type unknown" << std::endl;
	return (0);
}