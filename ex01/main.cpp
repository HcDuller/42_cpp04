/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:53:32 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/15 15:14:14 by hde-camp         ###   ########.fr       */
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
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
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
	std::cout << std::endl << "CAT TEST - START" << std::endl;
	{
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
		Cat stack_cat;
		Cat *heap_dog = new Cat();
		Cat cpy_dog(stack_cat);
		Cat ass_dog;
		Animal *animal_ptr = &ass_dog;
		ass_dog = stack_cat;
		std::cout << "🔨🔨🔨Constructors🔨🔨🔨" << std::endl;
	
		std::cout << "stack_cat getType: " << stack_cat.getType() << std::endl;
		std::cout << "stack_cat getType: ";
		stack_cat.makeSound();

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
		std::cout << "stack_cat ideas address: " << &(stack_cat.brain->ideas[0]) << " | content: " << stack_cat.brain->ideas[0] << std::endl;
		std::cout << "cpy_dog ideas address:   " << &(cpy_dog.brain->ideas[0])   << " | content: " << cpy_dog.brain->ideas[0] << std::endl;
		std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
		delete heap_dog;
	}
	std::cout << "🚧🚧🚧Descructors🚧🚧🚧" << std::endl;
	std::cout << "CAT TEST - END" << std::endl;
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
	//subjectTest();
	//wrongSubjectTest();
	testDog();
	testCat();
	//testAnimal();
	return (0);
}