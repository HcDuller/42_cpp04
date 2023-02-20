/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:53:32 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 23:07:58 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void subjectTest(){
	std::cout << std::endl << "SUBJECT TEST - START" << std::endl << std::endl;
	{
	std::cout << std::endl << "Half/Half Animal Array" << std::endl;
		Animal *animals[4];
		animals[0] = new Dog();
		animals[1] = new Cat();
		animals[2] = new Dog();
		animals[3] = new Cat();

		std::cout << std::endl << std::endl ;
		animals[0]->makeSound();
		animals[1]->makeSound();
		animals[2]->makeSound();
		animals[3]->makeSound();
		std::cout << std::endl << std::endl ;
		for (int i = 0; i < 4; i++){
			delete animals[i];
		}
		
	}
	std::cout << std::endl << "SUBJECT TEST - pt2" << std::endl << std::endl;
	{
	std::cout << std::endl << "subject copied" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		delete i;
		delete j;
	}
	std::cout << std::endl << "SUBJECT TEST - pt3" << std::endl << std::endl;
	{
		std::cout << std::endl << "Deep copy" << std::endl;
		Dog* dogs[2];
		Cat* cats[2];
		dogs[0] = new Dog();
		dogs[1] = new Dog(*dogs[0]);
		cats[0] = new Cat();
		cats[1] = new Cat(*cats[0]);

		std::cout << "dogs[0] idea address: " << &(dogs[0]->getBrain().ideas[0]) << std::endl;
		std::cout << "dogs[1] idea address: " << &(dogs[1]->getBrain().ideas[0]) << std::endl;
		std::cout << "cats[0] idea address: " << &(cats[0]->getBrain().ideas[0]) << std::endl;
		std::cout << "cats[1] idea address: " << &(cats[1]->getBrain().ideas[0]) << std::endl;

		delete dogs[0];
		delete dogs[1];
		delete cats[0];
		delete cats[1];
	}
	std::cout << "SUBJECT TEST - END" << std::endl;
}
void wrongSubjectTest(){
	std::cout << std::endl << "WRONG SUBJECT TEST - START" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); 
		meta->makeSound();
		delete meta;
		delete i;
	}
	std::cout << "WRONG SUBJECT TEST - END" << std::endl;
}
void testDog(){
	std::cout << std::endl << "DOG TEST - START" << std::endl;
	{
		Dog stack_dog;
		Dog *heap_dog = new Dog();

		std::cout << "stack_dog getType: " << stack_dog.getType() << std::endl;
		std::cout << "stack_dog getType: ";
		stack_dog.makeSound();

		std::cout << "heap_dog getType: " << heap_dog->getType() << std::endl;
		std::cout << "heap_dog getType: ";
		heap_dog->makeSound();
		delete heap_dog;
	}
	std::cout << "DOG TEST - END" << std::endl;
}

void testCat(){
	std::cout << std::endl << "CAT TEST - START" << std::endl;
	{
		Cat stack_cat;
		Cat *heap_cat = new Cat();

		std::cout << "stack_cat getType: " << stack_cat.getType() << std::endl;
		std::cout << "stack_cat getType: ";
		stack_cat.makeSound();

		std::cout << "heap_cat getType: " << heap_cat->getType() << std::endl;
		std::cout << "heap_cat getType: ";
		heap_cat->makeSound();
		delete heap_cat;
	}
	std::cout << "CAT TEST - END" << std::endl;
}
void testAnimal(){
	std::cout << std::endl << "ANIMAL TEST - START" << std::endl;
	{
		Animal stack_animal;
		Animal *heap_animal = new Animal();

		std::cout << "stack_animal getType: " << stack_animal.getType() << std::endl;
		std::cout << "stack_animal getType: ";
		stack_animal.makeSound();

		std::cout << "heap_animal getType: " << heap_animal->getType() << std::endl;
		std::cout << "heap_animal getType: ";
		heap_animal->makeSound();
		delete heap_animal;
	}
	std::cout << "ANIMAL TEST - END" << std::endl;
}
int main(void){
	subjectTest();
	// testDog();
	// testCat();
	testAnimal();
	return (0);
}