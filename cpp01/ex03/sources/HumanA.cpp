/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:29:19 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/26 16:44:17 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp" 
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << GREEN << "Created HumanA : " << this->name << ".\n" << RESET;
	return;
};

HumanA::HumanA(void)
{
	this->name = "lulu";
	std::cout << BLUE << "Created HumanA " << this->name << ".\n" << RESET;
	return ;	
};

HumanA::~HumanA(void)
{
	std::cout << BLUE << "Destroed HumanA " << this->name << ".\n" << RESET;
	return ;
};

void HumanA::attack(void)
{
	std::cout << std::endl << GREEN << this->name << RESET << " attacks with their " << GREEN << this->weapon->getType() << ".\n" << RESET;
};
