#include "WrongCat.hpp"

int main()
{
const WrongAnimal* i = new WrongAnimal();
const WrongAnimal* j = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << "Both will give wrong animal sounds!" << std::endl;
i->makeSound(); //will output the WrongCat sound!
j->makeSound();
delete j;
delete i;
return 0;
}