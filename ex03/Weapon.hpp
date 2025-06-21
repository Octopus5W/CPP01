/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:43:45 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/21 18:01:36 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon {
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string type);
		Weapon(const char* type);
		~Weapon();
	const std::string getType();
	void setType(std::string type);
};

#endif