#include "Cat.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Cat::Cat() : Animal()
{
	std::cout << "Cat " << this->_type << " default constructed!" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat " << this->_type << " typed constructed!" << std::endl;
}

Cat::Cat(Cat const& obj)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(Cat const& obj)
{
	std::cout << "Cat = operator overload called!" << std::endl;
	if (this != &obj)
	{
		this->setType(obj.getType());
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS


void Cat::makeSound()
{
	std::cout << "Cat " << getType() << " made purrrr I'm coming for your skin!" << std::endl;
}