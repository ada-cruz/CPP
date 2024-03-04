/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:32:42 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/26 16:44:40 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << BLUE << "Created HumanB : " << this->name << ".\n" << RESET;
	return;
};

HumanB::HumanB(void)
{
	this->name = "Janna";
	std::cout << BLUE << "Created HumanB : " << this->name << ".\n" << RESET;
	return;
};

HumanB::~HumanB(void)
{
	std::cout << BLUE << "Destroed HumanB " << this->name << ".\n" << RESET;
	return ;
};

void HumanB::attack(void)
{
	if (this->weaponB == NULL)
	{
		std::cout << std::endl << BLUE << this->name << RESET << " attacks without a weapon.\n";
		return;
	}
	std::cout << std::endl << GREEN << this->name << RESET << " attacks with their " << GREEN << this->weaponB->getType() << ".\n" << RESET;
};

void HumanB::setWeapon(Weapon &weaponB)
{
	this->weaponB = &weaponB;
	return;
};