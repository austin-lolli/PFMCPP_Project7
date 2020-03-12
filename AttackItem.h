#include "Item.h"

struct AttackItem : Item 
{
   void use(Character* character) override;
};
