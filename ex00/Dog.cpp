#include "Dog.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Dog::Dog() : Animal()
{
	std::cout << "Dog " << this->_type << " default constructed!" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog " << this->_type << " typed constructed!" << std::endl;
}

// Dog::Dog(Dog const& obj)
// {}

// Dog& Dog::operator=(Dog const& obj)
// {}

Dog::~Dog()
{
	std::cout << "Dog " << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS


void Dog::makeSound()
{
	std::cout << "WOOF WOOF the Dogs out!" << std::endl;
}