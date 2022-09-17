#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "=======ARRAY CONSTRUCTIONS=====" << std::endl;
	Animal	*animal_array[10];
	for (unsigned int i = 0; i < 5; i++)
	{
		animal_array[i] = new Cat();
		animal_array[i + 5] = new Dog();
	}
	// std::cout << "=======Animal=====" << std::endl;
	// const Animal* animal = new Animal();
	// std::cout << "Hi, I am a " << animal->getType() << " and I don't have a Brain!" << std::endl;
	// animal->makeSound();
	// delete animal;
	// std::cout << std::endl;
	std::cout << "=======Dog=====" << std::endl;
	const Dog* dog = new Dog();
	std::cout << "Hi, I am a " << dog->getType() << " " << std::endl;
	dog->makeSound();
	const Dog * dog_copy = new Dog(*dog);

	std::cout << "Hi, I am a " << dog_copy->getType() << " " << std::endl;
	dog_copy->makeSound();

	delete dog_copy;
	delete dog;
	std::cout << std::endl;
	
	std::cout << "=======Cat=====" << std::endl;
	const Cat* cat = new Cat();
	std::cout << "Hi, I am a " << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << "=======Cat Copy=====" << std::endl;
	const Cat * cat_copy = new Cat(*cat);
	delete cat;
	std::cout << "Hi, I am a " << cat_copy->getType() << " " << std::endl;
	cat_copy->makeSound();
	delete cat_copy;
	std::cout << std::endl;

	std::cout << "=======Array Destructions=====" << std::endl;
	for (unsigned int i = 0; i < 5; i++)
	{
		delete animal_array[i];
		delete animal_array[i + 5];
	}
	return (0);
}
