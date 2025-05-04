#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("ABILITY: Aftermath damages the attacker by 1/4th of its max HP if fainted by a contact move")
{
    s16 aftermathDamage;

    GIVEN {
        PLAYER(SPECIES_VOLTORB) { HP(1); Ability(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {MOVE(opponent, MOVE_TACKLE);}
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("Voltorb fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
        HP_BAR(opponent, captureDamage: &aftermathDamage);
    } THEN {
        EXPECT_EQ(aftermathDamage, opponent->maxHP / 4);
    }
}

SINGLE_BATTLE_TEST("ABILITY: Aftermath ability pop-up will be displayed correctly: player point of view")
{
    GIVEN {
        PLAYER(SPECIES_SHROOMISH) { Ability(ABILITY_POISON_HEAL); };
        OPPONENT(SPECIES_VOLTORB) { HP(1); Ability(ABILITY_AFTERMATH); };
    } WHEN {
        TURN {MOVE(player, MOVE_HEADBUTT);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        MESSAGE("The opposing Voltorb fainted!");
        ABILITY_POPUP(opponent, ABILITY_AFTERMATH);
    }
}

SINGLE_BATTLE_TEST("ABILITY: Aftermath ability pop-up will be displayed correctly: opponent point of view")
{
    GIVEN {
        PLAYER(SPECIES_VOLTORB) { HP(1); Ability(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_SHROOMISH) { Ability(ABILITY_POISON_HEAL); };
    } WHEN {
        TURN {MOVE(opponent, MOVE_HEADBUTT);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, opponent);
        MESSAGE("Voltorb fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
    }
}

SINGLE_BATTLE_TEST("INNATE: Aftermath damages the attacker by 1/4th of its max HP if fainted by a contact move")
{
    s16 aftermathDamage;

    GIVEN {
        PLAYER(SPECIES_VOLTORB) { HP(1); Ability(ABILITY_SOUNDPROOF); Innates(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {MOVE(opponent, MOVE_TACKLE);}
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("Voltorb fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
        HP_BAR(opponent, captureDamage: &aftermathDamage);
    } THEN {
        EXPECT_EQ(aftermathDamage, opponent->maxHP / 4);
    }
}

SINGLE_BATTLE_TEST("INNATE: Aftermath ability pop-up will be displayed correctly: player point of view")
{
    GIVEN {
        PLAYER(SPECIES_SHROOMISH) { Ability(ABILITY_QUICK_FEET); Innates(ABILITY_POISON_HEAL); };
        OPPONENT(SPECIES_VOLTORB) { HP(1); Ability(ABILITY_SOUNDPROOF); Innates(ABILITY_AFTERMATH); };
    } WHEN {
        TURN {MOVE(player, MOVE_HEADBUTT);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        MESSAGE("The opposing Voltorb fainted!");
        ABILITY_POPUP(opponent, ABILITY_AFTERMATH);
    }
}

SINGLE_BATTLE_TEST("INNATE: Aftermath ability pop-up will be displayed correctly: opponent point of view")
{
    GIVEN {
        PLAYER(SPECIES_VOLTORB) { HP(1); Ability(ABILITY_SOUNDPROOF); Innates(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_SHROOMISH) { Ability(ABILITY_QUICK_FEET); Innates(ABILITY_POISON_HEAL); };
    } WHEN {
        TURN {MOVE(opponent, MOVE_HEADBUTT);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, opponent);
        MESSAGE("Voltorb fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
    }
}
