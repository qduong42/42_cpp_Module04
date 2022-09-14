#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

#include <iostream>

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat const& obj);
		WrongCat& operator=(WrongCat const& obj);
		~WrongCat();

		virtual void makeSound() const;
	private:


};

#endif
