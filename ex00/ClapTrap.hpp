#include <string>

class ClapTrap {
	public:
		ClapTrap(std::string);
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap &operator=(const ClapTrap& claptrap);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
};
