// Comment out NDEBUG in include/config/general!
// Change the if TESTING in species info to show innates.

#include "global.h"
#include "battle.h"
#include "pokemon.h"
#include "test/test.h"
#include "constants/abilities.h"

TEST("JSON Print all pokemon")
{
    u32 endVal = NUM_SPECIES;
    for (u32 i = 1; i < endVal; i++)
    {
        const struct SpeciesInfo *currSpecies = &gSpeciesInfo[i];

        //  Detect if species has data
        if (currSpecies->baseHP == 0)
            continue;

        //  Detect if species is in local dex.
        if (NationalToHoennOrder(currSpecies->natDexNum) == 0)
            continue;

        //  Start printing species data
        DebugPrintf("{");
        //  Print species name
        DebugPrintf("    \"speciesName\": \"%S\",", currSpecies->speciesName);

        //  Print types
        if (currSpecies->types[0] != currSpecies->types[1])
            DebugPrintf("    \"types\": [\"%S\", \"%S\"],", gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
        else
            DebugPrintf("    \"types\": [\"%S\"],", gTypesInfo[currSpecies->types[0]].name);

        //  Print stats
        DebugPrintf("    \"stats\": {");
        DebugPrintf("        \"hp\": %u,", currSpecies->baseHP);
        DebugPrintf("        \"attack\": %u,", currSpecies->baseAttack);
        DebugPrintf("        \"defense\": %u,", currSpecies->baseDefense);
        DebugPrintf("        \"spAttack\": %u,", currSpecies->baseSpAttack);
        DebugPrintf("        \"spDefense\": %u,", currSpecies->baseSpDefense);
        DebugPrintf("        \"speed\": %u,", currSpecies->baseSpeed);
        DebugPrintf("    },");

        //  Print abilities
        if (currSpecies->abilities[0] != currSpecies->abilities[1] && currSpecies->abilities[1] != ABILITY_NONE)
            DebugPrintf("    \"Abilities\": [\"%S\", \"%S\"],", gAbilitiesInfo[currSpecies->abilities[0]].name, gAbilitiesInfo[currSpecies->abilities[1]].name);
        else
            DebugPrintf("    \"Abilities\": [\"%S\"],", gAbilitiesInfo[currSpecies->abilities[0]].name);
        if (currSpecies->abilities[2] != ABILITY_NONE)
            DebugPrintf("    \"Hidden Ability\": \"%S\",", gAbilitiesInfo[currSpecies->abilities[2]].name);

        //  Print traits
        DebugPrintf("    \"Innates\": [\"%S\", \"%S\", \"%S\"],", gAbilitiesInfo[currSpecies->innates[0]].name, gAbilitiesInfo[currSpecies->innates[1]].name, gAbilitiesInfo[currSpecies->innates[2]].name);

        //  Print moves
        //  Level up moves
        DebugPrintf("    \"levelUpMoves\": [");
        bool32 shouldContinue = TRUE;
        u32 moveIndex = 0;
        const struct LevelUpMove *levelUpLearnset = currSpecies->levelUpLearnset;
        while (shouldContinue)
        {
            DebugPrintf("        {");
            DebugPrintf("            \"level\": %u,", levelUpLearnset[moveIndex].level);
            DebugPrintf("            \"move\": \"%S\"", gMovesInfo[levelUpLearnset[moveIndex].move].name);
            moveIndex++;
            if (levelUpLearnset[moveIndex].move == LEVEL_UP_MOVE_END)
            {
                shouldContinue = FALSE;
                DebugPrintf("        }");
            }
            else
            {
                DebugPrintf("        },");
            }
        }
        DebugPrintf("    ],");

        //  Teachable moves
        shouldContinue = TRUE;
        moveIndex = 0;
        const u16 *teachableLearnset = currSpecies->teachableLearnset;
        if (teachableLearnset[moveIndex] != MOVE_UNAVAILABLE)
        {
            DebugPrintf("    \"teachableLearnset\": [");
            while (shouldContinue)
            {
                if (teachableLearnset[moveIndex + 1] != MOVE_UNAVAILABLE)
                {
                    DebugPrintf("        \"%S\",", gMovesInfo[teachableLearnset[moveIndex]].name);
                }
                else
                {
                    DebugPrintf("        \"%S\"", gMovesInfo[teachableLearnset[moveIndex]].name);
                    shouldContinue = FALSE;
                }
                moveIndex++;
            }
            DebugPrintf("    ],");
        }

        //  Egg moves
        shouldContinue = TRUE;
        moveIndex = 0;
        const u16 *eggMoves = GetSpeciesEggMoves(i);
        if (eggMoves[moveIndex] != MOVE_UNAVAILABLE)
        {
            DebugPrintf("    \"eggMoves\": [");
            while (shouldContinue)
            {
                if (eggMoves[moveIndex + 1] != MOVE_UNAVAILABLE)
                {
                    DebugPrintf("        \"%S\",", gMovesInfo[eggMoves[moveIndex]].name);
                }
                else
                {
                    DebugPrintf("        \"%S\"", gMovesInfo[eggMoves[moveIndex]].name);
                    shouldContinue = FALSE;
                }
                moveIndex++;
            }
            DebugPrintf("    ],");
        }

        //  Various data
        DebugPrintf("    \"catchRate\": %u,", currSpecies->catchRate);
        DebugPrintf("    \"expYield\": %u,", currSpecies->expYield);
        DebugPrintf("    \"eggCycles\": %u,", currSpecies->eggCycles);
        DebugPrintf("    \"monCategory\": \"%S\",", currSpecies->categoryName);
        DebugPrintf("    \"natDexNum\": %u,", currSpecies->natDexNum);
        DebugPrintf("    \"internalId\": %u,", i);

        //  Print forms
        if (currSpecies->isMegaEvolution)
            DebugPrintf("    \"form\": \"mega\",");
        else if (currSpecies->isGigantamax)
            DebugPrintf("    \"form\": \"gigantamax\",");

        DebugPrintf("}");
    }
}

TEST("Print all pokemon")
{
    u32 endVal = NUM_SPECIES;
    for (u32 i = 1; i < endVal; i++)
    {
        const struct SpeciesInfo *currSpecies = &gSpeciesInfo[i];

        //  Detect if species has data
        if (currSpecies->baseHP == 0)
            continue;

        //  Detect if species is in local dex.
        if (NationalToHoennOrder(currSpecies->natDexNum) == 0)
            continue;

        if (currSpecies->isTotem)
            continue;

        //  Print forms
        if (currSpecies->isMegaEvolution)
        {
            if (currSpecies->types[0] != currSpecies->types[1])
                DebugPrintf("#%03u %S Mega -- %S/%S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
            else
                DebugPrintf("#%03u %S Mega -- %S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name);
        }
        else if (currSpecies->isAlolanForm)
        {
            if (currSpecies->types[0] != currSpecies->types[1])
                DebugPrintf("#%03u %S Alola -- %S/%S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
            else
                DebugPrintf("#%03u %S Alola -- %S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name);
        }
        else if (currSpecies->isGalarianForm)
        {
            if (currSpecies->types[0] != currSpecies->types[1])
                DebugPrintf("#%03u %S Galar -- %S/%S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
            else
                DebugPrintf("#%03u %S Galar -- %S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name);
        }
        else if (currSpecies->isHisuianForm)
        {
            if (currSpecies->types[0] != currSpecies->types[1])
                DebugPrintf("#%03u %S Hisui -- %S/%S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
            else
                DebugPrintf("#%03u %S Hisui -- %S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name);
        }
        else if (currSpecies->isPaldeanForm)
        {
            if (currSpecies->types[0] != currSpecies->types[1])
                DebugPrintf("#%03u %S Paldea -- %S/%S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
            else
                DebugPrintf("#%03u %S Paldea -- %S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name);
        }
        else
        {
            if (currSpecies->types[0] != currSpecies->types[1])
                DebugPrintf("#%03u %S -- %S/%S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
            else
                DebugPrintf("#%03u %S -- %S", NationalToHoennOrder(currSpecies->natDexNum), currSpecies->speciesName, gTypesInfo[currSpecies->types[0]].name);
        }

        //  Print stats
        DebugPrintf("    HP: %u / Atk: %u / Def: %u / SpAtk: %u / SpDef: %u / Speed: %u", currSpecies->baseHP, currSpecies->baseAttack, currSpecies->baseDefense, currSpecies->baseSpAttack, currSpecies->baseSpDefense, currSpecies->baseSpeed);

        //  Print abilities
        if (currSpecies->abilities[0] != currSpecies->abilities[1] && currSpecies->abilities[1] != ABILITY_NONE)
        {
            if (currSpecies->abilities[2] != ABILITY_NONE && currSpecies->abilities[0] != currSpecies->abilities[2])
                DebugPrintf("    Abilities: %S, %S -- %S", gAbilitiesInfo[currSpecies->abilities[0]].name, gAbilitiesInfo[currSpecies->abilities[1]].name, gAbilitiesInfo[currSpecies->abilities[2]].name);
            else
                DebugPrintf("    Abilities: %S, %S", gAbilitiesInfo[currSpecies->abilities[0]].name, gAbilitiesInfo[currSpecies->abilities[1]].name);
        }
        else
        {
            if (currSpecies->abilities[2] != ABILITY_NONE && currSpecies->abilities[0] != currSpecies->abilities[2])
                DebugPrintf("    Abilities: %S -- %S", gAbilitiesInfo[currSpecies->abilities[0]].name, gAbilitiesInfo[currSpecies->abilities[2]].name);
            else
                DebugPrintf("    Abilities: %S", gAbilitiesInfo[currSpecies->abilities[0]].name);
        }

        //  Print traits
        if (currSpecies->innates[0] != currSpecies->innates[1] && currSpecies->innates[1] != ABILITY_NONE)
        {
            if (currSpecies->innates[2] != ABILITY_NONE && currSpecies->innates[0] != currSpecies->innates[2])
                DebugPrintf("    Innates: %S, %S, %S", gAbilitiesInfo[currSpecies->innates[0]].name, gAbilitiesInfo[currSpecies->innates[1]].name, gAbilitiesInfo[currSpecies->innates[2]].name);
            else
                DebugPrintf("    Innates: %S, %S", gAbilitiesInfo[currSpecies->innates[0]].name, gAbilitiesInfo[currSpecies->innates[1]].name);
        }
        else
        {
            DebugPrintf("    Innates: %S", gAbilitiesInfo[currSpecies->innates[0]].name);
        }

        DebugPrintf(" ");
    }
}
