#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Water Bubble prevents burn from Will-o-Wisp")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_WILL_O_WISP) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_WILL_O_WISP) == MOVE_EFFECT_BURN);
        PLAYER(SPECIES_DEWPIDER) { Ability(ABILITY_WATER_BUBBLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WILL_O_WISP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_BUBBLE);
        MESSAGE("It doesn't affect Dewpider…");
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, player);
            STATUS_ICON(player, burn: TRUE);
        }
    }
}

#if MAX_MON_TRAITS > 1
SINGLE_BATTLE_TEST("Water Bubble prevents burn from Will-o-Wisp (Traits)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_WILL_O_WISP) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_WILL_O_WISP) == MOVE_EFFECT_BURN);
        PLAYER(SPECIES_DEWPIDER) { Ability(ABILITY_WATER_ABSORB); Innates(ABILITY_WATER_BUBBLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WILL_O_WISP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_BUBBLE);
        MESSAGE("It doesn't affect Dewpider…");
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, player);
            STATUS_ICON(player, burn: TRUE);
        }
    }
}
#endif
