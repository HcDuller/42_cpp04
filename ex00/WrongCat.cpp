/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:08:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/14 17:12:40 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>
#include <string>


WrongCat::WrongCat(): WrongAnimal(){
	this->type = "WrongCat";
	std::cout << "🐱 has been instantiated (default constructor)." << std::endl;
};
WrongCat::WrongCat(const WrongCat& origin): WrongAnimal(){
	*this = origin;
	std::cout << "🐱 has been copied (copy constructor)." << std::endl;
};
WrongCat& WrongCat::operator=(const WrongCat& origin){
	std::cout << "🐱 has been copied (copy assingment)." << std::endl;
	this->type = origin.type;
	return (*this);
};
WrongCat::~WrongCat(){
	std::cout << "🐱 has been deleted (default constructor)." << std::endl;
};
void WrongCat::makeSound() const{
	std::cout << "🐱 << Meow... Meow..." << std::endl;
};
