/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:18:57 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/05 05:31:07 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Copy_File.hpp"

int	main(int ac, char* av[])
{
	if (ac != 4)
		std::cout << "Error: input\nExemple:\n./Sed is for losers filename \"string1\" \"string2\"" << std::endl;
	else
		Copy_File(av[1], av[2], av[3]);
	return (0);
}