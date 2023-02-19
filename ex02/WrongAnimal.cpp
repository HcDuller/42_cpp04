/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:24:47 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 15:49:52 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(): type("Polymorph"){
	std::cout << "🐖 WrongAnimal has been instantiated. (default constructor)" << std::endl;
};
WrongAnimal::WrongAnimal(const WrongAnimal& origin){
	std::cout << "🐖 WrongAnimal has been copied. (copy constructor)" << std::endl;
	*this = origin;
};
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &origin){
	std::cout << "🐖 WrongAnimal has been copied. (copy assignment)" << std::endl;
	this->type = origin.type;
	return (*this);
};
WrongAnimal::~WrongAnimal(){
	std::cout << "🐖💀 WrongAnimal has been deleted. (default destructor)" << std::endl;
};
void WrongAnimal::makeSound() const{
	std::cout << "🐖" << this->type << " WrongAnimal is trying to make sound." << std::endl;
};
const std::string& WrongAnimal::getType(void) const{
	return (this->type);
};