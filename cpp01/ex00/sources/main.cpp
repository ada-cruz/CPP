/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:40:24 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/16 17:07:59 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Aurora");
	Zombie evilZombie;
	Zombie *walkingdead;

	evilZombie.announce();
	walkingdead = newZombie("quasemorto");
	walkingdead->announce();
	zombie.announce();
	randomChump("Aleatoria");
	delete (walkingdead);
}