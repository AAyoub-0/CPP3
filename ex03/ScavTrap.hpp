/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:26:07 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/10 02:19:10 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		bool _guardMode;
	public:
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &other);
		virtual ~ScavTrap();

		virtual void attack(const std::string &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		void guardGate();
		void setGuardMode(bool mode);
		bool getGuardMode() const;
};

#endif