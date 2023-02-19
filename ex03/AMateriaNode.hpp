/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaNode.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:30:59 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/18 12:50:49 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class AMateriaNode
{
public:
	AMateria* content;
	AMateriaNode* prev;
	AMateriaNode* next;
	AMateriaNode();
	AMateriaNode(AMateria * item);
	AMateriaNode(const AMateriaNode& origin);
	AMateriaNode& operator=(const AMateriaNode& origin);
	~AMateriaNode();
};