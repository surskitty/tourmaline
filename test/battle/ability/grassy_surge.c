#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Grassy Surge creates Grassy Terrain when entering the battle")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_BULU) { Ability(ABILITY_GRASSY_SURGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_GRASSY_SURGE);
        MESSAGE("Grass grew to cover the battlefield!");
    }
}

#if MAX_MON_TRAITS > 1
SINGLE_BATTLE_TEST("Grassy Surge creates Grassy Terrain when entering the battle (Traits)")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_BULU) { Ability(ABILITY_LIGHT_METAL); Innates(ABILITY_GRASSY_SURGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_GRASSY_SURGE);
        MESSAGE("Grass grew to cover the battlefield!");
    }
}
#endif
