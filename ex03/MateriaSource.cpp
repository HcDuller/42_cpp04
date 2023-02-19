/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:53:26 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 00:26:40 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <string>
#include <iostream>


MateriaSource::MateriaSource(): _know(),_slots_used(0){
};
MateriaSource::MateriaSource(const MateriaSource& origin){
	*this = origin;
};
MateriaSource& MateriaSource::operator=(const MateriaSource& origin){
	for(int i = 0; i < origin._slots_used; i++){
		this->_know[i] = origin._know[i]->clone();
	}
	this->_slots_used = origin._slots_used;
	return (*this);
};
MateriaSource::~MateriaSource(){
	for(int i = 0; i < this->_slots_used; i++)
		delete this->_know[i];
};
void MateriaSource::learnMateria(AMateria *origin){
	if (this->_slots_used >= MAX_SLOTS)
	{
		if (origin != NULL)
			delete origin;
		return;
	}
	this->_know[this->_slots_used] = origin;
	this->_slots_used += 1;
};
AMateria* MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < this->_slots_used; i++)
	{
		if (this->_know[i]->getType() == type)
			return (this->_know[i]->clone());
	}
	return (0);
};