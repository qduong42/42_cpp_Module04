#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:

		Animal();
		Animal(std::string type);
		Animal(Animal const& obj);
		Animal& operator=(Animal const& obj);
		~Animal();

	private:

		std::string _type;
};

#endif
