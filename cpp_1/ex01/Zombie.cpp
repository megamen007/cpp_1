/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:55:30 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/16 21:00:39 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name)
{
    name = zombie_name;
}
void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}    

Zombie::~Zombie()
{
    std::cout << name << "destroyed!";
}

void randomChump(std::string name)
{
    Zombie Zombie(name);
    Zombie.announce();
}

Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    return zombie;
}

