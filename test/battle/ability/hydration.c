#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Hydration cures non-volatile Status conditions if it is raining")
{
    GIVEN {
        PLAYER(SPECIES_VAPOREON) { Ability(ABILITY_HYDRATION); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Vaporeon's Hydration cured its burn problem!");
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("ABILITY: Hydration doesn't cure status conditions if Cloud Nine/Air Lock is on the field")
{
    GIVEN {
        PLAYER(SPECIES_VAPOREON) { Ability(ABILITY_HYDRATION); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        NOT ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Vaporeon was hurt by its burn!");
    }
}

SINGLE_BATTLE_TEST("INNATE: Hydration cures non-volatile Status conditions if it is raining")
{
    GIVEN {
        PLAYER(SPECIES_VAPOREON) { Ability(ABILITY_WATER_ABSORB); Innates(ABILITY_HYDRATION); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Vaporeon's Hydration cured its burn problem!");
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("INNATE: Hydration doesn't cure status conditions if Cloud Nine/Air Lock is on the field")
{
    GIVEN {
        PLAYER(SPECIES_VAPOREON) { Ability(ABILITY_WATER_ABSORB); Innates(ABILITY_HYDRATION); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_DAMP); Innates(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        NOT ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Vaporeon was hurt by its burn!");
    }
}
