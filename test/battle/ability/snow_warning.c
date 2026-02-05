#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Snow Warning sets up hail for 5 turns (Gen6-8)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_8);
        WITH_CONFIG(CONFIG_ABILITY_WEATHER, GEN_6);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Snow Warning sets up hail for 8 turns with Icy Rock (Gen6-8)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_8);
        WITH_CONFIG(CONFIG_ABILITY_WEATHER, GEN_6);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Snow Warning sets up permanent hail (Gen4-5)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_8);
        WITH_CONFIG(CONFIG_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        NOT MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Snow Warning sets up snow for 5 turns (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_9);
        WITH_CONFIG(CONFIG_ABILITY_WEATHER, GEN_9);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Snow Warning sets up snow for 8 turns with Icy Rock (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_9);
        WITH_CONFIG(CONFIG_ABILITY_WEATHER, GEN_9);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    }
}

#if MAX_MON_TRAITS > 1
SINGLE_BATTLE_TEST("Snow Warning summons hail (Gen4-8) (Traits)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_8);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Innates(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("It started to hail!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("Snow Warning summons snow (Gen9+) (Traits)")
{
    GIVEN {
        WITH_CONFIG(CONFIG_SNOW_WARNING, GEN_9);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Innates(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("It started to snow!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
    }
}
#endif
