/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:18:57 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/28 21:26:01 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *Kakou = newZombie("Kakou");
	Kakou->announce();
	delete Kakou;
	randomChump("Kakou Kakou");
	return (0);
}