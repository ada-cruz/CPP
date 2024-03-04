/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:47:27 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/28 12:56:41 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << YELLOW <<
			"Usage: ./sedIsForLosers <filename> <s1> <s2>\n" << RESET;
		return (1);
	}
	SedIsForLosers	sedIsForLosers(argv);
	sedIsForLosers.replaceString();
	return (0);	
}