/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:43:24 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/29 16:59:54 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(){};

const std::string Weapon::getType()
{
	return (_type);	
}
void Weapon::setType(std::string type) 
{
	_type = type;
}