#ifndef Copy_File_HPP
#define Copy_File_HPP

#include <iostream>
#include <fstream>

class Copy_File{
	private:
	
	public:
	Copy_File(char *file, std::string to_replace, std::string the_replace);
	~Copy_File();
	
};
#endif