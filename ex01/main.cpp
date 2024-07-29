/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:13:41 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:13:42 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define  N 2

int main()
{
    Zombie *zom= zombieHorde(N, "Zom.");
    for(int i = 0 ;i < N; i++)
        zom[i].announce();
    delete[] zom;
    return (0);
}