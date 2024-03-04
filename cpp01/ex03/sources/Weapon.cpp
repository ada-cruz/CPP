/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:26:35 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/26 16:40:30 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type  = "default weapon";
	std::cout << GREEN << "Created " << this->type << ".\n" << RESET;
	return;
};

Weapon::Weapon(std::string weapontype)
{
	this->type = weapontype;
	std::cout << GREEN << "Created " << this->type << ".\n" << RESET;
	return;
};

Weapon::~Weapon(void)
{
	std::cout << GREEN << "Destroed " << this->type << ".\n" << RESET;
	return;
};

const std::string &Weapon::getType(void)
{
	return(this->type);
};

void Weapon::setType(std::string weaponType)
{
	this->type = weaponType;
	return;
};