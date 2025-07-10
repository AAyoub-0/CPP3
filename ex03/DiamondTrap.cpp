/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 02:16:33 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/10 02:25:05 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other.ClapTrap::_name), ScavTrap(other), FragTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy constructor called for " << _name << std::endl;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
void DiamondTrap::takeDamage(unsigned int amount) {
	ClapTrap::takeDamage(amount);
}
void DiamondTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI() const {
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}