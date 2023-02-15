/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:08:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/15 14:28:46 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>
#include <sstream>


Cat::Cat(): Animal(), brain(new Brain()){
	this->type = "Cat";
	//this->brain = new Brain();
	this->populateIdeas();
	std::cout << "🐱 has been instantiated (default constructor)." << std::endl;
};
Cat::Cat(const Cat& origin): Animal(), brain(new Brain()){
	*this = origin;
	std::cout << "🐱 has been copied (copy constructor)." << std::endl;
};
Cat& Cat::operator=(const Cat& origin){
	std::cout << "🐱 has been copied (copy assingment)." << std::endl;
	this->type = origin.type;
	return (*this);
};
Cat::~Cat(){
	delete this->brain;
	std::cout << "🐱 has been deleted (default constructor)." << std::endl;
};
void Cat::makeSound() const{
	std::cout << "🐱 << Meow... Meow..." << std::endl;
};
void Cat::populateIdeas(){
	
	for(int i = 0; i < 100; i++)
	{
		std::stringstream converter;
		converter << i;
		this->brain->ideas[i] = "This a 🐶 idea, I wish for " + converter.str() + "🦴.";
	}
};