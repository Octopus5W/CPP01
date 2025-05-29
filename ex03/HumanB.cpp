/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:11:21 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/29 18:27:20 by hdelbecq         ###   ########.fr       */
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
	if ((*_Weapon).getType() != "")
		std::cout << _name << " attacks with their " << (*_Weapon).getType() << std::endl;
	else
		std::cout << _name << " has no weapon. Then " << _name << " attacks with their hand" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	*_Weapon = weapon;
}