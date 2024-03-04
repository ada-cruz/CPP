/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cruz <ada-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:25:25 by ada-cruz          #+#    #+#             */
/*   Updated: 2024/02/20 15:44:04 by ada-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		i = 0;
	int		n = 5;
	Zombie	*Horde;

	Horde = zombieHorde(n, "Aurora");
	while (i < n)
	{
		Horde[i].announce();
		i++;
	}
	delete[] Horde;
	return (0);
}