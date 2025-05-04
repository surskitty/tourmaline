#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Overcoat blocks powder and spore moves")
{
    GIVEN {
        ASSUME(IsPowderMove(MOVE_STUN_SPORE));
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_PINECO) { Ability(ABILITY_OVERCOAT); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_OVERCOAT);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
        MESSAGE("It doesn't affect the opposing Pineco…");
    }
}

TO_DO_BATTLE_TEST("ABILITY: Overcoat blocks damage from hail");
TO_DO_BATTLE_TEST("ABILITY: Overcoat blocks damage from sandstorm");
TO_DO_BATTLE_TEST("ABILITY: Overcoat blocks Effect Spore's effect");

SINGLE_BATTLE_TEST("INNATE: Overcoat blocks powder and spore moves")
{
    GIVEN {
        ASSUME(IsPowderMove(MOVE_STUN_SPORE));
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_PINECO) { Ability(ABILITY_STURDY); Innates(ABILITY_OVERCOAT); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_OVERCOAT);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
        MESSAGE("It doesn't affect the opposing Pineco…");
    }
}

TO_DO_BATTLE_TEST("INNATE: Overcoat blocks damage from hail");
TO_DO_BATTLE_TEST("INNATE: Overcoat blocks damage from sandstorm");
TO_DO_BATTLE_TEST("INNATE: Overcoat blocks Effect Spore's effect");
