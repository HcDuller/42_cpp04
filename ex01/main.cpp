/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:53:32 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 13:03:33 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void subjectTest(){
	std::cout << std::endl << "SUBJECT TEST - START" << std::endl;
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j;
		delete i;
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
	std::cout << std::endl << "🐶🐶🐶START🐶🐶🐶" << std::endl;
	{
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
		Dog stack_dog;
		Dog *heap_dog = new Dog();
		Dog cpy_dog(stack_dog);
		Dog ass_dog;
		Animal *animal_ptr = &ass_dog;
		ass_dog = stack_dog;
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
	
		std::cout << "stack_dog getType: " << stack_dog.getType() << std::endl;
		std::cout << "stack_dog getType: ";
		stack_dog.makeSound();

		std::cout << "heap_dog getType: " << heap_dog->getType() << std::endl;
		std::cout << "heap_dog getType: ";
		heap_dog->makeSound();

		std::cout << "cpy_dog getType: " << cpy_dog.getType() << std::endl;
		std::cout << "cpy_dog getType: ";
		heap_dog->makeSound();

		std::cout << "animal_ptr getType: " << animal_ptr->getType() << std::endl;
		std::cout << "animal_ptr getType: ";
		animal_ptr->makeSound();
		std::cout << "Start deep copy demonstration: " << std::endl << std::endl;
		std::cout << "stack_dog ideas address: " << &(stack_dog.brain->ideas[0]) << " | content: " << stack_dog.brain->ideas[0] << std::endl;
		std::cout << "cpy_dog ideas address:   " << &(cpy_dog.brain->ideas[0])   << " | content: " << cpy_dog.brain->ideas[0] << std::endl;
		std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
		delete heap_dog;
	}
	std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
	std::cout << "🐶🐶🐶_END_🐶🐶🐶" << std::endl;
}
void testCat(){
	std::cout << std::endl << "🐱🐱🐱START🐱🐱🐱" << std::endl;
	{
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
		Cat stack_cat;
		Cat *heap_cat = new Cat();
		Cat cpy_cat(stack_cat);
		Cat ass_cat;
		Animal *animal_ptr = &ass_cat;
		ass_cat = stack_cat;
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
	
		std::cout << "stack_cat getType: " << stack_cat.getType() << std::endl;
		std::cout << "stack_cat getType: ";
		stack_cat.makeSound();

		std::cout << "heap_cat getType: " << heap_cat->getType() << std::endl;
		std::cout << "heap_cat getType: ";
		heap_cat->makeSound();

		std::cout << "cpy_cat getType: " << cpy_cat.getType() << std::endl;
		std::cout << "cpy_cat getType: ";
		heap_cat->makeSound();

		std::cout << "animal_ptr getType: " << animal_ptr->getType() << std::endl;
		std::cout << "animal_ptr getType: ";
		animal_ptr->makeSound();
		std::cout << "Start deep copy demonstration: " << std::endl << std::endl;
		std::cout << "stack_cat ideas address: " << &(stack_cat.brain->ideas[0]) << " | content: " << stack_cat.brain->ideas[0] << std::endl;
		std::cout << "cpy_cat ideas address:   " << &(cpy_cat.brain->ideas[0])   << " | content: " << cpy_cat.brain->ideas[0] << std::endl;
		std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
		delete heap_cat;
	}
	std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
	std::cout << "🐱🐱🐱_END_🐱🐱🐱" << std::endl;
}
void testAnimal(){
	std::cout << std::endl << "ANIMAL TEST - START" << std::endl;
	{
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
		Animal stack_animal;
		Animal *heap_animal = new Animal();
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;

		std::cout << "stack_animal getType: " << stack_animal.getType() << std::endl;
		std::cout << "stack_animal getType: ";
		stack_animal.makeSound();

		std::cout << "heap_animal getType: " << heap_animal->getType() << std::endl;
		std::cout << "heap_animal getType: ";
		heap_animal->makeSound();
		std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
		delete heap_animal;
	}
	std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
	std::cout << "ANIMAL TEST - END" << std::endl;
}
int main(void){
	subjectTest();
	testDog();
	testCat();
	std::cout  << std::endl << "Heap animal / 🐶 / 🐱 start " << std::endl;
	{
		Animal *polymorphs[4];
		for(int i = 0; i < 4; i++){
			if (i%2)
			{
				polymorphs[i] = new Cat();
			}
			else
			{
				polymorphs[i] = new Dog();
			}
			polymorphs[i]->makeSound();
		}
		for(int i = 0; i < 4; i++){
			delete polymorphs[i];
		}
		
	}
	std::cout << "Heap animal / 🐶 / 🐱 end " << std::endl;
	std::cout  << std::endl << "Stack animal / 🐶 / 🐱 start " << std::endl;
	{
		Animal polymorphs[4];
		for(int i = 0; i < 4; i++){
			if (i%2)
			{
				polymorphs[i] = Cat();
			}
			else
			{
				polymorphs[i] = Dog();
			}
			polymorphs[i].makeSound();
		}
		
	}
	std::cout << "Stack animal / 🐶 / 🐱 end " << std::endl;
	return (0);
}