#include "Dwarf.h"
#include "Character.h"
#include "Utility.h"

Dwarf::Dwarf( const std::string& name_, int hp, int armor ) : Character( hp, armor, 4 ), name(name_)
{

}

const std::string& Dwarf::getName()
{
    return this->name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
