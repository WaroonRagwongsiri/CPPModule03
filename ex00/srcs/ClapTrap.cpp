/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:30:23 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 13:57:21 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default Name";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_dmg = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_dmg = other.attack_dmg;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_dmg = other.attack_dmg;
	return *this;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_point == 0 || this->energy_point == 0)
	{
		std::cout << "ClapTrap " << this->name << \
			" cannot attack because it has no energy or hit points left!" << std::endl;
		return ;
	}
	this->energy_point -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attack_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point <= amount)
		this->hit_point = 0;
	else
		this->hit_point -= amount;
	std::cout << "ClapTrap " << this->name << " got attacked for " \
		<< amount << " points of damage!" << std::endl;
}
	
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_point == 0 || this->energy_point == 0)
	{
		std::cout << "ClapTrap " << this->name << \
			" cannot repair itself because it has no energy or hit points left!" << std::endl;
		return;
	}
	
	this->energy_point -= 1;
	this->hit_point += amount;
	std::cout << "ClapTrap " << this->name << " is repaired by " \
		<< amount << " hit points!" << std::endl;
}

void ClapTrap::logInfo()
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "HP: " << this->hit_point << std::endl;
	std::cout << "EP: " << this->energy_point << std::endl;
	std::cout << "ATK: " << this->attack_dmg << std::endl;
}
