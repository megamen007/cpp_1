/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:55 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/18 21:46:17 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    
    public:
        void attack();
        // HumanA();
    HumanA(std::string name, Weapon &wep);
        ~HumanA();
    
};

#endif 