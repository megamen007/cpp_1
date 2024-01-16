/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 05:21:57 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/16 05:26:34 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	filereplacer(std::string &filename, std::string &s1, std::string &s2)
{
	std::ifstream input(filename.c_str());
	if (!input.is_open())
	{
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(2);
    }
	std::ofstream output((filename + ".replace").c_str());
	if (!output.is_open())
	{
        std::cerr << "Error can't create : " << filename + ".replace" << std::endl;
		input.close();
        exit(2);
    }
	std::string line;
	size_t		position = 0;
	while (std::getline(input, line, '\0'))
	{
		while (1)
		{
			position = line.find(s1, position);
			if (position != std::string::npos)
			{
				line.erase(position,s1.length());
				line.insert(position, s2);
				position += s2.length();
			}
			else
				break;
		}
        output << line << std::endl;
    }
}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string file = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (s1.empty() || s2.empty())
        {
			std::cerr << "empty inputs" << std::endl;
			exit(2);
		}
		filereplacer(file, s1, s2);
	}
	else
		std::cout << "incorrect input number" << std::endl ;
	return 0;
}