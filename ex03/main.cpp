/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:23:59 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 00:28:04 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "LinkedList.hpp"

int main(void){
	IMateriaSource* materiaMaker = new MateriaSource();
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Cure());
	ICharacter* bob = new Character("bob");
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->unequip(-1);
	bob->unequip(0);
	bob->unequip(1);
	bob->unequip(2);
	bob->unequip(3);
	bob->unequip(4);
	bob->unequip(5);
	delete bob;
	delete materiaMaker;
	return 0;
}
