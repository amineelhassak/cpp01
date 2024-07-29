/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:15:38 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:15:39 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string arry[5] = {"DEBUG","INFO","WARNING","ERROR","Oops!"};
    Harl harl;
    size_t i = 0;
    for (;i < 4; i++)
        harl.complain(arry[i]);
    harl.complain(arry[i]);
}