/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:47:42 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/16 23:48:36 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &origin);
	AMateria &operator=(AMateria const &origin);
	virtual ~AMateria();
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};