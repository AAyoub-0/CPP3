/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 01:45:37 by aboumall          #+#    #+#             */
/*   Updated: 2025/11/11 15:18:22 by aboumall         ###   ########.fr       */
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

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		std::cout << "FragTrap Assignation operator called" << std::endl;
		_name = other._name;
	}
	return *this;
}

void FragTrap::attack(const std::string &target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "FragTrap " << _name << " cannot attack, not enough hit points or energy points." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() const {
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
