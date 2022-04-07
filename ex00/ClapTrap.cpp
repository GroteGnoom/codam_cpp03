#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : _name("Anonimous"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_energy_points = claptrap._energy_points;
	_attack_damage = claptrap._attack_damage;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_energy_points = claptrap._energy_points;
	_attack_damage = claptrap._attack_damage;
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (_hit_points <= 0) {
		std::cout << _name << " has no hit_points left " << std::endl;
		return;
	}
	if (_energy_points > 0) {
		std::cout << _name << " attacks " << target << " for " << _attack_damage << " damage" << std::endl;
		_energy_points--;
	} else {
		std::cout << _name << " has no energy left " << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points <= 0) {
		std::cout << _name << " has no hit_points left " << std::endl;
		return;
	}
	if (_energy_points > 0) {
		std::cout << _name << " repairs itself for " << amount << std::endl;
		_energy_points--;
	} else {
		std::cout << _name << " has no energy left " << std::endl;
	}
}
