/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:16:17 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/15 14:13:11 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	void populateIdeas();
public:
	Cat();
	Cat(const Cat& origin);
	Cat& operator=(const Cat& origin);
	virtual ~Cat();
	virtual void makeSound() const;
	Brain* brain;
};
