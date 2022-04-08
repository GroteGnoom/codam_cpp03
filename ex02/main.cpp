#include "FragTrap.hpp"

int main() {
	FragTrap a("AAA");
	FragTrap b("BEEEEE");
	FragTrap c(a);
	FragTrap d;

	d = c;

	a.attack("Bloe");
	b.attack("Bla");
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
	a.takeDamage(10);
	b.beRepaired(5);
	c.highFivesGuys();
}
