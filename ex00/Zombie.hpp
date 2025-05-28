/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:54:45 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/28 21:08:00 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif