/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:05:41 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/01 16:48:43 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
		std::string _name;
		Weapon *_Weapon;
	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif