#include "Animal.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Animal::Animal() : _type("\"Random Animal\"")
{
	std::cout << "Animal " << this->_type << " default constructed!" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
		std::cout << "Animal " << this->_type << " typed constructed!" << std::endl;
}

Animal::Animal(Animal const& obj)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	(*this = obj);
}

Animal& Animal::operator=(Animal const& obj)
{
	std::cout << "Animal = operator overload called!" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal " << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS

std::string const& Animal::getType()const
{
	return (this->_type);
}

void Animal::setType(std::string const& type)
{
	this->_type = type;
}

void Animal::makeSound() const
{
	std:: cout << "Animal " << getType() << " made unspecified animal noises *SCREECH*!" << std::endl;
}