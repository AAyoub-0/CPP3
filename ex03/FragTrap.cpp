/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 01:45:37 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/10 03:57:28 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default_fragtrap", 100, 100, 30) {
	std::cout << "Default FragTrap created." << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << _name << " created." << std::endl;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap " << _name << " copied." << std::endl;
}
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destroyed." << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "FragTrap " << _name << " cannot attack, not enough hit points or energy points." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "FragTrap " << _name << " is already destroyed." << std::endl;
		return;
	}
	unsigned int newHitPoints = (_hitPoints > amount) ? _hitPoints - amount : 0;
	_hitPoints = newHitPoints;
	std::cout << "FragTrap " << _name << " takes " << amount << " points of damage! Hit points left: " << _hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "FragTrap " << _name << " cannot be repaired, not enough hit points or energy points." << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "FragTrap " << _name << " repairs itself for " << amount << " hit points! Total hit points: " << _hitPoints << std::endl;
}

void FragTrap::highFivesGuys() const {
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
