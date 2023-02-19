/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:16:54 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/17 15:26:32 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <string>

#ifndef MAX_SLOTS
#define MAX_SLOTS 4
#endif

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};