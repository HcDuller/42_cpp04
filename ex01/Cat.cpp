/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:08:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 23:06:48 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>


Cat::Cat(): Animal(), brain(new Brain()){
	std::cout << "🐱 has been instantiated (default constructor)." << std::endl;
	for (int i = 0; i < 100; i++){
		this->brain->ideas[i] = "🐱Cat likes 🐟";
	}
	this->type = "Cat";
};
Cat::Cat(const Cat& origin): Animal(), brain(new Brain()){
	std::cout << "🐱 has been copied (copy constructor)." << std::endl;
	*this = origin;
};
Cat& Cat::operator=(const Cat& origin){
	std::cout << "🐱 has been copied (copy assingment)." << std::endl;
	*this->brain = *origin.brain;
	this->type = origin.type;
	return (*this);
};
Cat::~Cat(){
	std::cout << "🐱💀 has been deleted (default constructor)." << std::endl;
	delete this->brain;
};
void Cat::makeSound() const{
	std::cout << "🐱 << Meow... Meow..." << std::endl;
};
Brain& Cat::getBrain(void){
	return (*this->brain);
};