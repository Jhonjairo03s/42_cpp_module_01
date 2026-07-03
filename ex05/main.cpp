/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:11:33 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/03 13:18:45 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl        harl;
    std::string level;
    /*int         index;

    index = 0;
    while (index < 4)
    {
        std::cout << "Enter level: ";
        std::getline(std::cin, level);
        harl.complain(level);
    }*/
    while (1)
    {
        std::cout << "Enter level: ";
        std::getline(std::cin, level);
        if (std::cin.eof() == true)
        {
            std::cout << std::endl;
            break ;
        }
        harl.complain(level);
    }
    return (0);
}
