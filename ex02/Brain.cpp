/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:00:01 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 15:49:36 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(){
	std::cout << "🧠 Default constructor called." << std::endl;
};
Brain::Brain(const Brain& origin){
	std::cout << "🧠 Copy constructor called." << std::endl;
	*this = origin;
};
Brain& Brain::operator=(const Brain& origin){
	std::cout << "🧠 Copy assingment operator called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = origin.ideas[i];
	}
	return (*this);
};
Brain::~Brain(){
	std::cout << "🧠💀 Default constructor called." << std::endl;
};