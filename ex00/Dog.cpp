/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:08:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 15:48:55 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <string>


Dog::Dog(): Animal(){
	this->type = "Dog";
	std::cout << "🐶 has been instantiated (default constructor)." << std::endl;
};
Dog::Dog(const Dog& origin): Animal(){
	*this = origin;
	std::cout << "🐶 has been copied (copy constructor)." << std::endl;
};
Dog& Dog::operator=(const Dog& origin){
	std::cout << "🐶 has been copied (copy assingment)." << std::endl;
	this->type = origin.type;
	return (*this);
};
Dog::~Dog(){
	std::cout << "🐶💀 has been deleted (default constructor)." << std::endl;
};
void Dog::makeSound() const{
	std::cout << "🐶 << BARK!! BARK!!" << std::endl;
};
