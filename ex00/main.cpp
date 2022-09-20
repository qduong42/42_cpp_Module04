#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "====James====" << std::endl;
	Animal James;
	std::cout << "====Sam====" << std::endl;
	Animal Sam("Horse");
	James = Sam;
	std::cout << "====John====" << std::endl;
	Animal John(Sam);
	std::cout << "====Tim====" << std::endl;
	Animal Tim = Sam;
	Tim.makeSound();
	std::cout << "====Dog Mike====" << std::endl;
	Dog Mike;
	Mike.makeSound();
	std::cout << "====Dog Reese====" << std::endl;
	Dog Reese(Mike);
	std::cout << "====Cat Pain====" << std::endl;
	Cat Pain;
	Pain.makeSound();
	std::cout << "====Destructions====" << std::endl;
	Animal *tom;
	tom = new Dog();
	tom->makeSound();
	return (0);
}