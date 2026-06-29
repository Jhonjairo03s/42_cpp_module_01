/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:50:21 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/29 18:35:34 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie_heap;

    zombie_heap = new Zombie(name);
    return (zombie_heap);
}
