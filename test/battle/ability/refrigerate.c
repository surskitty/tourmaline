#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_TACKLE) == TYPE_NORMAL);
    ASSUME(GetMovePower(MOVE_TACKLE) > 0);
}

SINGLE_BATTLE_TEST("ABILITY: Refrigerate turns a Normal-type move into a Ice-type move")
{
    GIVEN {
        PLAYER(SPECIES_MEGANIUM);
        OPPONENT(SPECIES_AMAURA) { Ability(ABILITY_REFRIGERATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

TO_DO_BATTLE_TEST("ABILITY: Refrigerate can not turn certain moves into Ice type moves");
TO_DO_BATTLE_TEST("ABILITY: Refrigerate boosts power of affected moves by 20% (Gen7+)");
TO_DO_BATTLE_TEST("ABILITY: Refrigerate boosts power of affected moves by 30% (Gen6)");
TO_DO_BATTLE_TEST("ABILITY: (DYNAMAX) Refrigerate turns Max Strike into Max Hailstorm when not used by Gigantamax Lapras");
//TO_DO_BATTLE_TEST("ABILITY: (DYNAMAX) Refrigerate doesn't turn Max Strike into Max Hailstorm when used by Gigantamax Lapras, instead becoming G-Max Resonance"); // Marked in Bulbapedia as "needs research", so this assumes that it behaves like Pixilate.

// Gen 6-7
TO_DO_BATTLE_TEST("ABILITY: Refrigerate overrides Electrify (Gen6-7)");
TO_DO_BATTLE_TEST("ABILITY: Refrigerate overrides Ion Deluge (Gen6-7)");
// Gen 8+
//TO_DO_BATTLE_TEST("ABILITY: Refrigerate doesn't override Electrify (Gen8+)");  // Bulbapedia doesn't list this effect, so it assumes it behaves like Pixilate.
//TO_DO_BATTLE_TEST("ABILITY: Refrigerate doesn't override Ion Deluge (Gen8+)"); // Ion Deluge doesn't exist in Gen 8+, but we probably could assume it behaves similar to under Electrify. TODO: Test by hacking SV.

SINGLE_BATTLE_TEST("INNATE: Refrigerate turns a Normal-type move into a Ice-type move")
{
    GIVEN {
        PLAYER(SPECIES_MEGANIUM);
        OPPONENT(SPECIES_AMAURA) { Ability(ABILITY_LIGHT_METAL); Innates(ABILITY_REFRIGERATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

TO_DO_BATTLE_TEST("INNATE: Refrigerate can not turn certain moves into Ice type moves");
TO_DO_BATTLE_TEST("INNATE: Refrigerate boosts power of affected moves by 20% (Gen7+)");
TO_DO_BATTLE_TEST("INNATE: Refrigerate boosts power of affected moves by 30% (Gen6)");
TO_DO_BATTLE_TEST("INNATE: (DYNAMAX) Refrigerate turns Max Strike into Max Hailstorm when not used by Gigantamax Lapras");
//TO_DO_BATTLE_TEST("INNATE: (DYNAMAX) Refrigerate doesn't turn Max Strike into Max Hailstorm when used by Gigantamax Lapras, instead becoming G-Max Resonance"); // Marked in Bulbapedia as "needs research", so this assumes that it behaves like Pixilate.

// Gen 6-7
TO_DO_BATTLE_TEST("INNATE: Refrigerate overrides Electrify (Gen6-7)");
TO_DO_BATTLE_TEST("INNATE: Refrigerate overrides Ion Deluge (Gen6-7)");
// Gen 8+
//TO_DO_BATTLE_TEST("INNATE: Refrigerate doesn't override Electrify (Gen8+)");  // Bulbapedia doesn't list this effect, so it assumes it behaves like Pixilate.
//TO_DO_BATTLE_TEST("INNATE: Refrigerate doesn't override Ion Deluge (Gen8+)"); // Ion Deluge doesn't exist in Gen 8+, but we probably could assume it behaves similar to under Electrify. TODO: Test by hacking SV.
