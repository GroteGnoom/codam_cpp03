#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("AAA");
	DiamondTrap b("BEEEEE");
	DiamondTrap c(a);
	DiamondTrap d;

	d = c;

	a.attack("Bloe");
	b.attack("Bla");
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
	c.whoAmI();
}
