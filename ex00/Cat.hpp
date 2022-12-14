#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

#include <iostream>

class Cat : public Animal
{
	public:

		Cat();
		Cat(std::string type);
		Cat(Cat const& obj);
		Cat& operator=(Cat const& obj);
		~Cat();

		virtual void makeSound() const;
	private:


};

#endif
