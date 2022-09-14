#include "Cat.hpp"
#include "Dog.hpp"
#include "stdio.h"

int main()
{
	const Dog* j = new Dog();
	const Cat* i = new Cat();
	// const Animal* k = new Animal();
	std::cout << "Brain of dog: " << j->get_Brain() << std::endl;
	std::cout << "Brain of cat: " << i->get_Brain() << std::endl;
	j->makeSound();
	delete j;//should not create a leak
	delete i;
	return 0;
}