/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:16:01 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 22:21:34 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap1("ClapTrap1");
	ClapTrap claptrap2("ClapTrap2");

	claptrap1.attack("ClapTrap2");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(5);
	
	claptrap2.attack("ClapTrap1");
	claptrap1.takeDamage(0);
	claptrap1.beRepaired(3);

	return 0;
}