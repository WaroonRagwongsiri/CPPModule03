/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:44:55 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 14:37:05 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	// ClapTrap
	std::cout << "--- Testing ClapTrap ---" << std::endl;
	ClapTrap a("A");
	a.attack("TargetA");
	a.takeDamage(5);
	a.beRepaired(5);
	a.logInfo();

	// ScavTrap
	std::cout << "\n--- Testing ScavTrap ---" << std::endl;
	ScavTrap c("C");
	c.attack("TargetC");
	c.guardGate();
	c.logInfo();

	// FragTrap
	std::cout << "\n--- Testing FragTrap ---" << std::endl;
	FragTrap f("F");
	f.attack("TargetF");
	f.highFivesGuys();
	f.logInfo();
	std::cout << "FragTrap F HP: " << f.getHitPoints() << std::endl;
	std::cout << "FragTrap F EP: " << f.getEnergyPoints() << std::endl;
	std::cout << "FragTrap F AD: " << f.getAttackDamage() << std::endl;

	return (0);
}
