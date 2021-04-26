# include "Character.hpp"


Character::Character(std::string const &name): _name(name), _ap(40), _weapon(nullptr)
{
}


Character::Character(Character const &other)
{
    *this = other;
}

Character::~Character()
{
}

Character   &Character::operator=(Character const &other)
{
    this->_name = other._name;
    this->_ap = other._ap;
    this->_weapon = other._weapon;
    return (*this);
}

void        Character::recoverAP()
{
    if (this->_ap > 30)
        this->_ap = 40;
    else
        this->_ap += 10;
}

void        Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void        Character::attack(Enemy *enemy)
{
    if (!enemy || !this->_weapon)
        return;
    if (this->_ap < this->_weapon->getAPCost())
        std::cout << "No ap enough to make an attack\n";
    else
    {
        std::cout << this->_name << " attacks " << enemy->getType() << " with a "
            << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        this->_ap -= this->_weapon->getAPCost();
        if (this->_weapon->getDamage() > enemy->getHP())
            delete enemy;
    }
}

std::string Character::getName() const
{
    return (this->_name);
}

int         Character::getAP() const
{
    return (this->_ap);
}

AWeapon      *Character::getWeapon() const
{
    return (this->_weapon);
}

std::ostream    &operator<<(std::ostream &out, Character const &character)
{
    if (!character.getWeapon())
        out << character.getName() << " has " << character.getAP() << " AP and is unarmed\n";
    else
        out << character.getName() << " has " << character.getAP() << " AP and wields a "
            << character.getWeapon()->getName() << std::endl;
    return (out);
} 

