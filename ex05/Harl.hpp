/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:40:37 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/02 12:45:03 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class   Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        void    complain(std::string level);
};

#endif
