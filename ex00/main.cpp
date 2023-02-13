/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:53:32 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/09 20:09:05 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void){
	ClapTrap a;
	ClapTrap b("C3PO");
	ClapTrap c("Ghost of Christmas Past");

	a = c;
	a.attack("C3PO");
	b.attack("C3PO");
	c.attack("C3PO");
	b.takeDamage(0);
	b.takeDamage(1);
	for (int i = 0; i < 15; i++)
	{
		b.beRepaired(i);
		c.attack("C3P0");
	}
	c.attack("Non-existent ClapTrap");
	return (0);
}