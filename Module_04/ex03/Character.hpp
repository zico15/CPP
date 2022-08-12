#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string name;
        int         size;
        AMateria    *materias[4];
    public:
        Character();
        Character(std::string name);
        virtual ~Character();
        virtual std::string const &getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif