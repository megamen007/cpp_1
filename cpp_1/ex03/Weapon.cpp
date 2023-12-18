/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:15:07 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/18 23:52:48 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "";
}

Weapon::Weapon(const std::string newtype)
{
   this->type = newtype;
}


void Weapon::setType(std::string w_type)
{
    type =  w_type;
}

Weapon::~Weapon()
{
    
}

const std::string Weapon::getType()
{
    return type;
}