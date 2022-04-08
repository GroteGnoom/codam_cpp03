#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {
	public:
		ClapTrap(std::string);
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& claptrap);
		virtual ClapTrap &operator=(const ClapTrap& claptrap);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		ClapTrap(std::string name, int hit_points, int energy_points, int attack_damage);
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
};
#endif
