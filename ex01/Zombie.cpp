/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:54:38 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/28 22:21:24 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Zombie";
}

Zombie::Zombie(std::string name) : _name(name) {}
Zombie::~Zombie()
{
	std::cout << _name << " is dead." << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BiaiiiiinzzzZ...." << std::endl;
}

void Zombie::set_name(std::string name)
{
	_name = name;
}
