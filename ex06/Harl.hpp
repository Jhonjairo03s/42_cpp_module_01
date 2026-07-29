/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:43:01 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/03 14:03:21 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

enum class  Command
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    OTHER
};

class   Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        Command getCommand(const std::string &input);
    public:
        void    complain(std::string level);
};

#endif
