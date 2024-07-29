/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:13:33 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:13:34 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_HPP
#define  ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:

        void announce( void );
        Zombie(std::string name);
        ~Zombie();
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif