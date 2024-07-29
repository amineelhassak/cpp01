/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:13:16 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:13:17 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
    Zombie* heapZombie = newZombie("heapZombie");
    heapZombie->announce();
    delete (heapZombie);

    randomChump("stackZombie");


    return 0;
}