/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 10:26:18 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/02 12:06:09 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace(const std::string &str, const std::string &s1, const std::string &s2)
{
    std::string result;
    std::size_t find_pos;
    std::size_t last_pos;

    if (str.empty() == true || s1.empty() == true || s2.empty() == true)
        return ("");
    last_pos = 0;
    result = "";
    while ((find_pos = str.find(s1, last_pos)) != std::string::npos)
    {
        result.append(str, last_pos, find_pos - last_pos);
        result = result + s2;
        last_pos = find_pos + s1.size();
    }
    result = result + str.substr(last_pos);
    return (result);
}

std::string replace_file_out(const std::string &str)
{
    std::string result;
    /*std::string substr;
    std::string file;
    std::size_t pos;

    file = str;
    pos = file.find('.');
    substr = file.substr(0, pos + 1);*/
    result = str;
    result.append(".replace");
    return (result);
}
