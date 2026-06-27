/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:44:55 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 13:47:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ClapTrap b("B");

	a.attack("B");
	a.logInfo();
	a.takeDamage(10);
	a.logInfo();
	a.beRepaired(10);
	a.logInfo();
	b.attack("A");
	b.logInfo();
	b.takeDamage(5);
	b.logInfo();
	b.beRepaired(5);
	b.logInfo();
	return (0);
}
