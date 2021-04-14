#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("El chico malo");
	ninja->rangedAttack("El chico malo");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(clap);

	std::cout << "---" << std::endl;

	SuperTrap *super = new SuperTrap("SUP3R");
	super->meleeAttack("CL4P-TP");
	super->rangedAttack("CL4P-TP");
	super->takeDamage(24);
	super->beRepaired(50);
	super->takeDamage(42);
	super->takeDamage(100);
	super->beRepaired(125);
	super->vaulthunter_dot_exe("CL4P-TP");
	super->vaulthunter_dot_exe("CL4P-TP");
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(clap);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(clap);

	std::cout << "---" << std::endl;
	delete frag;
	delete scav;
	delete ninja;
	delete super;

	return (0);
}