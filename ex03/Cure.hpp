/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:32:10 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/17 17:09:46 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria{
public:
	Cure();
	virtual ~Cure();
	using AMateria::getType;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};