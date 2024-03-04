/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:17:29 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/14 17:11:16 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define MAGENTA		"\033[35m"
# define CYAN			"\033[36m"
# define CLEAR_WINDOW	"\033[2J\033[1;1H"

int main(int argc, char **argv)
{
	int i;
	int j;
	if (argc < 2)
	{
		std::cout << RED << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" << RESET;
		return (1);		
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			argv[i][j] =std::toupper(argv[i][j]);
			j++;
		}
		std::cout << GREEN << argv[i] << RESET;
		if (i != argc - 1)
			std::cout << ' ';
		i++;	
	}
	std::cout << std::endl;
	return (0);
}