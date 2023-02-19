/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:08:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 15:48:07 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>


Cat::Cat(): Animal(){
	this->type = "Cat";
	std::cout << "🐱 has been instantiated (default constructor)." << std::endl;
};
Cat::Cat(const Cat& origin): Animal(){
	*this = origin;
	std::cout << "🐱 has been copied (copy constructor)." << std::endl;
};
Cat& Cat::operator=(const Cat& origin){
	std::cout << "🐱 has been copied (copy assingment)." << std::endl;
	this->type = origin.type;
	return (*this);
};
Cat::~Cat(){
	std::cout << "🐱💀 has been deleted (default constructor)." << std::endl;
};
void Cat::makeSound() const{
	std::cout << "🐱 << Meow... Meow..." << std::endl;
};
