/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:55:33 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/18 21:45:16 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
#define Zombie_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std::string zname);
};

Zombie* zombieHorde(int N, std::string name);

#endif

