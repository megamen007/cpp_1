/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:52 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/18 21:19:46 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA()
// {
//     weapon = Weapon();
//     name = ""; 
// }

HumanA::HumanA(std::string name, Weapon &wep) :name(name), weapon(wep) {
}
HumanA::~HumanA()
{
    
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
