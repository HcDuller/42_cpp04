/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:24:47 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 13:22:43 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(): type("Polymorph"){
	std::cout << "🦄A base Animal has been instantiated. (default constructor)" << std::endl;
};
Animal::Animal(const Animal& origin){
	std::cout << "🦄A base Animal has been copied. (copy constructor)" << std::endl;
	*this = origin;
};
Animal& Animal::operator=(const Animal &origin){
	std::cout << "🦄A base Animal has been copied. (copy assignment)" << std::endl;
	this->type = origin.type;
	return (*this);
};
Animal::~Animal(){
	std::cout << "🦄A base Animal has been deleted. (default destructor)" << std::endl;
};
void Animal::makeSound() const{
	std::cout << "🦄A " << this->type << " animal is trying to make sound." << std::endl;
};
const std::string& Animal::getType(void) const{
	return (this->type);
};