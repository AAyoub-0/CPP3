/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:16:01 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/10 02:22:25 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamondTrap("Diamond");

	diamondTrap.attack("target");
	diamondTrap.takeDamage(30);
	diamondTrap.beRepaired(20);
	diamondTrap.whoAmI();

	DiamondTrap copyDiamondTrap(diamondTrap);
	copyDiamondTrap.whoAmI();

	ClapTrap *clapPtr = &diamondTrap;
	clapPtr->attack("another target");

	return 0;
}