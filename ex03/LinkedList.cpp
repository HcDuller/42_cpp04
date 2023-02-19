/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:41:25 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/18 14:07:43 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"
#include "AMateria.hpp"
#include "AMateriaNode.hpp"

LinkedList::LinkedList():head(NULL){};

LinkedList::LinkedList(const LinkedList& origin){
	*this = origin;
};
LinkedList& LinkedList::operator=(const LinkedList& origin){
	this->head = origin.head;
	return (*this);
};
LinkedList::~LinkedList(){
	while (this->head != NULL)
	{
		this->eraseLast();
	}
};
AMateriaNode* LinkedList::getLastNode(){
	AMateriaNode* last = this->head;
	if (last == NULL)
		return NULL;
	while (last->next != NULL)
		last = last->next;
	return last;
};
void LinkedList::addMateria(AMateria *item){
	AMateriaNode* newNode = new AMateriaNode(item);
	AMateriaNode* lastNode;
	if (this->head != NULL){
		lastNode = this->getLastNode();
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	else
		this->head = newNode;
};
void LinkedList::eraseLast(){
	AMateriaNode* lastNode = this->getLastNode();
	AMateriaNode* retNode;
	if (lastNode->prev)
	{
		retNode = lastNode->prev;
		retNode->next = NULL;
		delete lastNode;
		return;
	}
	delete lastNode;
	this->head = NULL;
};