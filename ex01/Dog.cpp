/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:08:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 13:06:07 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <string>
#include <sstream>


Dog::Dog(): Animal(), brain(new Brain()){
	this->type = "Dog";
	this->populateIdeas();
	std::cout << "🐶 has been instantiated (default constructor)." << std::endl;
};
Dog::Dog(const Dog& origin): Animal(), brain(new Brain()){
	*this = origin;
	std::cout << "🐶 has been copied (copy constructor)." << std::endl;
};
Dog& Dog::operator=(const Dog& origin){
	std::cout << "🐶 has been copied (copy assingment)." << std::endl;
	this->type = origin.type;
	for(int i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = origin.brain->ideas[i];
	}
	return (*this);
};
Dog::~Dog(){
	delete this->brain;
	std::cout << "🐶💀 has been deleted (default destructor)." << std::endl;
};
void Dog::makeSound() const{
	std::cout << "🐶 << BARK!! BARK!!" << std::endl;
};
void Dog::populateIdeas(){
	
	for(int i = 0; i < 100; i++)
	{
		std::stringstream converter;
		converter << i;
		this->brain->ideas[i] = "This a 🐶 idea, I wish for " + converter.str() + "🦴.";
	}
};