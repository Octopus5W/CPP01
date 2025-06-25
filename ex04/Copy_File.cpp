/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy_File.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:37:25 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/01 20:43:52 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Copy_File.hpp"

Copy_File::Copy_File(char *file, std::string to_replace, std::string the_replace)
{
	std::string output_file_name(file);
	output_file_name += ".replace";

	std::ifstream in_file(file);
	std::ofstream output(output_file_name);

	if (in_file.fail())
	{
		std::cerr << "Error: open in_file" << std::endl;
		return;
	}
	else if (output.fail())
	{
		std::cerr << "Error: create outfile" << std::endl;
		return;
	}
	else
	{
		int cursor = 0;
		int lenght_to_replace = to_replace.length();
		int lenght_the_replace = the_replace.length();
		int line_lenght;

		std::string next_line;
		getline(in_file, next_line);

		std::string line = next_line;
		if (!in_file.eof())
				line += "\n";
		while (!line.empty())
		{
			line_lenght = line.length();
			if (line.at(cursor) == to_replace.at(cursor))
			{
				for (cursor; cursor < line_lenght - 1 && cursor < lenght_to_replace - 1 && line.at(cursor) == to_replace.at(cursor) ; cursor++);
				if (cursor == lenght_to_replace - 1)
				{
					output << the_replace;
					line.erase(0, lenght_to_replace);
					cursor = 0;
				}
			}
			else if (line.at(cursor) != to_replace.at(cursor))
			{
				for (cursor; cursor < line_lenght && line.at(cursor) != to_replace.at(0) ; cursor++);
				output << line.substr(0, cursor);
				line.erase(0, cursor);
				cursor = 0;
			}
			if (!in_file.eof())
			{
				getline(in_file, next_line);
				line += next_line;
				if (!in_file.eof())
					line += "\n";
			}
			
		}

	}
};

Copy_File::~Copy_File() {};
