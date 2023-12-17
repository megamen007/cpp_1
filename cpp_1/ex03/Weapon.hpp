/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:15:10 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 17:41:20 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "string"
#include "iostream"


class Weapon
{
    private:
        std::string type;
        
    public:
        void setType(std::string type);
        std::string getType();
        
};
#endif 