/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:50:51 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/29 18:33:19 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomChump.hpp"

/* Se declara la variable usando el tipo de la clase */
void    randomChump(std::string name)
{
    Zombie  my_zombie(name);
    my_zombie.announce();
}
