#include "WrongAnimal.hpp"

//	CONSTRUCTORS | DESTRUCTOR

WrongAnimal::WrongAnimal() : _type("\"Random WrongAnimal\"")
{
		std::cout << "WrongAnimal " << this->_type << " default constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
		std::cout << "WrongAnimal " << this->_type << " typed constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& obj)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	(*this = obj);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& obj)
{
	std::cout << "WrongAnimal = operator overload called!" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS

std::string const& WrongAnimal::getType()const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string const& type)
{
	this->_type = type;
}

void WrongAnimal::makeSound() const
{
	std:: cout << "WrongAnimal " << getType() << " made unspecified WrongAnimal noises *SCREECH*!" << std::endl;
}