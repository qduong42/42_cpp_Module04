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
		std::string const& getType()const;
		void setType(std::string const& type);
		virtual void makeSound();

	protected:

		std::string _type;
};

#endif
