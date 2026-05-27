/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:24:25 by wshou-xi          #+#    #+#             */
/*   Updated: 2026/05/27 13:41:15 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *zombie_list = new Zombie[N];
	for (int i=0; i<N; i++)
		zombie_list[i].set_name("Jason");
	std::cout << N << " zombie created" << std::endl;
	return zombie_list;
}
