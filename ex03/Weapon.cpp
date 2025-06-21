/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:43:24 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/21 18:01:52 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type(""){};

Weapon::Weapon(std::string type) : _type(type){}

Weapon::Weapon(const char* type) {
	if (type == NULL)
		_type = std::string("");
	else
		_type = std::string(type);
}


Weapon::~Weapon(){};

const std::string Weapon::getType()
{
	return (_type);
}
void Weapon::setType(std::string type) 
{
	this->_type = type;
}