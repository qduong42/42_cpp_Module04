#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

#include <iostream>

class Dog : public Animal
{
	public:

		Dog();
		Dog(std::string type);
		Dog(Dog const& obj);
		Dog& operator=(Dog const& obj);
		~Dog();

		virtual void makeSound();
	private:


};

#endif
