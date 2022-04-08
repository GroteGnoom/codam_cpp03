#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap  {
	public:
		DiamondTrap(std::string);
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& diamondtrap);
		void attack(const std::string &target);
		void whoAmI();
	private:
		std::string _name;
};

#endif
