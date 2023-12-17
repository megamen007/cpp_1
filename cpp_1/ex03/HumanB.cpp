/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:57 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 18:56:56 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::Attack()
{   
    if (!weapon.getType().empty())
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    else
        std::cout << name << "is unarmed and cannot attack"; 
}