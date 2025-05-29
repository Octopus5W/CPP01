/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:18:57 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/29 16:13:20 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &adr = brain;
	
	std::cout << &brain << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &adr << std::endl;
	
	std::cout << brain << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << adr << std::endl;
	return (0);
}