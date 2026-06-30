/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 11:39:59 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/30 12:19:39 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *z;
    int     N;
    int     index;

    N = 5;
    z = zombieHorde(N, "zombie heap");
    index = 0;
    while (index < N)
    {
        z->announce();
        index++;
    }
    delete[] z;
    z = NULL;
    return (0);
}
