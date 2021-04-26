#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	Character* me = new Character("El Javi");
	std::cout << *me;
    std::cout << "hola\n";

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
    std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);


	delete me;

	std::cout << "---1" << std::endl;

	Character you("Gounsssalo");

	Enemy* mutant = new SuperMutant();

	you.equip(pr);
	std::cout << you;
	you.equip(pf);
	std::cout << you;
	you.equip(NULL);
	std::cout << you;

	you.attack(mutant);
	you.equip(pf);
	std::cout << you;
	you.attack(mutant);
	std::cout << you;
	you.attack(mutant);
	std::cout << you;
	you.attack(mutant);
	std::cout << you;
	you.attack(mutant);
	std::cout << you;

	std::cout << "---2" << std::endl;


	Enemy* bitch = new Enemy(51, "Worm");

	you.attack(bitch);
	std::cout << you;
    you.recoverAP();
    you.recoverAP();
    you.recoverAP();
	std::cout << you;
	you.attack(bitch);
	std::cout << you;

	Character charaFriend(you);
	std::cout << charaFriend;
	charaFriend = you;
	std::cout << charaFriend;

	SuperMutant m;
	SuperMutant m2(m);
	std::cout << m2.getType() << std::endl;
	m2 = m;
	std::cout << m2.getType() << std::endl;

	RadScorpion sc;
	RadScorpion sc2(sc);
	std::cout << sc2.getType() << std::endl;
	sc2 = sc;
	std::cout << sc2.getType() << std::endl;

	delete bitch;
	delete pr;
	delete pf;

	return (0);
}