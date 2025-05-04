#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Sticky Hold prevents item theft")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_THIEF, MOVE_EFFECT_STEAL_ITEM));
        PLAYER(SPECIES_URSALUNA) { Item(ITEM_NONE); }
        OPPONENT(SPECIES_GASTRODON) { Ability(ABILITY_STICKY_HOLD); Item(ITEM_LIFE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_THIEF); }
    } SCENE {
        MESSAGE("Ursaluna used Thief!");
        ABILITY_POPUP(opponent, ABILITY_STICKY_HOLD);
        MESSAGE("The opposing Gastrodon's Sticky Hold made Thief ineffective!");
    }
}

SINGLE_BATTLE_TEST("INNATE: Sticky Hold prevents item theft")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_THIEF, MOVE_EFFECT_STEAL_ITEM));
        PLAYER(SPECIES_URSALUNA) { Item(ITEM_NONE); }
        OPPONENT(SPECIES_GASTRODON) { Ability(ABILITY_STORM_DRAIN); Innates(ABILITY_STICKY_HOLD); Item(ITEM_LIFE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_THIEF); }
    } SCENE {
        MESSAGE("Ursaluna used Thief!");
        ABILITY_POPUP(opponent, ABILITY_STICKY_HOLD);
        MESSAGE("The opposing Gastrodon's Sticky Hold made Thief ineffective!");
    }
}

