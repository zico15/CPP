#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public  FragTrap, public ScavTrap{

	private:
		std::string name;

	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &s);
		DiamondTrap(const std::string &name);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &s);
		void attack(const std::string& target);
		void whoAmI();
		void setstats();
};


#endif