/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:14:37 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/16 05:52:37 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl luffy;
    luffy.complain("DEBUG");
    luffy.complain("INFO");
    luffy.complain("WARNING");
    luffy.complain("ERROR");
    return(0);
}