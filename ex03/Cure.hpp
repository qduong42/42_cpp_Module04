#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#ifndef DEBUG
# define DEBUG 0
#endif

class Cure : public AMateria
{
	public:

		Cure();
		Cure(std::string const& type);
		Cure(Cure const& obj);
		Cure& operator=(Cure const& obj);
		virtual ~Cure();

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);

};

#endif
