/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:29:59 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/12 15:57:51 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{	
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunction functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	for (i; i < 4 && levels[i] != level; i++);
	if (i == 4)
	{
		std::cout << "Harl does not know how to complain about: " << level << std::endl;
		return;
	}
	(this->*functions[i])();
}
