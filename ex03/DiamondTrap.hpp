/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 02:01:41 by aboumall          #+#    #+#             */
/*   Updated: 2025/11/11 15:27:03 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &other);

		void attack(const std::string &target);

		void whoAmI() const;

		using ClapTrap::setAttackDamage;
		using ClapTrap::beRepaired;
		using ClapTrap::takeDamage;
};

#endif