#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void)
{
    AWeapon *Harry = new PlasmaRifle();
    delete Harry;
    AWeapon *pedro(Harry);
    std::cout << pedro->getAPCost();
}