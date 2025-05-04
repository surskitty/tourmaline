#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Misty Surge creates Misty Terrain when entering the battle")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_FINI) { Ability(ABILITY_MISTY_SURGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MISTY_SURGE);
        MESSAGE("Mist swirled around the battlefield!");
    }
}

SINGLE_BATTLE_TEST("INNATE: Misty Surge creates Misty Terrain when entering the battle")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_FINI) { Ability(ABILITY_TELEPATHY); Innates(ABILITY_MISTY_SURGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MISTY_SURGE);
        MESSAGE("Mist swirled around the battlefield!");
    }
}
