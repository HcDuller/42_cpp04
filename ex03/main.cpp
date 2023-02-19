/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:23:59 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 18:31:34 by hde-camp         ###   ########.fr       */
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

void customTests(void){
	MateriaSource* materiaMaker = new MateriaSource();
	ICharacter* bob = new Character("bob");
	MateriaSource stackMaker;
	Character ned("Ned");

	std::cout << "Custom Test START" << std::endl;
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Ice());
	materiaMaker->learnMateria(new Cure());
	materiaMaker->learnMateria(new Cure()); // tenta quinta inserção, não deve ser guardado.

	stackMaker.learnMateria(new Ice());
	stackMaker.learnMateria(new Cure());
	stackMaker.learnMateria(new Ice());
	stackMaker.learnMateria(new Cure());
	stackMaker.learnMateria(new Cure());

	bob->equip(materiaMaker->createMateria("non")); // funcao nao gerara ponteiro valido, nada deve ser inserido
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice"));
	bob->equip(materiaMaker->createMateria("cure"));
	bob->equip(materiaMaker->createMateria("ice")); // tenta quinta inserção, não deve ser guardado.
	ned.equip(stackMaker.createMateria("non")); // funcao nao gerara ponteiro valido, nada deve ser inserido
	ned.equip(stackMaker.createMateria("ice"));
	ned.equip(stackMaker.createMateria("cure"));
	ned.equip(stackMaker.createMateria("ice"));
	ned.equip(stackMaker.createMateria("cure"));
	ned.equip(stackMaker.createMateria("ice")); // tenta quinta inserção, não deve ser guardado.
	bob->use(-1, ned);
	bob->use(0, ned);
	bob->use(1, ned);
	bob->use(2, ned);
	bob->use(3, ned);
	bob->use(4, ned);
	ned.use(-1, *bob);
	ned.use(0, *bob);
	ned.use(1, *bob);
	ned.use(2, *bob);
	ned.use(3, *bob);
	ned.use(4, *bob);


	bob->unequip(-1); //tenta excluir um index nao existente
	bob->unequip(0);
	bob->unequip(1);
	bob->unequip(2);
	bob->unequip(3);
	bob->unequip(4); //tenta excluir um index nao existente
	ned.unequip(-1); //tenta excluir um index nao existente
	ned.unequip(0);
	ned.unequip(1);
	ned.unequip(2);
	ned.unequip(3);
	ned.unequip(4); //tenta excluir um index nao existente
	
	delete bob;
	delete materiaMaker;
	std::cout << "Custom Test END" << std::endl << std::endl;
}
void subjectTest(void){
	std::cout << "Subject Test START" << std::endl;
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
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << "Subject Test START" << std::endl << std::endl;
}
int main(void){
	subjectTest();
	customTests();
	return 0;
}
