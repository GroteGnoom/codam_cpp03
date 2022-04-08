#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& claptrap);
		void attack(const std::string &target);
		void highFivesGuys();
};

#endif
