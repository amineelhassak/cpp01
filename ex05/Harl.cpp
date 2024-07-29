/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:15:30 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:15:31 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

int get_level_idx(std::string level)
{
    int i = 0;
    std::string arry[] = {"DEBUG","INFO","WARNING","ERROR"};
    for(; i<4; i++)
        if (level == arry[i])
            return (i);
    return (i);
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain( std::string level)
{
    void    (Harl::*arry[4])(void) = {&Harl::debug, &Harl::info,&Harl::warning,&Harl::error};
    int index = get_level_idx(level);
    if (index < 4)
        (this->*arry[index])();
    else
        std::cout << level << " is invalid\n";
}