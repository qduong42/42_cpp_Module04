#include "Dog.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Dog::Dog() : Animal("Dog"), _brain(NULL)
{
	this->_brain = new Brain();
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
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain();
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << this->_type << " destructed!" << std::endl;
	delete this->_brain;
}

//	MEMBER FUNCTIONS


void Dog::makeSound() const
{
	std::cout << getType() << " made WOOF WOOF the Dogs out!" << std::endl;
}

Brain *Dog::get_Brain()const
{
	return (this->_brain);
}