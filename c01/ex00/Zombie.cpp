/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:22:52 by wshou-xi          #+#    #+#             */
/*   Updated: 2026/06/03 16:44:45 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string _name)
{
	name = _name;
}

Zombie::~Zombie(){
	sout << "Zombie: " << name << " destroyed\n";
}

void Zombie::announce(void) const {
	sout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(string str) {
	name = str;
}
