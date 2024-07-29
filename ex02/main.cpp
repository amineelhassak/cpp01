/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:14:21 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:14:22 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory address of the string var :" << &str << "\tValue :" << str << std::endl;
    std::cout << "memory address held by stringPTR :" << stringPTR << "\tValue :" << *stringPTR << std::endl;
    std::cout << "memory address held by stringREF :" << &stringREF << "\tValue :" << stringREF << std::endl;
}