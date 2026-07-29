/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 23:18:30 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/07/03 10:46:28 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * open() espera un "const char *", por lo tanto, convierto el objeto file_replace
 * en un "const char *"
*/
#include "Replace.hpp"

int main(int argc, char **argv)
{
    std::ifstream   file;
    std::ofstream   file_out;
    std::string     file_replace;
    std::string     text_ifs;
    std::string     text_ofs;

    if (argc != 4)
    {
        std::cerr << "Error: usage - <filename> <s1> <s2>" << "\n";
        return (1);
    }
    file.open(argv[1], std::fstream::in);
    if (!file)
    {
        std::cerr << "Error opening the file" << "\n";
        return (1);
    }
    //std::getline(file, text_ifs);
    //text_ofs = replace(text_ifs, argv[2], argv[3]);
    /*if (text_ofs.empty() == true)
    {
        std::cerr << "Error replace funtion" << "\n";
        return (1);
    }*/
    file_replace = replace_file_out(argv[1]);
    file_out.open(file_replace.c_str(), std::ios::out);
    if (!file_out)
    {
        std::cerr << "Error opening the file" << "\n";
        return (1);
    }
    while (std::getline(file, text_ifs))
    {
        text_ofs = replace(text_ifs, argv[2], argv[3]);
        file_out << text_ofs;
        if (!file.eof())
            file_out << "\n";
    }
    file.close();
    file_out.close();
    return (0);
}
