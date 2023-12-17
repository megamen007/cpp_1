/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:44:02 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 16:51:04 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string zname;
    
    std::cout << "zombie will be created on the stack\n" << std::endl;
    std::cout << "Enter ur Zombie Name" << std:: endl;
    std::cin >> zname;

    Zombie first_zombie();
    
    std::cout << "zombie will be created on the heap\n" << std::endl;
    std::cout << "Enter ur Zombie Name" << std:: endl;
    std::cin >> zname;
    Zombie *second_zombie = newZombie(zname);
    second_zombie->announce();
    delete second_zombie;
    
    std::cout << "randomChump randomChump \n" << std::endl;
    randomChump("zomboso");
}