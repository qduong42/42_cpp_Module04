/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:18:13 by qduong            #+#    #+#             */
/*   Updated: 2022/09/16 15:04:26 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "colors.hpp"
#include <stdio.h>

int main()
{
	Cure me("cure");
	Ice he("ice");
	Cure be("cure");
	Cure re("cure");
	Cure she("cure");
	AMateria *p1;
	p1 = &me;
	AMateria *p2;
	p2 = &he;
	// AMateria *p3;
	// p3 = &be;
	// AMateria *p4;
	// p4 = &re;
	// AMateria *p5;
	// p5 = &she;
	Character a("Bob");
	std::cout << C_GREEN << "COPY CONSTR" << std::endl;
	Character b(a);
	std::cout << C_GREEN << "Equip Tests:" << C_DEF << std::endl;
	a.equip(p1);
	a.equip(p2);
	// a.equip(p1);
	// a.equip(p1);
	// a.equip(p1);
	std::cout << C_GREEN << "UN-Equip Tests:" << C_DEF << std::endl;
	a.unequip(0);
	a.unequip(1);
	a.unequip(2);
	a.unequip(3);
	std::cout << C_GREEN << "USE Tests:" << C_DEF << std::endl;
	a.use(0, a);
	a.use(1, a);
	return (0);
}
