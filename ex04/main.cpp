/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:15:25 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:15:26 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        size_t pos;
        std::string str;
        std::string line;
        std::string s;
        std::string concat;
        std::string str1 = argv[2];
        int len;

        len = str1.length();
        std::ifstream File(argv[1]);
        if (!File)
        {
            return (std::cerr << "Error opening input file" << std::endl, 1);
        }
        concat = argv[1];
        s = ".replace";
        concat = argv[1] + s;
        std::ofstream newFile(concat);
        if (!newFile)
        {
            File.close();
            std::cerr << "Error opening output file" << std::endl;
            return 1;
        }
        while (std::getline(File, line))
        {
            str += line;
            if (!File.eof())
                str += '\n';
        }

        while (std::string(argv[2]) != std::string(argv[3]) && argv[2][0] && ((pos = str.find(argv[2])) != std::string::npos))
        {      
            str.erase(pos, len);
            str.insert(pos, argv[3]);
        }
        newFile << str;

        File.close();
        newFile.close();
    }
    else
    {
        std::cerr << "Usage: " << argv[0] << " <input_file> <string1> <string2>" << std::endl;
        return (1);
    }
    return 0;
}