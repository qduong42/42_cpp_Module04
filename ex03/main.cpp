/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:18:13 by qduong            #+#    #+#             */
/*   Updated: 2022/09/15 13:30:06 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "colors.hpp"
#include <stdio.h>

int main()
{
	Cure me("cure");
	printf("%p\n", &me);
	AMateria *pointer;
	pointer = me.clone();
	printf("%p\n", pointer);
	Character a("Bob");
	return (0);
}
