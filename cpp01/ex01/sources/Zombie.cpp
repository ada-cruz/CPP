/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:06:12 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/20 15:22:38 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "iza genius";
	std::cout << BLUE << "created zombie " << this->name << ".\n" << RESET;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << BLUE << "Destroed zombie " << this->name << ".\n" << RESET;
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << BLUE << "created zombie " << this->name << ".\n" << RESET;
	return ;
}

void Zombie::announce(void)
{
	std::cout << std::endl << GREEN << this->name << RESET
		<< ":  BraiiiiiiinnnzzzZ...\n";
	return ;
}

void Zombie::setName(std::string name)
{
	this->name = name;
	return;
}