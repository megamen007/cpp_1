/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:55 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 18:58:48 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "string"
#include "iostream"
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon weapon;
    
    public:
        HumanA();
        HumanA(Weapon& weapon, std::string& name);
        ~HumanA();
        void Attack();
    
};

#endif 