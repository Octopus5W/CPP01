/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:54:38 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/28 21:25:57 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << _name << " is dead." << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BiaiiiiinzzzZ...." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name){};
