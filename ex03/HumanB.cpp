/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:40:10 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/01 19:01:31 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (this->weapon != NULL)
        std::cout << this->_name << " attacks with their " << weapon->getType() << "\n";
    else
        std::cout << this->_name << " has no weapon to attack with!" << "\n";
}
