/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:11:21 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/25 15:25:27 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	_name = "HumanB";
}

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB(){}

void HumanB::attack()
{
	if (!this->_Weapon || this->_Weapon->getType().empty())
	{
		std::cout << _name << " has no weapon." << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with their " << this->_Weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}