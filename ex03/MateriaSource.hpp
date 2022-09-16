#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:

		MateriaSource();
		MateriaSource(MateriaSource const& obj);
		MateriaSource& operator=(MateriaSource const& obj);
		~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:

		AMateria *mem[4];
};

#endif
