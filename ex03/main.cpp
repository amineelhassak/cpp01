/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:15:11 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:15:12 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon ("crude spiked club");
        HumanA bob ("Bob", club);
        bob.attack ();
        club.setType ("some other type of club");
        bob.attack ();
    }
    {
        Weapon club = Weapon ("crude spiked club");
        HumanB jim ("Jim");
        jim.setWeapon (club);
        jim.attack();
        club.setType ("some other type of club");
        jim.attack ();
    }
    return 0;
}