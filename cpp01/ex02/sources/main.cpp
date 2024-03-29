/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:14:15 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/20 17:30:55 by ada-cruz         ###   ########.fr       */
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

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << GREEN << "The memory address of the string variable." << RESET << &string << std::endl;
	std::cout << BLUE << "The memory address held by stringPTR." << RESET << stringPTR << std::endl;
	std::cout << MAGENTA << "The memory address held by stringREF." << RESET << &stringREF << std::endl;
	
	std::cout << GREEN << "The value of the string variable." << RESET << string << std::endl;
	std::cout << BLUE << "The value pointed to by stringPTR." << RESET << *stringPTR << std::endl;
	std::cout << MAGENTA << "The value pointed to by stringREF." << RESET << stringREF << std::endl;
}