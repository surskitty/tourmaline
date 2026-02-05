#include "global.h"
#include "test/battle.h"

#if MAX_MON_TRAITS > 1
SINGLE_BATTLE_TEST("Multi - Contrary causes Competitive or Defiant to sharply lower stats", s16 damage)
{
    u32 ability, attack;
    PARAMETRIZE { ability = ABILITY_OVERGROW; attack = MOVE_WATER_GUN;}
    PARAMETRIZE { ability = ABILITY_COMPETITIVE; attack = MOVE_WATER_GUN;}
    PARAMETRIZE { ability = ABILITY_OVERGROW; attack = MOVE_TACKLE;}
    PARAMETRIZE { ability = ABILITY_DEFIANT; attack = MOVE_TACKLE;}
    GIVEN {
        PLAYER(SPECIES_SUNFLORA) { Speed(3); }
        OPPONENT(SPECIES_SNIVY) { Ability(ABILITY_CONTRARY); Innates(ability); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLOWER_SHIELD); MOVE(opponent, attack); }
    } SCENE {
        MESSAGE("Sunflora used Flower Shield!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Sunflora's Defense rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's Defense fell!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla

        if (ability == ABILITY_COMPETITIVE) {
            ABILITY_POPUP(opponent, ABILITY_COMPETITIVE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Snivy's Sp. Atk harshly fell!");
            //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        }
        else if (ability == ABILITY_DEFIANT){
            ABILITY_POPUP(opponent, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Snivy's Attack harshly fell!");
            //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        }

        HP_BAR(player, captureDamage: &results[i].damage);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(2), results[0].damage);
        EXPECT_MUL_EQ(results[3].damage, Q_4_12(2), results[2].damage);
    }
}

SINGLE_BATTLE_TEST("Multi - Contrary causes Competitive and Defiant to sharply lower both stats", s16 damage)
{
    u32 ability1, ability2, attack;
    PARAMETRIZE { ability1 = ABILITY_OVERGROW; ability2 = ABILITY_OVERGROW; attack = MOVE_WATER_GUN;}
    PARAMETRIZE { ability1 = ABILITY_DEFIANT; ability2 = ABILITY_COMPETITIVE; attack = MOVE_WATER_GUN;}
    PARAMETRIZE { ability1 = ABILITY_OVERGROW; ability2 = ABILITY_OVERGROW; attack = MOVE_TACKLE;}
    PARAMETRIZE { ability1 = ABILITY_DEFIANT; ability2 = ABILITY_COMPETITIVE; attack = MOVE_TACKLE;}

    GIVEN {
        PLAYER(SPECIES_SUNFLORA) { Speed(3); }
        OPPONENT(SPECIES_SNIVY) { Ability(ABILITY_CONTRARY); Innates(ability1, ability2); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLOWER_SHIELD); MOVE(opponent, attack); }
    } SCENE {
        MESSAGE("Sunflora used Flower Shield!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Sunflora's Defense rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's Defense fell!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla

        if (ability2 == ABILITY_DEFIANT){
            ABILITY_POPUP(opponent, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Snivy's Attack harshly fell!");
            //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
            ABILITY_POPUP(opponent, ABILITY_COMPETITIVE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Snivy's Sp. Atk harshly fell!");
            //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        }
        ANIMATION(ANIM_TYPE_MOVE, attack, opponent);
        HP_BAR(player, captureDamage: &results[i].damage);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(2), results[0].damage);
        EXPECT_MUL_EQ(results[3].damage, Q_4_12(2), results[2].damage);
    }
}

SINGLE_BATTLE_TEST("Multi - Multiple stat changing abilities activating together")
{
    GIVEN {
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_UNNERVE); Innates(ABILITY_SUPERSWEET_SYRUP, ABILITY_PRESSURE, ABILITY_INTIMIDATE); Speed(3); }
        OPPONENT(SPECIES_SNIVY) { Ability(ABILITY_CONTRARY); Innates(ABILITY_DEFIANT, ABILITY_COMPETITIVE, ABILITY_RATTLED); Speed(2); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_PRESSURE);
        MESSAGE("Ekans is exerting its pressure!");
        ABILITY_POPUP(player, ABILITY_UNNERVE);
        MESSAGE("The opposing team is too nervous to eat Berries!");
        ABILITY_POPUP(player, ABILITY_SUPERSWEET_SYRUP);
        MESSAGE("A supersweet aroma is wafting from the syrup covering Ekans!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's evasiveness rose!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's Attack rose!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        ABILITY_POPUP(opponent, ABILITY_RATTLED);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's Speed fell!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        ABILITY_POPUP(opponent, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's Attack harshly fell!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla  
        ABILITY_POPUP(opponent, ABILITY_COMPETITIVE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Snivy's Sp. Atk harshly fell!");
        //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla

    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1); // Intimidate +1, Defiant -2
        EXPECT_EQ(opponent->statStages[STAT_SPATK], DEFAULT_STAT_STAGE - 2); // Competitive -2
        EXPECT_EQ(opponent->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1); // Rattled -1
        EXPECT_EQ(opponent->statStages[STAT_EVASION], DEFAULT_STAT_STAGE + 1); // Supersweet Aroma +1
    }
}

SINGLE_BATTLE_TEST("Multi - Contrary Intimidate still triggers Rattled")
{
    u32 ability1, ability2, innate1;
    PARAMETRIZE { ability1 = ABILITY_UNNERVE; ability2 = ABILITY_OVERGROW; innate1 = ABILITY_OVERGROW;}
    PARAMETRIZE { ability1 = ABILITY_INTIMIDATE; ability2 = ABILITY_OVERGROW; innate1 = ABILITY_OVERGROW;}
    PARAMETRIZE { ability1 = ABILITY_INTIMIDATE; ability2 = ABILITY_CONTRARY; innate1 = ABILITY_OVERGROW;}
    PARAMETRIZE { ability1 = ABILITY_INTIMIDATE; ability2 = ABILITY_CONTRARY; innate1 = ABILITY_RATTLED;}

    GIVEN {
        PLAYER(SPECIES_EKANS) { Ability(ability1); }
        OPPONENT(SPECIES_SNIVY) { Ability(ability2); Innates(innate1); }
    } WHEN {
        TURN { }
    } SCENE {
        if (ability1 == ABILITY_UNNERVE)
        {
            ABILITY_POPUP(player, ABILITY_UNNERVE);
            MESSAGE("The opposing team is too nervous to eat Berries!");
        }
        else if (ability1 == ABILITY_INTIMIDATE && ability2 != ABILITY_CONTRARY)
        {
            ABILITY_POPUP(player, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Ekans's Intimidate cuts the opposing Snivy's Attack!");
        }
        else if (ability1 == ABILITY_INTIMIDATE && ability2 == ABILITY_CONTRARY)
        {
            ABILITY_POPUP(player, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Snivy's Attack rose!");
            //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        }
        if (innate1 == ABILITY_RATTLED)
        {
            ABILITY_POPUP(opponent, ABILITY_RATTLED);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Snivy's Speed fell!");
            //ABILITY_POPUP(opponent, ABILITY_CONTRARY); //No popup in vanilla
        } 

    } THEN {
        if (ability1 == ABILITY_INTIMIDATE && ability2 != ABILITY_CONTRARY)
            EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
        if (ability1 == ABILITY_INTIMIDATE && ability2 == ABILITY_CONTRARY)
            EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        if (ability1 == ABILITY_INTIMIDATE && ability2 == ABILITY_CONTRARY && innate1 == ABILITY_RATTLED)
            EXPECT_EQ(opponent->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1);
    }
}

// Ability immunities should trigger first with specific protections in rarity ordder, then wide protection last to keep activations a little more diverse.
// Insomnia should activate before Purifying Salt for example because Insomnia can only activate for sleep while Purifying Salt can still activate for other ailments.
// Good as Gold is an outlier that always goes first.
SINGLE_BATTLE_TEST("Multi - Sleep protection abilities trigger specific protection first and wide protection last")
{
    u32 ability, innate1, innate2, innate3;
    PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; innate1 = ABILITY_LIGHT_METAL; innate2 = ABILITY_LIGHT_METAL; innate3 = ABILITY_LIGHT_METAL;} // Purifying Salt
    PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; innate1 = ABILITY_COMATOSE; innate2 = ABILITY_LIGHT_METAL; innate3 = ABILITY_LIGHT_METAL;} // Comatose
    PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; innate1 = ABILITY_COMATOSE; innate2 = ABILITY_GOOD_AS_GOLD; innate3 = ABILITY_LIGHT_METAL;} // Good as Gold

    PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; innate1 = ABILITY_SWEET_VEIL; innate2 = ABILITY_LIGHT_METAL; innate3 = ABILITY_LIGHT_METAL;} // Sweet Veil
    PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; innate1 = ABILITY_SWEET_VEIL; innate2 = ABILITY_VITAL_SPIRIT; innate3 = ABILITY_LIGHT_METAL;} // Vital Spirit
        PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; innate1 = ABILITY_SWEET_VEIL; innate2 = ABILITY_VITAL_SPIRIT; innate3 = ABILITY_INSOMNIA;} // Insomnia
    PARAMETRIZE { ability = ABILITY_GOOD_AS_GOLD; innate1 = ABILITY_SWEET_VEIL; innate2 = ABILITY_VITAL_SPIRIT; innate3 = ABILITY_INSOMNIA;} // Good as Gold

    GIVEN {
        PLAYER(SPECIES_BUTTERFREE);
        OPPONENT(SPECIES_KOMALA) { Ability(ability); Innates(innate1, innate2, innate3); }
    } WHEN {
        TURN { MOVE(player, MOVE_SLEEP_POWDER); }
    } SCENE {
        // Sleep Ability activation priority should be  Good as Gold > Insomnia > Vital Spirit > Sweet Veil > Comatose > Purifying Salt

        if (innate2 == ABILITY_GOOD_AS_GOLD || ability == ABILITY_GOOD_AS_GOLD)
        {
            ABILITY_POPUP(opponent, ABILITY_GOOD_AS_GOLD);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_INSOMNIA);
                ABILITY_POPUP(opponent, ABILITY_VITAL_SPIRIT);
                ABILITY_POPUP(opponent, ABILITY_SWEET_VEIL);
                ABILITY_POPUP(opponent, ABILITY_COMATOSE);
                ABILITY_POPUP(opponent, ABILITY_PURIFYING_SALT);
                STATUS_ICON(opponent, sleep: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Komala…");
        }
        else if (innate3 == ABILITY_INSOMNIA)
        {
            ABILITY_POPUP(opponent, ABILITY_INSOMNIA);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_GOOD_AS_GOLD);
                ABILITY_POPUP(opponent, ABILITY_VITAL_SPIRIT);
                ABILITY_POPUP(opponent, ABILITY_SWEET_VEIL);
                ABILITY_POPUP(opponent, ABILITY_COMATOSE);
                ABILITY_POPUP(opponent, ABILITY_PURIFYING_SALT);
                STATUS_ICON(opponent, sleep: TRUE);
                MESSAGE("It doesn't affect the opposing Komala…");
            }
        }
        else if (innate2 == ABILITY_VITAL_SPIRIT)
        {
            ABILITY_POPUP(opponent, ABILITY_VITAL_SPIRIT);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_GOOD_AS_GOLD);
                ABILITY_POPUP(opponent, ABILITY_INSOMNIA);
                ABILITY_POPUP(opponent, ABILITY_SWEET_VEIL);
                ABILITY_POPUP(opponent, ABILITY_COMATOSE);
                ABILITY_POPUP(opponent, ABILITY_PURIFYING_SALT);
                STATUS_ICON(opponent, sleep: TRUE);
            }
            MESSAGE("The opposing Komala's Vital Spirit made it ineffective!");
        }
        else if (innate1 == ABILITY_SWEET_VEIL)
        {
            ABILITY_POPUP(opponent, ABILITY_SWEET_VEIL);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_GOOD_AS_GOLD);
                ABILITY_POPUP(opponent, ABILITY_INSOMNIA);
                ABILITY_POPUP(opponent, ABILITY_VITAL_SPIRIT);
                ABILITY_POPUP(opponent, ABILITY_COMATOSE);
                ABILITY_POPUP(opponent, ABILITY_PURIFYING_SALT);
                STATUS_ICON(opponent, sleep: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Komala…");
        }
        else if (innate1 == ABILITY_COMATOSE)
        {
            MESSAGE("The opposing Komala is drowsing!"); // Appears on switch-in
            ABILITY_POPUP(opponent, ABILITY_COMATOSE);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_GOOD_AS_GOLD);
                ABILITY_POPUP(opponent, ABILITY_INSOMNIA);
                ABILITY_POPUP(opponent, ABILITY_VITAL_SPIRIT);
                ABILITY_POPUP(opponent, ABILITY_SWEET_VEIL);
                ABILITY_POPUP(opponent, ABILITY_PURIFYING_SALT);
                STATUS_ICON(opponent, sleep: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Komala…");
        }
        else if (ability == ABILITY_PURIFYING_SALT)
        {
            ABILITY_POPUP(opponent, ABILITY_PURIFYING_SALT);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_GOOD_AS_GOLD);
                ABILITY_POPUP(opponent, ABILITY_INSOMNIA);
                ABILITY_POPUP(opponent, ABILITY_VITAL_SPIRIT);
                ABILITY_POPUP(opponent, ABILITY_SWEET_VEIL);
                ABILITY_POPUP(opponent, ABILITY_COMATOSE);
                STATUS_ICON(opponent, sleep: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Komala…");
        }  
    }
}

SINGLE_BATTLE_TEST("Multi - Poison protection abilities trigger specific protection first and wide protection last")
{
    u32 ability, innate1;
    PARAMETRIZE { ability = ABILITY_PASTEL_VEIL; innate1 = ABILITY_PASTEL_VEIL; } // Pastel Veil
    PARAMETRIZE { ability = ABILITY_PASTEL_VEIL; innate1 = ABILITY_IMMUNITY; } // Immunity

    GIVEN {
        PLAYER(SPECIES_BUTTERFREE);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ability); Innates(innate1); }
    } WHEN {
        TURN { MOVE(player, MOVE_POISONPOWDER); }
    } SCENE {
        // Sleep Ability activation priority should be  Immunity > Pastel Veil

        if (innate1 == ABILITY_PASTEL_VEIL)
        {
            ABILITY_POPUP(opponent, ABILITY_PASTEL_VEIL);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_CORROSION);
                ABILITY_POPUP(opponent, ABILITY_IMMUNITY);
                STATUS_ICON(opponent, poison: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Wobbuffet…");
        }
        else if (ability == ABILITY_CORROSION)
        {
            //ABILITY_POPUP(opponent, ABILITY_CORROSION); //No popup in vanilla
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_PASTEL_VEIL);
                ABILITY_POPUP(opponent, ABILITY_IMMUNITY);
                STATUS_ICON(opponent, poison: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Wobbuffet…");
        }
    }
}

SINGLE_BATTLE_TEST("Multi - Burn protection abilities trigger specific protection first and wide protection last")
{
    u32 ability, innate1, innate2;
    PARAMETRIZE { ability = ABILITY_THERMAL_EXCHANGE; innate1 = ABILITY_LIGHT_METAL; innate2 = ABILITY_LIGHT_METAL; } // Thermal Exchange
    PARAMETRIZE { ability = ABILITY_THERMAL_EXCHANGE; innate1 = ABILITY_WATER_BUBBLE; innate2 = ABILITY_LIGHT_METAL; } // Water Bubble
    PARAMETRIZE { ability = ABILITY_THERMAL_EXCHANGE; innate1 = ABILITY_WATER_BUBBLE; innate2 = ABILITY_WATER_VEIL; } // Water Veil

    GIVEN {
        PLAYER(SPECIES_LITWICK);
        OPPONENT(SPECIES_BAXCALIBUR) { Ability(ability); Innates(innate1, innate2); }
    } WHEN {
        TURN { MOVE(player, MOVE_WILL_O_WISP); }
    } SCENE {
        // Sleep Ability activation priority should be  Immunity > Pastel Veil > Corrosion

        if (innate2 == ABILITY_WATER_VEIL)
        {
            ABILITY_POPUP(opponent, ABILITY_WATER_VEIL);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_THERMAL_EXCHANGE);
                ABILITY_POPUP(opponent, ABILITY_WATER_BUBBLE);
                STATUS_ICON(opponent, burn: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Baxcalibur…");
        }
        else if (innate1 == ABILITY_WATER_BUBBLE)
        {
            ABILITY_POPUP(opponent, ABILITY_WATER_BUBBLE);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_THERMAL_EXCHANGE);
                ABILITY_POPUP(opponent, ABILITY_WATER_VEIL);
                STATUS_ICON(opponent, burn: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Baxcalibur…");
        }
        else if (ability == ABILITY_THERMAL_EXCHANGE)
        {
            ABILITY_POPUP(opponent, ABILITY_THERMAL_EXCHANGE);
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_WATER_BUBBLE);
                ABILITY_POPUP(opponent, ABILITY_WATER_VEIL);
                STATUS_ICON(opponent, burn: TRUE);
            }
            MESSAGE("It doesn't affect the opposing Baxcalibur…");
        }
    }
}

SINGLE_BATTLE_TEST("Multi - Weight changing abilities can stack ", s16 damage3)
{
    u32 ability1, ability2;
    PARAMETRIZE { ability1 = ABILITY_LEVITATE; ability2 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability1 = ABILITY_LIGHT_METAL; ability2 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability1 = ABILITY_HEAVY_METAL; ability2 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability1 = ABILITY_HEAVY_METAL; ability2 = ABILITY_LIGHT_METAL; }

    GIVEN {
        PLAYER(SPECIES_TANGELA);
        OPPONENT(SPECIES_BELDUM) { Ability(ability1); Innates(ability2); }
    } WHEN {
        TURN { MOVE(player, MOVE_GRASS_KNOT); }
    } SCENE {
        MESSAGE("Tangela used Grass Knot!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASS_KNOT, player);
        HP_BAR(opponent, captureDamage: &results[i].damage3);
    }
    FINALLY {
        EXPECT_LT(results[1].damage3, results[0].damage3);
        EXPECT_GT(results[2].damage3, results[0].damage3);
        EXPECT_EQ(results[3].damage3, results[0].damage3);
    }
}

SINGLE_BATTLE_TEST("Multi - Damage boosting abilities can stack (attacker)", s16 damage4)
{
    u32 attack, ability, innate1, innate2, innate3, status;
    PARAMETRIZE { attack = MOVE_BULLET_PUNCH; ability = ABILITY_LEVITATE; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_LEVITATE; innate3 = ABILITY_LEVITATE; status = STATUS1_NONE; }
    PARAMETRIZE { attack = MOVE_BULLET_PUNCH; ability = ABILITY_IRON_FIST; innate1 = ABILITY_TECHNICIAN; innate2 = ABILITY_TOXIC_BOOST; innate3 = ABILITY_TOUGH_CLAWS; status = STATUS1_POISON; }
    PARAMETRIZE { attack = MOVE_BULLET_PUNCH; ability = ABILITY_STEELWORKER; innate1 = ABILITY_STEELY_SPIRIT; innate2 = ABILITY_RIVALRY; innate3 = ABILITY_IRON_FIST; status = STATUS1_NONE; }
    
    GIVEN {
        PLAYER(SPECIES_NIDOKING) { Ability(ability); Innates(innate1, innate2, innate3); Status1(status);  Speed(2); } 
        OPPONENT(SPECIES_NIDOKING) { Speed(3);}
    } WHEN {
        TURN { MOVE(player, attack); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, attack, player);
        HP_BAR(opponent, captureDamage: &results[i].damage4);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[0].damage4, Q_4_12(3.51), results[1].damage4); //1.2 * 1.5 * 1.5 * 1.3
        EXPECT_MUL_EQ(results[0].damage4, Q_4_12(3.375), results[2].damage4); //1.5 * 1.5 * 1.25 * 1.2
    }
}

SINGLE_BATTLE_TEST("Multi - Damage boosting abilities can stack (target)", s16 damage5)
{
    u32 ability, innate1, innate2;
    PARAMETRIZE { ability = ABILITY_LEVITATE; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability = ABILITY_HEATPROOF; innate1 = ABILITY_WATER_BUBBLE; innate2 = ABILITY_DRY_SKIN; }
    
    GIVEN {
        PLAYER(SPECIES_PONYTA) { };
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ability); Innates(innate1, innate2); } 
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent, captureDamage: &results[i].damage5);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[0].damage5, Q_4_12(0.31), results[1].damage5); //0.5 * 0.5 * 1.25
    }
}

SINGLE_BATTLE_TEST("Multi - Attack boosting abilities can stack", s16 damage6)
{
    u32 attack, ability, innate1, innate2, innate3, status;
    PARAMETRIZE { attack = MOVE_FIRE_FANG; ability = ABILITY_LEVITATE; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_LEVITATE; innate3 = ABILITY_LEVITATE; status = STATUS1_NONE; }
    PARAMETRIZE { attack = MOVE_FIRE_FANG; ability = ABILITY_BLAZE; innate1 = ABILITY_GORILLA_TACTICS; innate2 = ABILITY_HUGE_POWER; innate3 = ABILITY_HUSTLE; }
    PARAMETRIZE { attack = MOVE_BULLET_PUNCH; ability = ABILITY_STEELWORKER; innate1 = ABILITY_STEELY_SPIRIT; innate2 = ABILITY_RIVALRY; innate3 = ABILITY_IRON_FIST; status = STATUS1_NONE; }
    
    GIVEN {
        PLAYER(SPECIES_CHARIZARD) { Ability(ability); Innates(innate1, innate2, innate3); Status1(status);  MaxHP(99); HP(33); } 
        OPPONENT(SPECIES_GOLEM) { }
    } WHEN {
        TURN { MOVE(player, attack); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, attack, player);
        HP_BAR(opponent, captureDamage: &results[i].damage6);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage6, Q_4_12(6.75), results[1].damage6); //1.5 * 2 * 1.5 * 1.5
    }
}

SINGLE_BATTLE_TEST("Multi - Switch-In abilities display text correctly 1")
{
    GIVEN {
        PLAYER(SPECIES_RESHIRAM) { Ability(ABILITY_TERAVOLT); Innates(ABILITY_SUPERSWEET_SYRUP, ABILITY_COMATOSE, ABILITY_INTIMIDATE); } 
        OPPONENT(SPECIES_ZEKROM) { Ability(ABILITY_TURBOBLAZE); Innates(ABILITY_SLOW_START, ABILITY_UNNERVE, ABILITY_PRESSURE); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_COMATOSE);
        MESSAGE("Reshiram is drowsing!");
        ABILITY_POPUP(player, ABILITY_TERAVOLT);
        MESSAGE("Reshiram is radiating a bursting aura!");
        ABILITY_POPUP(player, ABILITY_SUPERSWEET_SYRUP);
        MESSAGE("A supersweet aroma is wafting from the syrup covering Reshiram!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zekrom's evasiveness fell!");
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Reshiram's Intimidate cuts the opposing Zekrom's Attack!");
        ABILITY_POPUP(opponent, ABILITY_PRESSURE);
        MESSAGE("The opposing Zekrom is exerting its pressure!");
        ABILITY_POPUP(opponent, ABILITY_UNNERVE);
        MESSAGE("Your team is too nervous to eat Berries!");
        ABILITY_POPUP(opponent, ABILITY_SLOW_START);
        MESSAGE("The opposing Zekrom is slow to get going!");
        ABILITY_POPUP(opponent, ABILITY_TURBOBLAZE);
        MESSAGE("The opposing Zekrom is radiating a blazing aura!");
    }
}

SINGLE_BATTLE_TEST("Multi - Switch-In abilities display text correctly 2")
{
    GIVEN {
        PLAYER(SPECIES_XERNEAS) { Ability(ABILITY_FAIRY_AURA); Innates(ABILITY_AS_ONE_ICE_RIDER, ABILITY_PASTEL_VEIL, ABILITY_DOWNLOAD);
            Moves(MOVE_DAZZLING_GLEAM, MOVE_CELEBRATE); Item(ITEM_ORAN_BERRY); Status1(STATUS1_POISON); } 
        OPPONENT(SPECIES_YVELTAL) { Ability(ABILITY_DARK_AURA); Innates(ABILITY_ANTICIPATION, ABILITY_FRISK, ABILITY_FOREWARN); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FAIRY_AURA);
        MESSAGE("Xerneas is radiating a fairy aura!");
        ABILITY_POPUP(player, ABILITY_DOWNLOAD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Xerneas's Download raised its Attack!");
        ABILITY_POPUP(player, ABILITY_PASTEL_VEIL);
        MESSAGE("Xerneas was cured of its poisoning!");
        ABILITY_POPUP(player, ABILITY_AS_ONE_ICE_RIDER);
        MESSAGE("Xerneas has two Abilities!");
        ABILITY_POPUP(player, ABILITY_UNNERVE);
        MESSAGE("The opposing team is too nervous to eat Berries!");
        ABILITY_POPUP(opponent, ABILITY_DARK_AURA);
        MESSAGE("The opposing Yveltal is radiating a dark aura!");
        ABILITY_POPUP(opponent, ABILITY_FOREWARN);
        MESSAGE("Forewarn alerted the opposing Yveltal to Xerneas's Dazzling Gleam!");
        ABILITY_POPUP(opponent, ABILITY_FRISK);
        MESSAGE("The opposing Yveltal frisked Xerneas and found its Oran Berry!");
        ABILITY_POPUP(opponent, ABILITY_ANTICIPATION);
        MESSAGE("The opposing Yveltal shuddered!");
    }
}

// Mirror Armor only activates if a stat drop would land. Protection abilities prevent Mirror Armor from triggering.

SINGLE_BATTLE_TEST("Multi - Guard Dog gets priority over Intimidate negation abilities")
{
    u32 ability, innate1, innate2, innate3;
    PARAMETRIZE { ability = ABILITY_INNER_FOCUS; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_LEVITATE; innate3 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability = ABILITY_INNER_FOCUS; innate1 = ABILITY_GUARD_DOG; innate2 = ABILITY_SCRAPPY; innate3 = ABILITY_OWN_TEMPO; }
    GIVEN {
        PLAYER(SPECIES_MABOSSTIFF) { Ability(ability); Innates(innate1, innate2, innate3); } 
        OPPONENT(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE);} 
    } WHEN {
        TURN {  }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        if (innate1 == ABILITY_GUARD_DOG)
        {
            ABILITY_POPUP(player, ABILITY_GUARD_DOG);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Mabosstiff's Attack rose!");
        }
        else
        {
            ABILITY_POPUP(player, ABILITY_INNER_FOCUS);
            MESSAGE("Mabosstiff's Inner Focus prevents stat loss!");
        }
    }
}

// Conflicting battlescripts block
SINGLE_BATTLE_TEST("Multi - Dry Skin, Rain Dish, and Solar Power can stack")
{
    u32 ability, innate1, species;
    PARAMETRIZE { ability = ABILITY_DRY_SKIN; innate1 = ABILITY_LEVITATE; species = SPECIES_KYOGRE; }
    PARAMETRIZE { ability = ABILITY_DRY_SKIN; innate1 = ABILITY_LEVITATE; species = SPECIES_GROUDON;}
    PARAMETRIZE { ability = ABILITY_DRY_SKIN; innate1 = ABILITY_RAIN_DISH; species = SPECIES_KYOGRE;}
    PARAMETRIZE { ability = ABILITY_DRY_SKIN; innate1 = ABILITY_SOLAR_POWER; species = SPECIES_GROUDON;}

    GIVEN {
        PLAYER(SPECIES_PARASECT) { Ability(ability); Innates(innate1); HP(50); MaxHP(100); } 
        OPPONENT(species);
    } WHEN {
        TURN {  }
    } SCENE {
        if (innate1 == ABILITY_LEVITATE && species == SPECIES_KYOGRE)
        {
            ABILITY_POPUP(player, ABILITY_DRY_SKIN);
            MESSAGE("Parasect's Dry Skin restored its HP a little!");
            HP_BAR(player, damage: -100 / 8);
            
        }
        else if (innate1 == ABILITY_LEVITATE && species == SPECIES_GROUDON)
        {
            ABILITY_POPUP(player, ABILITY_DRY_SKIN);
            HP_BAR(player, damage: 100 / 8);
            MESSAGE("Parasect's Dry Skin takes its toll!");
        }
        else if (innate1 == ABILITY_RAIN_DISH)
        {
            ABILITY_POPUP(player, ABILITY_RAIN_DISH);
            MESSAGE("Parasect's Rain Dish restored its HP a little!");
            HP_BAR(player, damage: -300 / 16); // 1/16 + 1/8
        }
        else if (innate1 == ABILITY_SOLAR_POWER)
        {
            ABILITY_POPUP(player, ABILITY_SOLAR_POWER);
            HP_BAR(player, damage: 200 / 8); // 1/8 + 1/8
            MESSAGE("Parasect's Solar Power takes its toll!");
        }
    }
}

SINGLE_BATTLE_TEST("Multi - Gooey and Tangling Hair can stack")
{
    GIVEN {
        PLAYER(SPECIES_GOOMY) { Ability(ABILITY_GOOEY); Innates(ABILITY_TANGLING_HAIR); } 
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_TANGLING_HAIR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wobbuffet's Speed fell!");
        ABILITY_POPUP(player, ABILITY_GOOEY);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wobbuffet's Speed fell!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 2);
    }
}

SINGLE_BATTLE_TEST("Multi - Return damage abilities stack correctly", s16 damage7)
{
    u32 ability, innate1, innate2, innate3;
    PARAMETRIZE { ability = ABILITY_ROUGH_SKIN; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_LEVITATE; innate3 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability = ABILITY_ROUGH_SKIN; innate1 = ABILITY_IRON_BARBS; innate2 = ABILITY_LEVITATE; innate3 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability = ABILITY_ROUGH_SKIN; innate1 = ABILITY_IRON_BARBS; innate2 = ABILITY_AFTERMATH; innate3 = ABILITY_LEVITATE; }
    PARAMETRIZE { ability = ABILITY_ROUGH_SKIN; innate1 = ABILITY_IRON_BARBS; innate2 = ABILITY_AFTERMATH; innate3 = ABILITY_INNARDS_OUT; }

    GIVEN {
        PLAYER(SPECIES_FERROSEED) { Ability(ability); Innates(innate1, innate2, innate3); HP(25);} 
        OPPONENT(SPECIES_INFERNAPE) {MaxHP(100); HP(100); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_FIRE_PUNCH); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ROUGH_SKIN);
        HP_BAR(opponent, captureDamage: &results[i].damage7);
        MESSAGE("The opposing Infernape was hurt by Ferroseed's Rough Skin!");
        if (innate1 == ABILITY_IRON_BARBS)
        {
            ABILITY_POPUP(player, ABILITY_IRON_BARBS);
            MESSAGE("The opposing Infernape was hurt by Ferroseed's Iron Barbs!");
        }
        if (innate2 == ABILITY_AFTERMATH)
        {
            ABILITY_POPUP(player, ABILITY_AFTERMATH);
            MESSAGE("The opposing Infernape was hurt!");
        }
        if (innate3 == ABILITY_INNARDS_OUT)
        {
            ABILITY_POPUP(player, ABILITY_INNARDS_OUT);
            MESSAGE("The opposing Infernape was hurt!");
        }
    } FINALLY {
        EXPECT_GT(results[1].damage7, results[0].damage7);
        EXPECT_GT(results[2].damage7, results[1].damage7);
        EXPECT_GT(results[3].damage7, results[2].damage7);
    }
}

SINGLE_BATTLE_TEST("Multi - Status ailment abilities don't conflict with each other (Sleep)")
{
    // (11%) Sleep has the highest priority and Effect Spore is the only ability that inflicts sleep
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_EFFECT_SPORE); Innates(ABILITY_STATIC, ABILITY_POISON_POINT, ABILITY_FLAME_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("The opposing Breloom's Effect Spore made Wobbuffet sleep!");
        STATUS_ICON(player, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Multi - Status ailment abilities don't conflict with each other (Paralysis 1)")
{

    PASSES_RANDOMLY(10, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_EFFECT_SPORE); Innates(ABILITY_LIGHT_METAL, ABILITY_POISON_POINT, ABILITY_FLAME_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
        MESSAGE("The opposing Breloom's Effect Spore paralyzed Wobbuffet, so it may be unable to move!");
        STATUS_ICON(player, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Multi - Status ailment abilities don't conflict with each other (Paralysis 2)")
{

    PASSES_RANDOMLY(30, 100, RNG_STATIC);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_LIGHT_METAL); Innates(ABILITY_STATIC, ABILITY_POISON_POINT, ABILITY_FLAME_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_STATIC);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
        MESSAGE("The opposing Breloom's Static paralyzed Wobbuffet, so it may be unable to move!");
        STATUS_ICON(player, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Multi - Status ailment abilities don't conflict with each other (Burn)")
{

    PASSES_RANDOMLY(30, 100, RNG_FLAME_BODY);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_LIGHT_METAL); Innates(ABILITY_LIGHT_METAL, ABILITY_POISON_POINT, ABILITY_FLAME_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_FLAME_BODY);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, player);
        MESSAGE("The opposing Breloom's Flame Body burned Wobbuffet!");
        STATUS_ICON(player, burn: TRUE);
    }
}

SINGLE_BATTLE_TEST("Multi - Status ailment abilities don't conflict with each other (Poison)")
{

    PASSES_RANDOMLY(30, 100, RNG_POISON_POINT);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_EFFECT_SPORE); Innates(ABILITY_LIGHT_METAL, ABILITY_POISON_POINT, ABILITY_LIGHT_METAL); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_POISON_POINT);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
        MESSAGE("Wobbuffet was poisoned by the opposing Breloom's Poison Point!");
        STATUS_ICON(player, poison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Multi - Ruin Abilities stack correctly")
{
    s16 damage8[8];

    GIVEN {
        PLAYER(SPECIES_TING_LU) { Ability(ABILITY_LIGHT_METAL); }
        PLAYER(SPECIES_TING_LU) { Ability(ABILITY_VESSEL_OF_RUIN); Innates(ABILITY_TABLETS_OF_RUIN, ABILITY_SWORD_OF_RUIN, ABILITY_BEADS_OF_RUIN); }
        OPPONENT(SPECIES_WOBBUFFET) { Attack(100); SpAttack(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_GUST); MOVE(player, MOVE_GUST); }
        TURN { MOVE(opponent, MOVE_SCRATCH); MOVE(player, MOVE_SCRATCH); }
        TURN { SWITCH(player, 1); }
        TURN { MOVE(opponent, MOVE_GUST); MOVE(player, MOVE_GUST); }
        TURN { MOVE(opponent, MOVE_SCRATCH); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, opponent);
        HP_BAR(player, captureDamage: &damage8[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, player);
        HP_BAR(opponent, captureDamage: &damage8[1]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player, captureDamage: &damage8[2]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &damage8[3]);
        ABILITY_POPUP(player, ABILITY_BEADS_OF_RUIN);
        MESSAGE("Ting-Lu's Beads of Ruin weakened the Sp. Def of all surrounding Pokémon!");
        ABILITY_POPUP(player, ABILITY_TABLETS_OF_RUIN);
        MESSAGE("Ting-Lu's Tablets of Ruin weakened the Attack of all surrounding Pokémon!");
        ABILITY_POPUP(player, ABILITY_SWORD_OF_RUIN);
        MESSAGE("Ting-Lu's Sword of Ruin weakened the Defense of all surrounding Pokémon!");
        ABILITY_POPUP(player, ABILITY_VESSEL_OF_RUIN);
        MESSAGE("Ting-Lu's Vessel of Ruin weakened the Sp. Atk of all surrounding Pokémon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, opponent);
        HP_BAR(player, captureDamage: &damage8[4]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, player);
        HP_BAR(opponent, captureDamage: &damage8[5]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player, captureDamage: &damage8[6]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &damage8[7]);
    } 
    THEN {
        EXPECT_MUL_EQ(damage8[4], Q_4_12(1.33), damage8[0]);
        EXPECT_MUL_EQ(damage8[1], Q_4_12(1.33), damage8[5]);
        EXPECT_MUL_EQ(damage8[6], Q_4_12(1.33), damage8[2]);
        EXPECT_MUL_EQ(damage8[3], Q_4_12(1.33), damage8[7]);
    }
}

SINGLE_BATTLE_TEST("Multi - Intrepid Sword and Dauntless Shield don't conflict")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ZACIAN) { Ability(ABILITY_INTREPID_SWORD); Innates(ABILITY_DAUNTLESS_SHIELD); }
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zacian's Dauntless Shield raised its Defense!");
        ABILITY_POPUP(opponent, ABILITY_INTREPID_SWORD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zacian's Intrepid Sword raised its Attack!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}


SINGLE_BATTLE_TEST("Multi - Embody Aspect can raise multiple stats")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_OGERPON) { Ability(ABILITY_EMBODY_ASPECT_TEAL_MASK); Innates(ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK, ABILITY_EMBODY_ASPECT_WELLSPRING_MASK, ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Ogerpon's Embody Aspect raised its Defense!");
        ABILITY_POPUP(opponent, ABILITY_EMBODY_ASPECT_WELLSPRING_MASK);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Ogerpon's Embody Aspect raised its Sp. Def!");
        ABILITY_POPUP(opponent, ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Ogerpon's Embody Aspect raised its Attack!");
        ABILITY_POPUP(opponent, ABILITY_EMBODY_ASPECT_TEAL_MASK);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Ogerpon's Embody Aspect raised its Speed!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(opponent->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}


SINGLE_BATTLE_TEST("Multi - Wind Rider negates Wind Power")
{
    s16 dmgBefore, dmgAfter;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_LIMBER); Speed(5) ;} // Limber, so it doesn't get paralyzed.
        OPPONENT(SPECIES_WATTREL) { Ability(ABILITY_WIND_POWER); Innates(ABILITY_WIND_RIDER); Speed(10); }
    } WHEN {
        TURN { MOVE(player, MOVE_AIR_CUTTER); MOVE(opponent, MOVE_TAILWIND);}
        TURN { MOVE(opponent, MOVE_THUNDERBOLT); }
        TURN { MOVE(opponent, MOVE_THUNDERBOLT); }
    } SCENE {

        MESSAGE("The opposing Wattrel used Tailwind!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponent);
        MESSAGE("The Tailwind blew from behind the opposing team!");
        ABILITY_POPUP(opponent, ABILITY_WIND_RIDER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wattrel's Attack rose!");
        MESSAGE("Wobbuffet used Air Cutter!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AIR_CUTTER, player);
            ABILITY_POPUP(opponent, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Air Cutter charged the opposing Wattrel with power!");
        }
        ABILITY_POPUP(opponent, ABILITY_WIND_RIDER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wattrel's Attack rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDERBOLT, opponent);
        HP_BAR(player, captureDamage: &dmgBefore);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDERBOLT, opponent);
        HP_BAR(player, captureDamage: &dmgAfter);
    }
    THEN {
        {
            EXPECT_EQ(dmgAfter, dmgBefore); // First Thunderbolt is not charged
            EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2); //Wind Rider activated twice
        }
    }
}

SINGLE_BATTLE_TEST("Multi - Wind Power takes priority over Electromorphosis")
{
    s16 dmgBefore, dmgAfter;
    u16 move;

    PARAMETRIZE {move = MOVE_SCRATCH; }
    PARAMETRIZE {move = MOVE_GUST; }

    GIVEN {
        ASSUME(!IsBattleMoveStatus(MOVE_SCRATCH));
        ASSUME(!IsBattleMoveStatus(MOVE_GUST));
        ASSUME(GetMoveCategory(MOVE_GUST) == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(!IsBattleMoveStatus(MOVE_THUNDER_SHOCK));
        ASSUME(GetMoveType(MOVE_THUNDER_SHOCK) == TYPE_ELECTRIC);

        PLAYER(SPECIES_BELLIBOLT) { Ability(ABILITY_ELECTROMORPHOSIS); Innates(ABILITY_WIND_POWER); Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) {Ability(ABILITY_LIMBER); Speed(5) ;} // Limber, so it doesn't get paralyzed.
    }
    WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK), MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_THUNDER_SHOCK), MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent, captureDamage: &dmgBefore);

        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        HP_BAR(player);
        
        if (move == MOVE_SCRATCH) {
            ABILITY_POPUP(player, ABILITY_ELECTROMORPHOSIS);
            MESSAGE("Being hit by Scratch charged Bellibolt with power!");
        }
        else {
            ABILITY_POPUP(player, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Gust charged Bellibolt with power!");
        }

        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent, captureDamage: &dmgAfter);

        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        HP_BAR(player);
        if (move == MOVE_SCRATCH) {
            ABILITY_POPUP(player, ABILITY_ELECTROMORPHOSIS);
            MESSAGE("Being hit by Scratch charged Bellibolt with power!");
        }
        else {
            ABILITY_POPUP(player, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Gust charged Bellibolt with power!");
        }
    }
    THEN {
        EXPECT_MUL_EQ(dmgBefore, Q_4_12(2.0), dmgAfter);
    }
}

SINGLE_BATTLE_TEST("Multi - Toxic Chain gets priority over Poison Touch and does not conflict")
{
    GIVEN {
        ASSUME(GetMovePower(MOVE_SCRATCH) > 0);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_GRIMER) { Ability(ABILITY_POISON_TOUCH); Innates(ABILITY_TOXIC_CHAIN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        ABILITY_POPUP(player, ABILITY_TOXIC_CHAIN);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        MESSAGE("The opposing Wobbuffet was badly poisoned!");
        STATUS_ICON(opponent, badPoison: TRUE);
    } THEN {
        EXPECT(opponent->status1 & STATUS1_TOXIC_POISON);
    }
}

SINGLE_BATTLE_TEST("Multi - Stat raising abilities do not conflict")
{
    GIVEN {
        PLAYER(SPECIES_PORYGON) { Ability(ABILITY_DOWNLOAD); Innates(ABILITY_SPEED_BOOST, ABILITY_MOODY, ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_WOBBUFFET) {Defense(200); SpDefense(100);}
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DOWNLOAD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Porygon's Download raised its Sp. Atk!");
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Porygon's Intimidate cuts the opposing Wobbuffet's Attack!");
        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Porygon's Speed Boost raised its Speed!");
        ABILITY_POPUP(player, ABILITY_MOODY);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NONE_OF {
            MESSAGE("Porygon's Speed rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_ON_SWITCHIN abilities do not conflict 1")
{
    GIVEN {
        PLAYER(SPECIES_DITTO) { Ability(ABILITY_IMPOSTER); Innates(ABILITY_MOLD_BREAKER, ABILITY_UNNERVE, ABILITY_DOWNLOAD); }
        OPPONENT(SPECIES_MEWTWO) {Ability(ABILITY_PRESSURE); Innates(ABILITY_DARK_AURA, ABILITY_DRIZZLE, ABILITY_PSYCHIC_SURGE); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DOWNLOAD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Ditto's Download raised its Sp. Atk!");
        ABILITY_POPUP(player, ABILITY_UNNERVE);
        MESSAGE("The opposing team is too nervous to eat Berries!");
        ABILITY_POPUP(player, ABILITY_MOLD_BREAKER);
        MESSAGE("Ditto breaks the mold!");
        ABILITY_POPUP(player, ABILITY_IMPOSTER);
        MESSAGE("Ditto transformed into the opposing Mewtwo using Imposter!");
        ABILITY_POPUP(opponent, ABILITY_PSYCHIC_SURGE);
        MESSAGE("The battlefield got weird!");
        ABILITY_POPUP(opponent, ABILITY_DRIZZLE);
        MESSAGE("The opposing Mewtwo's Drizzle made it rain!");
        ABILITY_POPUP(opponent, ABILITY_DARK_AURA);
        MESSAGE("The opposing Mewtwo is radiating a dark aura!");
        ABILITY_POPUP(opponent, ABILITY_PRESSURE);
        MESSAGE("The opposing Mewtwo is exerting its pressure!");
    }
}

DOUBLE_BATTLE_TEST("Multi - ABILITYEFFECT_ON_SWITCHIN abilities do not conflict 2")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SCOLIPEDE) { HP(50); MaxHP(100); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_SLOWKING_GALAR) { Ability(ABILITY_CURIOUS_MEDICINE); Innates(ABILITY_UNNERVE, ABILITY_INTIMIDATE, ABILITY_HOSPITALITY); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_QUIVER_DANCE); MOVE(playerLeft, MOVE_CHARM, target: opponentLeft); }
        TURN { SWITCH(opponentRight, 2); MOVE(playerLeft, MOVE_CELEBRATE); }
    } SCENE {
        // Turn 1 - buff up
        MESSAGE("The opposing Scolipede used Quiver Dance!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        // Turn 2 - Switch into Slowking
        MESSAGE("2 sent out Slowking!");
        ABILITY_POPUP(opponentRight, ABILITY_HOSPITALITY);
        MESSAGE("The opposing Scolipede drank down all the matcha that the opposing Slowking made!");
        HP_BAR(opponentLeft);
        ABILITY_POPUP(opponentRight, ABILITY_CURIOUS_MEDICINE);
        MESSAGE("The opposing Scolipede's stat changes were removed!");
        ABILITY_POPUP(opponentRight, ABILITY_UNNERVE);
        MESSAGE("Your team is too nervous to eat Berries!");
        ABILITY_POPUP(opponentRight, ABILITY_INTIMIDATE);
        MESSAGE("The opposing Slowking's Intimidate cuts Wobbuffet's Attack!");
        MESSAGE("The opposing Slowking's Intimidate cuts Wobbuffet's Attack!");
    } THEN {
        EXPECT_EQ(opponentLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_SPATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_ACC], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_EVASION], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_ENDTURN abilities do not conflict")
{
    GIVEN {
        PLAYER(SPECIES_BLAZIKEN_MEGA) { Ability(ABILITY_SPEED_BOOST); Innates(ABILITY_MOODY, ABILITY_HARVEST, ABILITY_BAD_DREAMS); Item(ITEM_ORAN_BERRY); HP(20); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_SLEEP); }
    } WHEN {
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_HARVEST);
        MESSAGE("Blaziken harvested its Oran Berry!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Blaziken's Speed Boost raised its Speed!");
        ABILITY_POPUP(player, ABILITY_MOODY);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ABILITY_POPUP(player, ABILITY_BAD_DREAMS);
        MESSAGE("The opposing Wobbuffet is tormented!");
        HP_BAR(opponent);
    }
}


SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_ENDTURN item Harvest and Pickup takes priority over Pickup if both activate on the same item slot")
{
    // Ball Fetch and Cud Chew here to make sure they don't conflict
    GIVEN {
        PLAYER(SPECIES_EXEGGUTOR) { Ability(ABILITY_HARVEST); Innates(ABILITY_PICKUP, ABILITY_BALL_FETCH, ABILITY_CUD_CHEW); MaxHP(500); HP(251); Item(ITEM_SITRUS_BERRY); }
        OPPONENT(SPECIES_NINETALES){ Ability(ABILITY_DROUGHT); Item(ITEM_PECHA_BERRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_POISON_STING); MOVE(opponent, MOVE_SCRATCH);}
    } SCENE {
        MESSAGE("The opposing Ninetales's Drought intensified the sun's rays!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_STING, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("The opposing Ninetales's Pecha Berry cured its poison!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Exeggutor restored its health using its Sitrus Berry!");
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_HARVEST);
        MESSAGE("Exeggutor harvested its Sitrus Berry!");
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_PICKUP);
            MESSAGE("Exeggutor found one Pecha Berry!");
        }
    } THEN {
        EXPECT_EQ(player->item, ITEM_SITRUS_BERRY);
    }
}

WILD_BATTLE_TEST("Multi - ABILITYEFFECT_ENDTURN Harvest and Pickup take priority over Ball Fetch")
{
    // Ball Fetch and Cud Chew here to make sure they don't conflict
    u32 ability;

    PARAMETRIZE { ability = ABILITY_HARVEST; }
    PARAMETRIZE { ability = ABILITY_PICKUP; }

    GIVEN {
        PLAYER(SPECIES_YAMPER) { Ability(ABILITY_BALL_FETCH); Innates(ability, ABILITY_CUD_CHEW); MaxHP(500); HP(251); Item(ITEM_SITRUS_BERRY); }
        OPPONENT(SPECIES_NINETALES){ Ability(ABILITY_DROUGHT); Item(ITEM_NORMAL_GEM); }
    } WHEN {
        TURN { USE_ITEM(player, ITEM_GREAT_BALL, WITH_RNG(RNG_BALLTHROW_SHAKE, MAX_u16) ); MOVE(opponent, MOVE_SCRATCH);}
    } SCENE {
        MESSAGE("The wild Ninetales's Drought intensified the sun's rays!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("The Normal Gem strengthened the wild Ninetales's power!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Yamper restored its health using its Sitrus Berry!");
        HP_BAR(player);
        if (ability == ABILITY_HARVEST)
        {
            ABILITY_POPUP(player, ABILITY_HARVEST);
            MESSAGE("Yamper harvested its Sitrus Berry!");
        }
        else
        {
            ABILITY_POPUP(player, ABILITY_PICKUP);
            MESSAGE("Yamper found one Normal Gem!");
        }
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_BALL_FETCH);
            MESSAGE("Yamper found a Great Ball!");
        }

    } THEN {
        if (ability == ABILITY_HARVEST)
            EXPECT_EQ(player->item, ITEM_SITRUS_BERRY);
        else
            EXPECT_EQ(player->item, ITEM_NORMAL_GEM);
    }
}

DOUBLE_BATTLE_TEST("Multi - ABILITYEFFECT_ENDTURN_STATUS_CURE abilities do not conflict (only one activates at a time)")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_HYDRATION; }
    PARAMETRIZE { ability = ABILITY_LEVITATE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KYOGRE) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_CHANSEY) { Ability(ABILITY_HEALER); Innates(ability, ABILITY_SHED_SKIN); Status1(STATUS1_BURN); }
    } WHEN {
        TURN { }
    } SCENE {
        if (ability == ABILITY_HYDRATION)
        {
            MESSAGE("The opposing Chansey's Hydration cured its burn problem!");
        }
        else
        {
            MESSAGE("The opposing Chansey's Shed Skin cured its burn problem!");
        }
        ABILITY_POPUP(opponentRight, ABILITY_HEALER);
        MESSAGE("The opposing Chansey's Healer cured the opposing Kyogre's problem!");
        NONE_OF {
            STATUS_ICON(opponentLeft, burn: TRUE);
            STATUS_ICON(opponentRight, burn: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_MOVE_END_ATTACKER abilities do not conflict (only one activates at a time)")
{
    u32 ability, innate1, innate2, innate3;
    PARAMETRIZE { ability = ABILITY_POISON_TOUCH; innate1 = ABILITY_TOXIC_CHAIN; innate2 = ABILITY_STENCH; innate3 = ABILITY_POISON_PUPPETEER; }
    PARAMETRIZE { ability = ABILITY_LEVITATE; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_STENCH; innate3 = ABILITY_POISON_PUPPETEER; }
    PARAMETRIZE { ability = ABILITY_LEVITATE; innate1 = ABILITY_LEVITATE; innate2 = ABILITY_STENCH; innate3 = ABILITY_LEVITATE; }
    GIVEN {
        PLAYER(SPECIES_PECHARUNT) { Ability(ability); Innates(innate1, innate2, innate3); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_POISON_STING); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_STING, player);
        if (innate1 == ABILITY_TOXIC_CHAIN)
        {
            ABILITY_POPUP(player, ABILITY_TOXIC_CHAIN);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            MESSAGE("The opposing Wobbuffet was badly poisoned!");
            STATUS_ICON(opponent, badPoison: TRUE);
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_POISON_TOUCH);
                ABILITY_POPUP(player, ABILITY_POISON_PUPPETEER);
            }
        }
        else if (innate3 == ABILITY_POISON_PUPPETEER)
        {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            MESSAGE("The opposing Wobbuffet was poisoned!");
            ABILITY_POPUP(player, ABILITY_POISON_PUPPETEER);
            MESSAGE("The opposing Wobbuffet became confused!");
        }
        else if (innate2 == ABILITY_STENCH)
        {
            MESSAGE("The opposing Wobbuffet flinched and couldn't move!");
        }
    }
}

SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_MOVE_END abilities do not conflict 1")
{
    GIVEN {
        PLAYER(SPECIES_MUDSDALE) { Ability(ABILITY_STAMINA); Innates(ABILITY_WEAK_ARMOR, ABILITY_CURSED_BODY, ABILITY_GOOEY); }
        OPPONENT(SPECIES_DUGTRIO_ALOLA) { Ability(ABILITY_TANGLING_HAIR); Innates(ABILITY_IRON_BARBS, ABILITY_FLAME_BODY, ABILITY_COTTON_DOWN); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        ABILITY_POPUP(player, ABILITY_GOOEY);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Dugtrio's Speed fell!");
        ABILITY_POPUP(player, ABILITY_CURSED_BODY);
        MESSAGE("The opposing Dugtrio's Scratch was disabled by Mudsdale's Cursed Body!");
        ABILITY_POPUP(player, ABILITY_WEAK_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mudsdale's Weak Armor lowered its Defense!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mudsdale's Weak Armor sharply raised its Speed!");
        ABILITY_POPUP(player, ABILITY_STAMINA);
        MESSAGE("Mudsdale's Defense rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        ABILITY_POPUP(opponent, ABILITY_COTTON_DOWN);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mudsdale's Speed fell!");
        ABILITY_POPUP(opponent, ABILITY_FLAME_BODY);
        MESSAGE("The opposing Dugtrio's Flame Body burned Mudsdale!");
        STATUS_ICON(player, burn: TRUE);
        ABILITY_POPUP(opponent, ABILITY_IRON_BARBS);
        MESSAGE("Mudsdale was hurt by the opposing Dugtrio's Iron Barbs!");
        ABILITY_POPUP(opponent, ABILITY_TANGLING_HAIR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mudsdale's Speed fell!");
    }
}

SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_MOVE_END abilities do not conflict 2")
{
    GIVEN {
        PLAYER(SPECIES_NIDOQUEEN) { Ability(ABILITY_JUSTIFIED); Innates(ABILITY_RATTLED, ABILITY_CUTE_CHARM, ABILITY_SEED_SOWER); }
        OPPONENT(SPECIES_ZOROARK) { Ability(ABILITY_WANDERING_SPIRIT); Innates(ABILITY_STEAM_ENGINE, ABILITY_ROUGH_SKIN, ABILITY_ILLUSION); }
        OPPONENT(SPECIES_DITTO);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ASSURANCE); MOVE(player, MOVE_FLAME_WHEEL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ASSURANCE, opponent);
        ABILITY_POPUP(player, ABILITY_SEED_SOWER);
        MESSAGE("Grass grew to cover the battlefield!");
        ABILITY_POPUP(player, ABILITY_CUTE_CHARM);
        MESSAGE("Nidoqueen's Cute Charm infatuated the opposing Ditto!");
        ABILITY_POPUP(player, ABILITY_RATTLED);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Nidoqueen's Speed rose!");
        ABILITY_POPUP(player, ABILITY_JUSTIFIED);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Nidoqueen's Attack rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLAME_WHEEL, player);
        ABILITY_POPUP(opponent, ABILITY_STEAM_ENGINE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Ditto's Speed drastically rose!");
        MESSAGE("The opposing Zoroark's illusion wore off!");
        ABILITY_POPUP(opponent, ABILITY_ROUGH_SKIN);
        HP_BAR(player);
        MESSAGE("Nidoqueen was hurt by the opposing Zoroark's Rough Skin!");
        MESSAGE("The opposing Zoroark swapped Abilities with its target!");
    }
}

SINGLE_BATTLE_TEST("Multi - ABILITYEFFECT_COLOR_CHANGE abilities do not conflict")
{
    GIVEN {
        PLAYER(SPECIES_CHARIZARD) { Ability(ABILITY_COLOR_CHANGE); Innates(ABILITY_BERSERK, ABILITY_ANGER_SHELL); }
        OPPONENT(SPECIES_BLASTOISE) { SpAttack(300); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        MESSAGE("It's super effective!");
        ABILITY_POPUP(player, ABILITY_COLOR_CHANGE);
        MESSAGE("Charizard's Color Change made it the Water type!");
        ABILITY_POPUP(player, ABILITY_ANGER_SHELL);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Charizard's Defense fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Charizard's Sp. Def fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Charizard's Attack rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Charizard's Sp. Atk rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Charizard's Speed rose!");
        ABILITY_POPUP(player, ABILITY_BERSERK);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Charizard's Sp. Atk rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        MESSAGE("It's not very effective…");
    }
}

// Both blocks only activate one ability but might be possible to adjust them to activate multiple.
TO_DO_BATTLE_TEST("Multi - ABILITYEFFECT_ON_WEATHER abilities do not conflict")
TO_DO_BATTLE_TEST("Multi - ABILITYEFFECT_ON_TERRAIN abilities do not conflict")

#endif
