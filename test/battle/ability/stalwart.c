#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("ABILITY: Stalwart ignores redirection from Follow-Me")
{
    GIVEN {
        PLAYER(SPECIES_ARCHALUDON) { Ability(ABILITY_STALWART); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_FOLLOW_ME); MOVE(playerLeft, MOVE_DRACO_METEOR, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOLLOW_ME, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRACO_METEOR, playerLeft);
        HP_BAR(opponentRight);
        NOT HP_BAR(opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("ABILITY: Stalwart stops Lightning Rod and Storm Drain from redirecting moves")
{
    u32 ability, species;
    PARAMETRIZE { ability = ABILITY_STORM_DRAIN; species = SPECIES_LUMINEON; }
    PARAMETRIZE { ability = ABILITY_LIGHTNING_ROD; species = SPECIES_RAICHU; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_SPARK) == TYPE_ELECTRIC);
        ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STALWART); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            if (ability == ABILITY_LIGHTNING_ROD)
                MOVE(playerLeft, MOVE_SPARK, target: opponentRight);
            else
                MOVE(playerLeft, MOVE_WATER_GUN, target: opponentRight);
        }
    } SCENE {
        if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5) {
            HP_BAR(opponentRight);
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ability);
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
                MESSAGE("The opposing Raichu's Sp. Atk rose!");
            }
        } else {
            HP_BAR(opponentRight);
            NONE_OF {
                HP_BAR(opponentLeft);
            }
        }
    }
}

DOUBLE_BATTLE_TEST("INNATE: Stalwart ignores redirection from Follow-Me")
{
    GIVEN {
        PLAYER(SPECIES_ARCHALUDON) { Ability(ABILITY_STURDY); Innates(ABILITY_STALWART); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_FOLLOW_ME); MOVE(playerLeft, MOVE_DRACO_METEOR, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOLLOW_ME, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRACO_METEOR, playerLeft);
        HP_BAR(opponentRight);
        NOT HP_BAR(opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("INNATE: Stalwart stops Lightning Rod and Storm Drain from redirecting moves")
{
    u32 ability, innate, species;
    PARAMETRIZE { ability = ABILITY_SWIFT_SWIM; innate = ABILITY_STORM_DRAIN; species = SPECIES_LUMINEON; }
    PARAMETRIZE { ability = ABILITY_STATIC; innate = ABILITY_LIGHTNING_ROD; species = SPECIES_RAICHU; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_SPARK) == TYPE_ELECTRIC);
        ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SHADOW_TAG); Innates(ABILITY_STALWART); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); Innates(innate); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            if (ability == ABILITY_LIGHTNING_ROD)
                MOVE(playerLeft, MOVE_SPARK, target: opponentRight);
            else
                MOVE(playerLeft, MOVE_WATER_GUN, target: opponentRight);
        }
    } SCENE {
        if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5) {
            HP_BAR(opponentRight);
            NONE_OF {
                ABILITY_POPUP(opponentLeft, innate);
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
                MESSAGE("The opposing Raichu's Sp. Atk rose!");
            }
        } else {
            HP_BAR(opponentRight);
            NONE_OF {
                HP_BAR(opponentLeft);
            }
        }
    }
}
