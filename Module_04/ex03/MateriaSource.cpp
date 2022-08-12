
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    size = 0;
    for (int i = 0; i < 4; i++) 
    {
        this->materias[i] = 0;
    }
  
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < size; i++)
    {
        if (materias[i])
            delete  materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    materias[size++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < size; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return  materias[i]->clone();
    }
    return (NULL);
}
