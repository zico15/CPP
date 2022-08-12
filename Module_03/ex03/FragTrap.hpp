#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public  virtual  ClapTrap {

	private:


	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &s);
		FragTrap &operator=(const FragTrap &s);
		virtual ~FragTrap();
		virtual void attack(const std::string& target);
		void highFivesGuys(void);

};


#endif
