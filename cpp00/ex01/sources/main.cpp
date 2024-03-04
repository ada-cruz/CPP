/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:00:08 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/14 17:06:41 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	
	std::cout << YELLOW <<
			"\n--------------------------\n"
			"Welcome to your PhoneBook!\n"
			"--------------------------\n\n" << RESET;
	while(true)
	{
		std::cout << MAGENTA <<
			"Commands: ADD, SEARCH and EXIT\n\n" << CYAN <<
			"ADD: Save a new contact.\n"
			"SEARCH: Display a specific contact.\n"
			"EXIT: The program quits and the contacts are lost forever!\n"
			<< RESET;
		std::cout << YELLOW << "\nPlease, enter with a command: " << RESET;
		std::getline (std::cin, command);
		if(command == "ADD")
			phonebook.add();
		else if(command == "SEARCH")
			phonebook.search();
		else if(command == "EXIT")
		{
			std::cout << CLEAR_WINDOW << RED <<
			"\n--------------------------------------\n"
			"Your phone book has been lost forever!\n"
	 		"--------------------------------------\n\n" << RESET;
			return (0);
		}
		else
			std::cout << CLEAR_WINDOW << RED <<
				"\nInvalid command. Try again.\n\n" << RESET;
	}
	return (0);
}