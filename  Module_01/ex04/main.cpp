/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:48:00 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 16:52:12 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

typedef std::string string;

void	writeFile(string fileName, string txt)
{
	std::ofstream write_file;

	write_file.open(fileName);
	if (write_file.is_open())
	{
		write_file << txt;
		write_file.close();
	}
}

string readFile(string fileName)
{
	std::ifstream	read_file;
	string 	text;

	read_file.open(fileName);
	if (read_file.is_open())
	{
		read_file.seekg(1, std::ios::end);
		int size = read_file.tellg();
		text.resize(size);
		read_file.seekg(0, std::ios::beg);
		read_file.read(&text[0], size);
   		std::cout << text << "\n";
		read_file.close();
	}
	return (text);
}

string replace(string text, string s1, string s2)
{
	string temp;
	
	temp = "";
	for (int i = 0; i < text.length(); i++)
	{
		if (!text.compare(i, s1.length(), s1))
		{
			temp.append(s2);
			i += s1.length() - 1;
		}
		else
			temp.append(std::string(1, text[i]));
	}
	temp.append(std::string(1, '\0'));
	return (temp.c_str());
}

int main(int argv, char **argc)
{
	

	string text;

	if (argv < 4)
	{
		std::cout << "ERROR\n";
		return (0);
	}
	text = readFile(argc[1]);
	text = replace(text, argc[2], argc[3]);
	writeFile(argc[1], text);
	std::cout << "new: " << text.length() << "\n";
	return (0);
}
