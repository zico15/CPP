#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{	
		private:
			int		 size;
    		AMateria *materias[4]; 
		public:
    	MateriaSource();
    	MateriaSource &operator=(const MateriaSource &materiasource);
		virtual ~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif