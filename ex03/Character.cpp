/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:58:28 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 18:28:22 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "LinkedList.hpp"
#include <string>
#include <iostream>

LinkedList Character::_ground = LinkedList();
Character::Character(): _used_slots(0), _name(""){
	this->_slots = new AMateria*[MAX_SLOTS];
	for (int i = 0; i < MAX_SLOTS; i++)
		this->_slots[i] = NULL;
};
Character::Character(std::string name): _used_slots(0), _name(name){
	this->_slots = new AMateria*[MAX_SLOTS];
	for (int i = 0; i < MAX_SLOTS; i++)
		this->_slots[i] = NULL;
};
Character::~Character(){
	while (this->_used_slots > 0){
		delete this->_slots[this->_used_slots - 1];
		this->_used_slots -= 1;
	}
	delete[] this->_slots;
};
Character::Character(const Character& origin){
	*this = origin;
}
Character& Character::operator=(const Character& origin){
	this->_name = origin._name;
	this->_used_slots = 0;
	for (int i = origin._used_slots - 1; i >= 0; i--){
		this->_slots[i] = origin._slots[i]; //should this be replaced by CLONE?!
		this->_used_slots++;
	}
	return (*this);
};
std::string const& Character::getName() const{
	return (this->_name);
};
void Character::equip(AMateria* m){
	if (this->_used_slots >= MAX_SLOTS)
	{
		if (m)
			delete m;
		return;
	}
	if (!m)
		return;
	this->_slots[this->_used_slots] = m;
	this->_used_slots++;
};
void Character::unequip(int idx){
	if(idx >= this->_used_slots)
		return;
	if (this->_slots[this->_used_slots - 1] != NULL)
	{
		Character::toss_to_ground(this->_ground, this->_slots[this->_used_slots - 1]);
		this->_slots[this->_used_slots - 1] = NULL;
		this->_used_slots--;
	}
};
void Character::use(int idx, ICharacter& target){
	if(idx >= this->_used_slots || idx < 0)
		return;
	this->_slots[idx]->use(target);
};
void Character::toss_to_ground(LinkedList& _ground,AMateria *item){
	_ground.addMateria(item);
};
