/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:30:09 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 13:50:28 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>

class ClapTrap
{
	protected:
		std::string name;
		float hit_point;
		float energy_point;
		float attack_dmg;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void logInfo();
		void setHitPoints(float hp);
		void setEnergyPoints(float ep);
		void setAttackDamage(float ad);
		float getHitPoints() const;
		float getEnergyPoints() const;
		float getAttackDamage() const;
		std::string getName() const;
};

#endif