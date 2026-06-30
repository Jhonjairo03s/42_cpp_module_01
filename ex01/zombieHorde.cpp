/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 11:15:41 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/30 12:16:55 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zombie_heap;
    int     index;

    zombie_heap = new Zombie[N];
    index = 0;
    while (index < N)
    {
        zombie_heap[index].set_name(name);
        index++;
    }
    return (zombie_heap);
}
