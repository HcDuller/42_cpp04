/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaNode.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:30:59 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/18 13:59:36 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "AMateriaNode.hpp"

AMateriaNode::AMateriaNode(): content(NULL),prev(NULL), next(NULL){};
AMateriaNode::AMateriaNode(AMateria * item): content(item), prev(NULL),next(NULL){};
AMateriaNode::AMateriaNode(const AMateriaNode& origin){
	*this = origin;
};
AMateriaNode& AMateriaNode::operator=(const AMateriaNode& origin){
	this->prev = origin.prev;
	this->content = origin.content;
	this->next = origin.next;
	return (*this);
};
AMateriaNode::~AMateriaNode(){
	if (this->content != NULL)
		delete this->content;
};
