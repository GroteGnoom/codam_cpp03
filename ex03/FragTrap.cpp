#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Anonymous", 100, 100, 30) {
	std::cout << "FragTrap constructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " high fives a bunch of guys" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scavtrap) {
	*this = scavtrap;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (_hit_points <= 0) {
		std::cout << "FragTrap " << _name << " has no hit_points left " << std::endl;
		return;
	}
	if (_energy_points > 0) {
		std::cout << "FragTrap " << _name << " attacks " << target << " for " << _attack_damage << " damage" << std::endl;
		_energy_points--;
	} else {
		std::cout << "FragTrap " << _name << " has no energy left " << std::endl;
	}
}
