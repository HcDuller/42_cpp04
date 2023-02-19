/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:56:42 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/18 15:41:46 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "LinkedList.hpp"
#include <string>

#ifndef MAX_SLOTS
#define MAX_SLOTS 4
#endif

class Character: public ICharacter{
	private:
		static LinkedList _ground;
		int	_used_slots;
		std::string _name;
		AMateria** _slots;
		static void toss_to_ground(LinkedList& _ground,AMateria *item);
	public:
		Character();
		Character(const Character& origin);
		Character(std::string name);
		virtual ~Character();
		Character& operator=(const Character& origin);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};