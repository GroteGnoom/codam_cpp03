#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(std::string);
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& claptrap);
		void attack(const std::string &target);
		void guardGate();
};

#endif
