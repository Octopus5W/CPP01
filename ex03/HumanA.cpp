/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:02:18 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/29 18:33:29 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
	_name = "HumanA";
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(&weapon){}

HumanA::~HumanA(){};

void HumanA::attack()
{
	if ((*_Weapon).getType() != "")
		std::cout << _name << " attacks with their " << (*_Weapon).getType() << std::endl;
	else
		std::cout << _name << " has no weapon. Then " << _name << " attacks with their hand" << std::endl;
}