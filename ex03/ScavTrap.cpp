/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:36:15 by aboumall          #+#    #+#             */
/*   Updated: 2025/11/11 15:18:08 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : 
	ClapTrap("default_scavtrap", 100, 50, 20)
{
	std::cout << "Default ScavTrap created." << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : 
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << _name << " created." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap " << _name << " copied." << std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		std::cout << "ScavTrap Assignation operator called" << std::endl;
		_name = other._name;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)  {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " cannot attack, not enough hit points or energy points." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in guard mode." << std::endl;
}
