#include "Dog.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Dog::Dog() : Animal()
{
	std::cout << "Dog " << this->_type << " constrtucted!" << std::endl;
	/**
	 * @brief Dog _type and Animal _type are the same variable, they are not distinct!
	 * 
	 */
	this->Dog::_type = "Default Dog Type";
	std::cout << Dog::_type << std::endl;
	std::cout << Animal::_type << std::endl;
	this->Animal::_type = "New";
	std::cout << Dog::_type << std::endl;
	std::cout << Animal::_type << std::endl;
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

