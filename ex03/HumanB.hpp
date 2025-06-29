/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:12:24 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/25 15:18:27 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
	private:
		std::string _name;
		Weapon *_Weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif