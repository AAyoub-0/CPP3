/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:16:01 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/10 01:54:06 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap clapTrap("Clappy");
	FragTrap fragTrap("Fraggy");
	ScavTrap scavTrap("Scavvy");

	clapTrap.attack("Scavvy");
	fragTrap.attack("Clappy");
	scavTrap.attack("Fraggy");

	clapTrap.takeDamage(10);
	fragTrap.takeDamage(20);
	scavTrap.takeDamage(30);

	clapTrap.beRepaired(5);
	fragTrap.beRepaired(15);
	scavTrap.beRepaired(10);

	fragTrap.highFivesGuys();
	scavTrap.guardGate();

	fragTrap.attack("Clappy");
	scavTrap.attack("Clappy");

	return 0;
}