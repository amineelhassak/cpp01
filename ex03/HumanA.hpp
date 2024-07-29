/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:14:30 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:14:31 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class  HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name,Weapon &weapon);
        void attack();
};

#endif