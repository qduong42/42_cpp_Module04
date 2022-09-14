#include "WrongCat.hpp"

//	CONSTRUCTORS | DESTRUCTOR

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->_type << " default constructed!" << std::endl;
}

// WrongCat::WrongCat(std::string type) : Animal(type)
// {
// 	std::cout << "WrongCat " << this->_type << " typed constructed!" << std::endl;
// }

WrongCat::WrongCat(WrongCat const& obj) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(WrongCat const& obj)
{
	std::cout << "WrongCat = operator overload called!" << std::endl;
	if (this != &obj)
	{
		this->setType(obj.getType());
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << this->_type << " destructed!" << std::endl;
}

//	MEMBER FUNCTIONS


void WrongCat::makeSound() const
{
	std::cout << getType() << " made purrrr I'm coming for your skin!" << std::endl;
}
