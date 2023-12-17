/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:55:28 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/17 16:57:32 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string zname;
    
    int Hordesize;
    Hordesize = 999;
    zname = "lmellali";
    
    Zombie *zombiearray = zombieHorde(Hordesize, zname);
    int i;
    i = 0;
    while(i < Hordesize)
    {
        zombiearray[i].announce();
        i++;
    }
    delete[] zombiearray;

    return 0;
}
