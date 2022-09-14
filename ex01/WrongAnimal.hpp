#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& obj);
		WrongAnimal& operator=(WrongAnimal const& obj);
		virtual ~WrongAnimal();
		std::string const& getType()const;
		void setType(std::string const& type);
		void makeSound() const;

	protected:

				std::string _type;
};

#endif
