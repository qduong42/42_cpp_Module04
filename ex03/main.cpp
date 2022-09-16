/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:18:13 by qduong            #+#    #+#             */
/*   Updated: 2022/09/16 18:29:12 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "colors.hpp"
#include <stdio.h>

// int main()
// {
// 	Ice d("cure");
// 	Cure me("cure");
// 	Ice he("ice");
// 	Cure be("cure");
// 	Cure re("cure");
// 	AMateria *p1;
// 	p1 = &me;
// 	AMateria *p2;
// 	p2 = &he;
// 	// AMateria *p3;
// 	// p3 = &be;
// 	// AMateria *p4;
// 	// p4 = &re;
// 	// AMateria *p5;
// 	// p5 = &she;
// 	Character a("Bob");
// 	std::cout << C_GREEN << "Equip Tests:" << C_DEF << std::endl;
// 	a.equip(p1);
// 	a.equip(p2);
// 	// a.equip(p1);
// 	// a.equip(p1);
// 	// a.equip(p1);
// 	std::cout << C_GREEN << "COPY CONSTR" << std::endl;
// 	Character b(a);
// 	std::cout << C_GREEN << "UN-Equip Tests:" << C_DEF << std::endl;
// 	a.unequip(0);
// 	a.unequip(1);
// 	a.unequip(2);
// 	a.unequip(3);
// 	std::cout << C_GREEN << "USE Tests:" << C_DEF << std::endl;
// 	a.use(0, a);
// 	a.use(1, a);
// 	b.use(0, a);
// 	b.use(1, a);
// 	std::cout << C_GREEN << "Copy assignment Tests:" << C_DEF << std::endl;
// 	Cure she("cure");
// 	AMateria *sea;
// 	sea = &d;
// 	Character c;
// 	c.equip(sea->clone());
// 	c = a;
// 	std::cout << C_GREEN << "IMateria Tests:" << C_DEF << std::endl;
// 	MateriaSource source;
// 	source.learnMateria(sea);
// 	return (0);
// }

int	main(void)
{
	{
		std::cout << "-- Tests from Subject --\n" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(2000, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;

	}	
	{
		std::cout << "\n-- Inventory/Floor Full --\n" << std::endl;
		AMateria *mat = new Ice();
		Character *pete = new Character("Pete");
		ICharacter *bob = new Character("Bob");
		std::cout << "======" << std::endl;
		mat->use(*bob);
		std::cout << "======" << std::endl;
		ICharacter *random = new Character();
		
		std::cout << "filling Inv with 4 " << mat->getType() << std::endl;
		for (int i = 0; i < 4; i++)
			pete->equip(mat->clone());
		std::cout << "now one extra " << mat->getType() << std::endl;
		pete->equip(mat->clone());
		std::cout << "\nnow filling the floor with " << mat->getType() << std::endl;
		for (int i = 0; i < 3; i++)
		{
			for (int i = 0; i < 4; i++)
				pete->unequip(i);
			for (int i = 0; i < 4; i++)
				pete->equip(mat->clone());
		}
		pete->use(3, *bob);
		ICharacter *pete2 = new Character(*pete);
		pete2->use(1, *bob);
		pete2->unequip(5);
		pete->use(2, *random);
		pete->use(4, *random);
		delete mat;
		delete pete;
		delete bob;
		delete pete2;
		delete random;
	}
	return 0;
}
