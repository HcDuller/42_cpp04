/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:18:45 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 00:26:07 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <string>
#include <iostream>


Ice::Ice(): AMateria("ice"){};
AMateria* Ice::clone() const{
	return (new Ice());
};
Ice::~Ice(){
};
void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
};

