/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:14:25 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:14:26 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &weapon): name(name), weapon(weapon){}

void HumanA::attack()
{
    std::cout<< this->name << " attacks with their ";
    std::cout << this->weapon.getType() <<std::endl;
}