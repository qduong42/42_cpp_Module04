#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:

		Brain();
		Brain(Brain const& obj);
		Brain& operator=(Brain const& obj);
		~Brain();

	private:

		std::string ideas[100];
};

#endif
