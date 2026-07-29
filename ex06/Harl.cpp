/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:43:25 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/03 14:08:41 by jhvalenc         ###   ########.fr       */
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

Command getCommand(const std::string &input)
{
    if (input == "DEBUG")
        return (Command::DEBUG);
    if (input == "INFO")
        return (Command::INFO);
    if (input == "WARNING")
        return (Command::WARNING);
    if (input == "ERROR")
        return (Command::ERROR);
    return (Command::OTHER);
}
