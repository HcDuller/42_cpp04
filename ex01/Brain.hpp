/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:13:19 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/19 21:27:12 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain
{
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain& origin);
	Brain& operator=(const Brain& origin);
	~Brain();
};