/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:36:56 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/17 15:05:15 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

#ifndef MAX_SLOTS
#define MAX_SLOTS 4
#endif

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _know[MAX_SLOTS];
	int	_slots_used;
public:
	MateriaSource();
	MateriaSource(const MateriaSource& origin);
	MateriaSource& operator=(const MateriaSource& origin);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria *);;
	virtual AMateria *createMateria(std::string const &type);
};