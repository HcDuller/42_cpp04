/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:16:17 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/14 16:31:36 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	virtual ~Dog();
	virtual void makeSound() const;
};
