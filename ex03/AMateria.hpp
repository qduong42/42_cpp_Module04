#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
// #include "ICharacter.hpp"
// #include "Character.hpp"
// #include "Ice.hpp"

#ifndef DEBUG
# define DEBUG 0
#endif

class AMateria
{
	public:

		AMateria(void);
		virtual ~AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& obj);
		AMateria& operator=(AMateria const& obj);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);

	protected:

		std::string _type;
};

#endif