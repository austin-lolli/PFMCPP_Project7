#include "AttackItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"


void AttackItem::use(Character* character)
{ 
    //make your defensive item use the appropriate Utility helper functions
    useAttackItem(character, this);
}
