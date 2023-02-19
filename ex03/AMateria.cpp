/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:44:03 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/17 17:29:07 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const& type): _type(type){};
std::string const& AMateria::getType() const{
	return (this->_type);
};
AMateria::~AMateria(){};
AMateria::AMateria():_type(""){};
AMateria::AMateria(AMateria const& origin){
	*this = origin;
};
AMateria& AMateria::operator=(AMateria const& origin){
	this->_type = origin._type;
	return (*this);
};
void AMateria::use(ICharacter &target){
	(void)target;
};
