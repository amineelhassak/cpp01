/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:15:55 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/22 18:35:33 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::harlFilter(std::string str)
{
    int index = get_level_idx(str);
    Harl harl;
    switch (index)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break ;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        harl .harlFilter(argv[1]);
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    return (0);
}