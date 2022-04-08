#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name, 100, 50, 30), _name(name) {
	ClapTrap::_name = (name + "_clap_name");
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("Anonymous_clap_name"), _name("Anonymous") {
	std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &scavtrap) {
	*this = scavtrap;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
