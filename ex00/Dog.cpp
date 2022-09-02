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

Dog::Dog(Dog const& obj)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(Dog const& obj)
{
	std::cout << "Dog = operator overload called!" << std::endl;
	if (this != &obj)
	{
		this->setType(obj.getType());
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog " << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS


void Dog::makeSound()
{
	std::cout << "Dog " << getType() << " made WOOF WOOF the Dogs out!" << std::endl;
}