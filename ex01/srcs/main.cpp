/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:44:55 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 14:26:26 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap
	ClapTrap a("A");

	a.attack("B");
	a.logInfo();
	a.takeDamage(10);
	a.logInfo();
	a.beRepaired(10);
	a.logInfo();

	// ScravTrap
	ScavTrap c("C");
	c.attack("Target");
	c.guardGate();
	c.logInfo();
	c.takeDamage(20);
	c.logInfo();
	c.beRepaired(20);
	c.logInfo();
	return (0);
}
