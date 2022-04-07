#include "ClapTrap.hpp"

int main() {
	ClapTrap a("AAA");
	ClapTrap b("BEEEEE");
	ClapTrap c(a);
	ClapTrap d;

	d = c;

	for (int i = 0; i < 12; i++) {
		a.attack("Bloe");
		b.attack("Bla");
		a.takeDamage(10);
		a.beRepaired(2);
	}
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
}
