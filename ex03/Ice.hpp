#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#ifndef DEBUG
# define DEBUG 0
#endif

class Ice
{
	public:

		Ice();
		Ice(Ice const& obj);
		Ice& operator=(Ice const& obj);
		~Ice();

	private:


};

#endif
