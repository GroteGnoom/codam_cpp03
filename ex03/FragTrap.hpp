#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& claptrap);
		void attack(const std::string &target);
		void highFivesGuys();
};

#endif
