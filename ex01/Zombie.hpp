/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:13:48 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:13:49 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_HPP
#define  ZOMBIE_HPP

#include <iostream>
#include<string>


class Zombie
{
    private:
        std::string name;
    public:
        void setName(std::string name);
        void announce( void );
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
#endif