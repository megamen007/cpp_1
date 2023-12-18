/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:15:00 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/18 21:46:02 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        void setWeapon( Weapon &newWeapon);
        void attack();
        HumanB();
        HumanB(std::string name);
        ~HumanB();
};


#endif 