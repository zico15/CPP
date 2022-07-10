#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <iterator>
#include <map>

class Harl {

	typedef struct s_list
	{
		std::string name;
		void (Harl::*action)( void );
	} t_list;

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		t_list	action[4];

	public:
		Harl();
		void complain( std::string level );

};



#endif
