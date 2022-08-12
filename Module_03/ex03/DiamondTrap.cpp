
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "NULL";
    ClapTrap::name =  (this->name + "_clap_name");
    std::cout << "DiamondTrap: Default constructor\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &s)
{
    this->health = s.FragTrap::health;
    this->healthMax = s.FragTrap::healthMax;
    this->energy = s.ScavTrap::energy;
    this->attack_p = s.FragTrap::attack_p;
    this->name = s.name;
    ClapTrap::name =  (this->name + "_clap_name");
}

DiamondTrap::DiamondTrap(const std::string &name)
{
     this->health = FragTrap::health;
    this->healthMax = FragTrap::healthMax;
    this->energy = ScavTrap::energy;
    this->attack_p = FragTrap::attack_p;
    this->name = name;
    ClapTrap::name =  (this->name + "_clap_name");
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: destroy\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &s)
{
    this->name = s.name;
    this->ClapTrap::name  = s.ClapTrap::name;
	this->health = s.health;
	this->energy = s.energy;
	this->attack_p = s.attack_p;
    return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap ( " << name;
	std::cout << ") ClapTrap ( " << ClapTrap::name << " )" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}