/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:56:09 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/28 12:56:44 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers(char **argv)
{
	std::string	output(argv[1]);
	
	this->s1 = argv[2];
	this->s2 = argv[3];
	this->inputFile.open(argv[1]);
	if (!this->inputFile.is_open())
	{
		std::cout << RED
			<< "It's not possible open the input file: " << argv[1] << std::endl << RESET;
		exit (1);
	}
	output += ".replace";
	char		*outputFilename = &output[0];
	this->outputFile.open(outputFilename);
	if (!outputFile.is_open())
	{
		std::cout << RED << "It's not possible open the input file: " << outputFilename << std::endl << RESET;
			this->inputFile.close();
			exit (1);
	}
	std::cout << BLUE << "Created SedIsForLosers.\n" << RESET;
}

SedIsForLosers::~SedIsForLosers(void)
{
	this->inputFile.close();
	this->outputFile.close();
	std::cout << BLUE << "Destroed SedIsForLosers.\n" << RESET;
}

void	SedIsForLosers::replaceString(void)
{
	std::string	line;
	size_t	position;
	while (std::getline(this->inputFile, line))
	{
		if (strcmp(this->s1, this->s2) != 0)
		{
			position = line.find(this->s1);
			while (position != std::string::npos)
			{
				line.insert(position, this->s2);
				line.erase(position + std::strlen(this->s2), std::strlen(this->s1));
				position = line.find(this->s1);
			}
		}
		outputFile << line;
		outputFile << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return;
}