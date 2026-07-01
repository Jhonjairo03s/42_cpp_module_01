/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:39:33 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/01 19:32:18 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}
