/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:43 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/19 00:50:34 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Filereplacer::Filereplacer()
{
    
}

Filereplacer::Filereplacer(const std::string& filenmae, const std::string s1, const std::string s2) : filename(filename) , s1(s1), s2(s2) 
{
    
}

std::ifstream& Filereplacer::openfile()
{
    std::ifstream inputfile(filename);
    
    if (!inputfile.is_open())
    {
        std::cerr << "unable to open file" << filename << std::endl;
        exit(2);
    }
    return(inputfile);
}

std::ofstream& Filereplacer::opennewfile()
{
    std::ofstream outputfile(filename + ".replace");
    
    if (!outputfile.is_open())
    {
        std::cerr << "unable to open file" << filename << std::endl;
        exit(2); 
    }
    return(outputfile);
}

void Filereplacer::replaca(size_t position, std::string s1, std::string s2,std::string  line)
{
    while(std::getline(this->inputfile, line , '\0'))
    {
        while(1)
        {
            position = line.find(s1, position);
            if (position != std::string::npos)
            {
                line.erase(position, s1.length());
                line.insert(position, s2);
                position += s2.length();
            }
            else
                break;
        }
        this->outputfile << line << std::endl;
    }
    std::cout << "replacing process is complete" << std::endl;
}

int main(int ac , char **av)
{
    Filereplacer Draft;
    
    int position;
    std::string line;
    
    position = 0;
    if (ac != 4)
    {
        std::cerr << "Check again ur argument please" << std::endl;
        exit(2);
    }
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    // std::ifstream& inputfile = Draft.openfile();
    // std::ofstream& outputfile = Draft.opennewfile();

    Filereplacer(filename, s1, s2);
    Draft.openfile();
    Draft.opennewfile();
    Draft.replaca(position, s1, s2, line);

    return 0;  
}