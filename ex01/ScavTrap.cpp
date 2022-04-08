#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("Anonymous", 100, 50, 20) {
	std::cout << "ScavTrap constructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	*this = scavtrap;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_hit_points <= 0) {
		std::cout << "ScavTrap " << _name << " has no hit_points left " << std::endl;
		return;
	}
	if (_energy_points > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << " for " << _attack_damage << " damage" << std::endl;
		_energy_points--;
	} else {
		std::cout << "ScavTrap " << _name << " has no energy left " << std::endl;
	}
}
