/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:25:47 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/30 12:54:02 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";

    // Dirección Memoria
    std::cout << "Memory address of the string variable: " << &str << "\n";
    std::cout << "Memory address held by stringPTR: " << stringPTR << "\n";
    std::cout << "Memory address held by stringREF: " << &stringREF << "\n";

    //Valor:
    std::cout << "Value of the string variable: " << str << "\n";
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n";
    std::cout << "Value pointed to by stringREF: " << stringREF << "\n";

    return (0);
}
