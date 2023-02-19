/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:18:45 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 00:26:01 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <string>
#include <iostream>


Cure::Cure(): AMateria("cure"){};
AMateria* Cure::clone() const{
	return (new Cure());
};
Cure::~Cure(){
};
void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
};
