/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:51:15 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/10 14:36:08 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(): name(""), hit_points(10), energy_points(10), attack_damage(0){
	std::cout << "A blank ClapTrap was created (default constructor)." << std::endl;
};
ClapTrap::ClapTrap(std::string const &name): name(name), hit_points(10), energy_points(10), attack_damage(0){
	std::cout << "A ClapTrap named " << name << " was created (string constructor)." << std::endl;
};
ClapTrap::ClapTrap(const ClapTrap &origin){
	std::cout << "A ClapTrap named " << name << " was created (copy constructor)." << std::endl;
	*this = origin;
};
ClapTrap& ClapTrap::operator=(const ClapTrap &origin){
	std::cout << "The ClapTrap " << this->name << " is being assingned the value of " << origin.name << "." << std::endl;
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;
	return (*this);
};
ClapTrap::~ClapTrap(){
	std::cout << "the ClapTrap " << this->name << "is being disassembled" << std::endl;
};
void ClapTrap::takeDamage(unsigned int amount){
	if (this->hit_points < amount)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << this->name << " just took " << amount << " damage, there is " << this->hit_points << " hp left." << std::endl;
};
void ClapTrap::attack(const std::string& target){
	if (this->energy_points == 0)
	{
		std::cout << this->name << " can't attack, there is no energy left in it." << std::endl;
		return;
	}
	std::cout << this->name << " attacks " << target << ", inflicting " << this->attack_damage << " damage." << std::endl;
	this->energy_points--;
};
void ClapTrap::beRepaired(unsigned int amount){
	if (this->energy_points == 0)
	{
		std::cout << this->name << " can't repair itself, there is no energy left in it T.T." << std::endl;
		return;
	}
	this->hit_points += amount;
	this->energy_points --;
	std::cout << this->name << " just repaired itself in " << amount << ", and now has " << this->hit_points << " hp left." << std::endl;
};