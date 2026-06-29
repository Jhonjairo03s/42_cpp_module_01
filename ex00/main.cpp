/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:50:04 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/29 18:55:26 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.hpp"
#include "randomChump.hpp"

int main(void)
{
    Zombie  *z;

    randomChump("stack zombie");
    z = newZombie("heap zombie");
    z->announce();
    delete z;
    z = NULL;
    return (0);
}
