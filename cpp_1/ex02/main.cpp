/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:09:27 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 17:12:56 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

int main ()
{
    std::string str;
    str = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Pointer Address: " << stringPTR << std::endl;
    std::cout << "Refrence Address: " << &stringREF << std :: endl;

    std::cout << "Pointer Value:" << *stringPTR << std::endl;
    std::cout << "Refrence Value:" << stringREF << std::endl;

    return 0;    
}