/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:36:15 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/10 02:19:07 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : 
	ClapTrap(name, 100, 50, 20),
	_guardMode(false) 
{
	std::cout << "ScavTrap " << _name << " created." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other), _guardMode(other._guardMode) {
	std::cout << "ScavTrap " << _name << " copied." << std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)  {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " cannot attack, not enough hit points or energy points." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " is already destroyed." << std::endl;
		return;
	}
	unsigned int newHitPoints = (_hitPoints > amount) ? _hitPoints - amount : 0;
	_hitPoints = newHitPoints;
	std::cout << "ScavTrap " << _name << " takes " << amount << " points of damage! Hit points left: " << _hitPoints << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " cannot be repaired, not enough hit points or energy points." << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ScavTrap " << _name << " repairs itself for " << amount << " hit points! Total hit points: " << _hitPoints << std::endl;
}

void ScavTrap::guardGate() {
	_guardMode = true;
	std::cout << "ScavTrap " << _name << " is now in guard mode." << std::endl;
}

void ScavTrap::setGuardMode(bool mode) {
	_guardMode = mode;
}

bool ScavTrap::getGuardMode() const {
	return _guardMode;
}
