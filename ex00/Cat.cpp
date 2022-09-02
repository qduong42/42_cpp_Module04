#include "Cat.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Cat::Cat() : Animal("Cat")
{
	std::cout << this->_type << " default constructed!" << std::endl;
}

// Cat::Cat(std::string type) : Animal(type)
// {
// 	std::cout << "Cat " << this->_type << " typed constructed!" << std::endl;
// }

Cat::Cat(Cat const& obj) : Animal()
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
	std::cout << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS


void Cat::makeSound() const
{
	std::cout << getType() << " made purrrr I'm coming for your skin!" << std::endl;
}
