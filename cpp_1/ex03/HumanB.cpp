/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:57 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/18 21:22:53 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon( Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}
void HumanB::attack()
{   
    if (!weapon->getType().empty())
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << "is unarmed and cannot attack"; 
}