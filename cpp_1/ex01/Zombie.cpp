/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:55:30 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 16:49:48 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}
void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}    

Zombie::~Zombie()
{
    
}

void Zombie::set_name(std::string zname)
{
    name = zname;
}

