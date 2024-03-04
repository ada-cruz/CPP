/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:26:43 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/20 16:00:51 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde;
	std::string			zombieName;
	std::string			numberName;
	int	i;

	i = 0;
	zombieHorde = new Zombie[N];
	while (i < N)
	{
		std::stringstream	number;
		number << i;
		numberName = number.str();
		zombieName = numberName + '-' + name;
		zombieHorde[i].setName(zombieName);
		i++;
	}
	return (zombieHorde);
}