#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap *frag = new FragTrap("frogi");
	frag->vaulthunter_dot_exe("El chico malo");
	frag->meleeAttack("El chico malo");
	frag->rangedAttack("El chico malo");
	frag->takeDamage(24);
	frag->beRepaired(50);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(125);
	frag->vaulthunter_dot_exe("El chico malo");
	frag->vaulthunter_dot_exe("El chico malo");
	frag->vaulthunter_dot_exe("El chico malo");
	frag->vaulthunter_dot_exe("El chico malo");

	std::cout << "---" << std::endl;

	ScavTrap *scav = new ScavTrap("SC4V");
	scav->challengeNewcomer();
	scav->meleeAttack("El chico malo");
	scav->rangedAttack("El chico malo");
	scav->takeDamage(24);
	scav->beRepaired(50);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(125);
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();

	std::cout << "---" << std::endl;

	ClapTrap clap("Clapi");
	NinjaTrap *ninja = new NinjaTrap("El juanri");
	ninja->meleeAttack("El chico malo");
	ninja->rangedAttack("El chico malo");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	ninja->ninjaShoebox(*ninja);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*scav);

	std::cout << "---" << std::endl;

	delete frag;
	delete scav;
	delete ninja;

	return (0);
}