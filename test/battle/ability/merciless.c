#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Merciless causes a move to result in a critical hit if the target is poisoned")
{
    GIVEN {
        PLAYER(SPECIES_MAREANIE) { Ability(ABILITY_MERCILESS); }
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("INNATE: Merciless causes a move to result in a critical hit if the target is poisoned")
{
    GIVEN {
        PLAYER(SPECIES_MAREANIE) { Ability(ABILITY_LIMBER); Innates(ABILITY_MERCILESS); }
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}
