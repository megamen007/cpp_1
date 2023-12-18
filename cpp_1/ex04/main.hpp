/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:03:31 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/19 00:39:42 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>

class Filereplacer
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
        std::ofstream outputfile;
        std::ifstream inputfile;
    public:
        Filereplacer();
        Filereplacer(const std::string& filenmae, const std::string s1, const std::string s2);
        std::ifstream& openfile();
        std::ofstream& opennewfile();
        void replaca(size_t position, std::string s1, std::string s2,std::string line);
};
#endif 