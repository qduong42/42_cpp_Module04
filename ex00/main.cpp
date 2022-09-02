#include "Dog.hpp"

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
	Dog Mike("German Shepherd");
	Mike.makeSound();
	std::cout << "====Dog Reese====" << std::endl;
	Dog Reese(Mike);
	std::cout << Reese.getType() << std::endl;
	std::cout << "====Destructions====" << std::endl;
	return (0);
}