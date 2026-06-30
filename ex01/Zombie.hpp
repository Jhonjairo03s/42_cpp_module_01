/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 11:10:38 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/30 12:15:14 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif
