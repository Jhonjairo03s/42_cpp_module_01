/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:40:43 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/01 12:55:23 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class   Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        // setter
        void    setType(const std::string &type);
        // getter
        const std::string &getType(void) const;
};

#endif
