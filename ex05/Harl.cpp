/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:45:15 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/03 13:05:16 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout 
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
        << "ketchup burger. I really do!"
        << "\n";
}

void    Harl::info(void)
{
    std::cout
        << "I cannot believe adding extra bacon costs more money. You didn’t "
        << "putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
        << "\n";
}

void    Harl::warning(void)
{
    std::cout
        << "I think I deserve to have some extra bacon for free. I’ve been coming "
        << "for years, whereas you started working here just last month."
        << "\n";
}

void    Harl::error(void)
{
    std::cout
        << "This is unacceptable! I want to speak to the manager now."
        << "\n";
}

void    Harl::complain(std::string level)
{
    std::string _levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         index;

    void    (Harl::*levels [4])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
    };
    index = 0;
    while (index < 4)
    {
        if (_levels[index] == level)
        {
            (this->*levels[index])();
            return ;
        }
        index++;
    }
    std::cerr
        << "Level not selected. The levels are: DEBUG, INFO, WARNING, ERROR"
        << "\n";
}
