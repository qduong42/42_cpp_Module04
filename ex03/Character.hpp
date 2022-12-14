#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#ifndef DEBUG
# define DEBUG 0
#endif

class Character : virtual public ICharacter
{
	public:

		Character();
		Character(std::string name);
		Character(Character const& obj);
		Character& operator=(Character const& obj);
		~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:

		AMateria *arr[4];
		std::string _name;
};

#endif
