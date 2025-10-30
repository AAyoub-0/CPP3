/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:16:01 by aboumall          #+#    #+#             */
/*   Updated: 2025/10/30 17:38:36 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ClapTrap claptrap("CLTP");
	claptrap.attack("target1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	claptrap.setAttackDamage(5);
	claptrap.attack("target2");

	ScavTrap scavtrap("SCVT");
	scavtrap.attack("target3");
	scavtrap.guardGate();
	scavtrap.takeDamage(2);
	scavtrap.beRepaired(3);
	scavtrap.attack("target4");

	return 0;
}