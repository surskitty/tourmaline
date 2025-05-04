#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Motor Drive absorbs status moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_EMOLGA) { Ability(ABILITY_MOTOR_DRIVE); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MOTOR_DRIVE);
    }
}

SINGLE_BATTLE_TEST("INNATE: Motor Drive absorbs status moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_EMOLGA) { Ability(ABILITY_STATIC); Innates(ABILITY_MOTOR_DRIVE); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MOTOR_DRIVE);
    }
}
