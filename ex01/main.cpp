#include "ScavTrap.hpp"

int main() {
	ScavTrap a("AAA");
	ScavTrap b("BEEEEE");
	ScavTrap c(a);
	ScavTrap d;

	d = c;

	a.attack("Bloe");
	b.attack("Bla");
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
	a.takeDamage(10);
	b.beRepaired(5);
}
