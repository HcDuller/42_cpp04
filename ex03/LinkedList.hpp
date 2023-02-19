/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:39:19 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/18 14:07:24 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "AMateriaNode.hpp"


class LinkedList
{
private:
	AMateriaNode* head;
	AMateriaNode* getLastNode();
public:
	LinkedList();
	LinkedList(const LinkedList& origin);
	LinkedList& operator=(const LinkedList& origin);
	~LinkedList();
	void addMateria(AMateria *item);
	void eraseLast();
};