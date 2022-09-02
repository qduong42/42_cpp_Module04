#include "Dog.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " default constructed!" << std::endl;
}

// Dog::Dog(std::string type) : Animal(type)
// {
// 	std::cout << "Dog " << this->_type << " typed constructed!" << std::endl;
// }

Dog::Dog(Dog const& obj) : Animal()
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
	std::cout << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS


void Dog::makeSound()
{
	std::cout << getType() << " made WOOF WOOF the Dogs out!" << std::endl;
}