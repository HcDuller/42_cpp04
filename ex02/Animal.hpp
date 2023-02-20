/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:08:25 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 23:14:20 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& origin);
	Animal& operator=(const Animal &origin);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	const std::string& getType(void) const;
};