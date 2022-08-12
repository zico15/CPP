#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public  FragTrap, public ScavTrap{

	private:
		std::string name;

	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &s);
		DiamondTrap(const std::string &name);
		virtual ~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &s);
		virtual void attack(const std::string& target);
		void whoAmI();
};


#endif