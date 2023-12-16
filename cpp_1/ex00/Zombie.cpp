/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:44:16 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/16 00:18:49 by mboudrio         ###   ########.fr       */
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
