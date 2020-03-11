#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin( const std::string& name_, int hp, int armor ) : Character( hp, armor, 10 )
{
    this.name = name_;
}

const std::string& Paladin::getName()
{
    return this.name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
