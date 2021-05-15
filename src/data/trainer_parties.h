static const struct TrainerMon sParty_Sawyer1[] = {
    { .lvl = 25, .species = SPECIES_GEODUDE, .difficulty = TRAINER_EASIEST, .heldItem = ITEM_RINDO_BERRY, },
    { .lvl = 25, .species = SPECIES_NUMEL,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_PASSHO_BERRY, }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    { .lvl = 27, .species = SPECIES_GRAVELER, .difficulty = TRAINER_EASIEST, .heldItem = ITEM_RINDO_BERRY, },
    { .lvl = 27, .species = SPECIES_NUMEL,    .difficulty = TRAINER_EASIEST, .heldItem = ITEM_PASSHO_BERRY, }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    { .lvl = 29, .species = SPECIES_MACHOP,   .difficulty = TRAINER_EASY, .heldItem = ITEM_AIR_BALLOON, },
    { .lvl = 29, .species = SPECIES_GRAVELER, .difficulty = TRAINER_EASY, .heldItem = ITEM_RINDO_BERRY, },
    { .lvl = 29, .species = SPECIES_NUMEL,    .difficulty = TRAINER_EASY, .heldItem = ITEM_PASSHO_BERRY, }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    { .lvl = 31, .species = SPECIES_MACHOKE,  .difficulty = TRAINER_EASY, .heldItem = ITEM_AIR_BALLOON, },
    { .lvl = 31, .species = SPECIES_GRAVELER, .difficulty = TRAINER_EASY, .heldItem = ITEM_RINDO_BERRY, },
    { .lvl = 31, .species = SPECIES_NUMEL,    .difficulty = TRAINER_EASY, .heldItem = ITEM_PASSHO_BERRY, }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    { .lvl = 33, .species = SPECIES_MACHAMP,  .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_AIR_BALLOON, },
    { .lvl = 33, .species = SPECIES_GOLEM,    .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_RINDO_BERRY, },
    { .lvl = 33, .species = SPECIES_CAMERUPT, .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_PASSHO_BERRY, }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    { .lvl = 48, .species = SPECIES_MIGHTYENA, },
    { .lvl = 48, .species = SPECIES_PALPITOAD, }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    { .lvl = 48, .species = SPECIES_GOLBAT, },
    { .lvl = 48, .species = SPECIES_SHARPEDO, }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    { .lvl = 48, .species = SPECIES_GOLBAT, },
    { .lvl = 48, .species = SPECIES_GASTRODON, }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    { .lvl = 49, .species = SPECIES_SHARPEDO, },
    { .lvl = 49, .species = SPECIES_SLOWBRO, }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    { .lvl = 59, .species = SPECIES_MIGHTYENA, },
    { .lvl = 59, .species = SPECIES_SLOWBRO, }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    { .lvl = 59, .species = SPECIES_CARVANHA, },
    { .lvl = 59, .species = SPECIES_GASTRODON, }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    { .lvl = 59, .species = SPECIES_CROBAT, },
    { .lvl = 59, .species = SPECIES_GASTRODON, }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    { .lvl = 40, .species = SPECIES_SKITTY,    .difficulty = TRAINER_EASY,
                 .heldItem = ITEM_EVIOLITE,    .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_SUCKER_PUNCH, MOVE_WISH} },
    { .lvl = 40, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_EASY, },
    { .lvl = 40, .species = SPECIES_LINOONE,   .difficulty = TRAINER_EASY,
                 .heldItem = ITEM_FIGY_BERRY,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_ROTOTILLER, MOVE_PURSUIT} },
    { .lvl = 40, .species = SPECIES_LOMBRE,    .difficulty = TRAINER_EASY,
      .moves =   {MOVE_BUBBLE_BEAM, MOVE_NATURE_POWER, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT} },
    { .lvl = 40, .species = SPECIES_NUZLEAF,   .difficulty = TRAINER_EASY,
      .moves =   {MOVE_RAZOR_LEAF, MOVE_ROLLOUT, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT} },
    { .lvl = 40, .species = SPECIES_SWELLOW,   .difficulty = TRAINER_EASY,
      .shiny = TRUE, .ability = ABILITY_HIDDEN, .nature = NATURE_ADAMANT, }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    { .lvl = 43, .species = SPECIES_SKITTY,    .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_EVIOLITE,    .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_SUCKER_PUNCH, MOVE_WISH} },
    { .lvl = 43, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_MEDIUM, },
    { .lvl = 43, .species = SPECIES_LINOONE,   .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_FIGY_BERRY,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_ROTOTILLER, MOVE_PURSUIT} },
    { .lvl = 43, .species = SPECIES_LOMBRE,    .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_BUBBLE_BEAM, MOVE_NATURE_POWER, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT} },
    { .lvl = 43, .species = SPECIES_NUZLEAF,   .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_RAZOR_LEAF, MOVE_ROLLOUT, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT} },
    { .lvl = 43, .species = SPECIES_SWELLOW,   .difficulty = TRAINER_MEDIUM,
      .shiny = TRUE, .ability = ABILITY_HIDDEN, .nature = NATURE_ADAMANT, }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    { .lvl = 46, .species = SPECIES_SKITTY,    .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_EVIOLITE,    .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_SUCKER_PUNCH, MOVE_WISH} },
    { .lvl = 46, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_MEDIUM, },
    { .lvl = 46, .species = SPECIES_LINOONE,   .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_FIGY_BERRY,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_ROTOTILLER, MOVE_PURSUIT} },
    { .lvl = 46, .species = SPECIES_LOMBRE,    .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_BUBBLE_BEAM, MOVE_NATURE_POWER, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT} },
    { .lvl = 46, .species = SPECIES_NUZLEAF,   .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_RAZOR_LEAF, MOVE_ROLLOUT, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT} },
    { .lvl = 46, .species = SPECIES_SWELLOW,   .difficulty = TRAINER_MEDIUM,
      .shiny = TRUE, .ability = ABILITY_HIDDEN, .nature = NATURE_ADAMANT, }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    { .lvl = 49, .species = SPECIES_SKITTY,    .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_EVIOLITE,    .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_SUCKER_PUNCH, MOVE_WISH} },
    { .lvl = 49, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_MEDIUM, },
    { .lvl = 49, .species = SPECIES_LINOONE,   .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_FIGY_BERRY,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_ROTOTILLER, MOVE_PURSUIT} },
    { .lvl = 49, .species = SPECIES_LUDICOLO,    .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_MUDDY_WATER, MOVE_NATURE_POWER, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT} },
    { .lvl = 49, .species = SPECIES_SHIFTRY,   .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_LEAF_BLADE, MOVE_LEAF_TORNADO, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT} },
    { .lvl = 49, .species = SPECIES_SWELLOW,   .difficulty = TRAINER_MEDIUM,
      .shiny = TRUE, .ability = ABILITY_HIDDEN, .nature = NATURE_ADAMANT, }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    { .lvl = 52, .species = SPECIES_SKITTY,    .difficulty = TRAINER_HARD,
                 .heldItem = ITEM_EVIOLITE,    .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_SUCKER_PUNCH, MOVE_WISH} },
    { .lvl = 52, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_HARD, },
    { .lvl = 52, .species = SPECIES_LINOONE,   .difficulty = TRAINER_HARD,
                 .heldItem = ITEM_FIGY_BERRY,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_ROTOTILLER, MOVE_PURSUIT} },
    { .lvl = 52, .species = SPECIES_LUDICOLO,    .difficulty = TRAINER_HARD,
      .moves =   {MOVE_MUDDY_WATER, MOVE_NATURE_POWER, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT} },
    { .lvl = 52, .species = SPECIES_SHIFTRY,   .difficulty = TRAINER_HARD,
      .moves =   {MOVE_LEAF_BLADE, MOVE_LEAF_TORNADO, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT} },
    { .lvl = 52, .species = SPECIES_SWELLOW,   .difficulty = TRAINER_HARD,
      .shiny = TRUE, .ability = ABILITY_HIDDEN, .nature = NATURE_ADAMANT, }
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    { .lvl = 9, .species = SPECIES_POOCHYENA, },
    { .lvl = 9, .species = SPECIES_SENTRET, }
};

static const struct TrainerMon sParty_Marcel[] = {
    { .lvl = 37, .species = SPECIES_MANECTRIC, .difficulty = TRAINER_HARDER,
                 .heldItem = ITEM_MEGA_STONE,  .build = TRAINER_MON_SPEED_SPEC, .shiny = TRUE,
      .moves =   {MOVE_DISCHARGE, MOVE_FLAMETHROWER, MOVE_ICE_FANG, MOVE_MUD_SLAP} },
    { .lvl = 37, .species = SPECIES_SHIFTRY,   .difficulty = TRAINER_HARDER,
                 .heldItem = ITEM_CELL_BATTERY, .build = TRAINER_MON_SPEED_PHYS,
      .moves =   {MOVE_FAKE_OUT, MOVE_LEAF_BLADE, MOVE_TORMENT, MOVE_NATURE_POWER} }
};

static const struct TrainerMon sParty_Alberto[] = {
    { .difficulty = TRAINER_EASY, .lvl = 42, .species = SPECIES_PELIPPER, },
    { .difficulty = TRAINER_EASY, .lvl = 42, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Ed[] = {
    { .lvl = 40, .species = SPECIES_ZANGOOSE, .difficulty = TRAINER_EASIEST, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_CRUSH_CLAW, MOVE_REVENGE, MOVE_PURSUIT, MOVE_HONE_CLAWS} },
    { .lvl = 40, .species = SPECIES_SEVIPER,  .difficulty = TRAINER_EASIEST, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_POISON_TAIL, MOVE_VENOM_DRENCH, MOVE_GLARE, MOVE_COIL} }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    { .lvl = 60, .species = SPECIES_CARVANHA, },
    { .lvl = 60, .species = SPECIES_GASTRODON, }
};

static const struct TrainerMon sParty_Declan[] = {
    { .lvl = 51, .species = SPECIES_GYARADOS, },
    { .lvl = 51, .species = SPECIES_GASTRODON, }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    { .lvl = 11, .species = SPECIES_POOCHYENA, },
    { .lvl = 11, .species = SPECIES_GROWLITHE, }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    { .lvl = 33, .species = SPECIES_GOLBAT, },
    { .lvl = 33, .species = SPECIES_MIGHTYENA, }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    { .lvl = 33, .species = SPECIES_MIGHTYENA, },
    { .lvl = 33, .species = SPECIES_CARVANHA, }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    { .lvl = 32, .species = SPECIES_MIGHTYENA, },
    { .lvl = 32, .species = SPECIES_GOLBAT, },
    { .lvl = 32, .species = SPECIES_CARVANHA, }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    { .lvl = 15, .species = SPECIES_CARVANHA, },
    { .lvl = 15, .species = SPECIES_NOIBAT, }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    { .lvl = 15, .species = SPECIES_CARVANHA, },
    { .lvl = 16, .species = SPECIES_ZUBAT, }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    { .lvl = 54, .species = SPECIES_CAMERUPT, },
    { .lvl = 54, .species = SPECIES_RAPIDASH, }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    { .lvl = 44, .species = SPECIES_ZUBAT, },
    { .lvl = 44, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    { .lvl = 44, .species = SPECIES_CARVANHA, },
    { .lvl = 44, .species = SPECIES_SLOWPOKE, }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    { .lvl = 44, .species = SPECIES_POOCHYENA, },
    { .lvl = 44, .species = SPECIES_CARVANHA, }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    { .lvl = 33, .species = SPECIES_CARVANHA, },
    { .lvl = 33, .species = SPECIES_PINCURCHIN, }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    { .lvl = 49, .species = SPECIES_SHARPEDO, },
    { .lvl = 49, .species = SPECIES_PYUKUMUKU, }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    { .lvl = 50, .species = SPECIES_GOLBAT, },
    { .lvl = 50, .species = SPECIES_DUNSPARCE, }
};

static const struct TrainerMon sParty_Fredrick[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_HARIYAMA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_CONKELDURR, }
};

static const struct TrainerMon sParty_Matt[] = {
    { .iv = 50, .lvl = 53, .species = SPECIES_MIGHTYENA, },
    { .iv = 50, .lvl = 53, .species = SPECIES_CROBAT, }
};

static const struct TrainerMon sParty_Zander[] = {
    { .lvl = 42, .species = SPECIES_HARIYAMA, },
    { .lvl = 42, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    { .iv = 50, .lvl = 33, .species = SPECIES_CARVANHA, },
    { .iv = 50, .lvl = 33, .species = SPECIES_MIGHTYENA, },
    { .iv = 50, .lvl = 33, .species = SPECIES_GRIMER, }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    { .iv = 100, .lvl = 62, .species = SPECIES_SHARPEDO, .heldItem = ITEM_MEGA_STONE, },
    { .iv = 100, .lvl = 62, .species = SPECIES_MIGHTYENA, },
    { .iv = 100, .lvl = 62, .species = SPECIES_MUK, }

};

static const struct TrainerMon sParty_Archie[] = {
    { .iv = 150, .lvl = 61, .species = SPECIES_MIGHTYENA, },
    { .iv = 150, .lvl = 61, .species = SPECIES_CROBAT, },
    { .iv = 150, .lvl = 61, .species = SPECIES_SHARPEDO, },
    { .iv = 150, .lvl = 63, .species = SPECIES_GYARADOS, .heldItem = ITEM_MEGA_STONE, }
};

static const struct TrainerMon sParty_Leah[] = {
    { .lvl = 42, .species = SPECIES_SPOINK, },
    { .lvl = 42, .species = SPECIES_ESPURR, }
};

static const struct TrainerMon sParty_Daisy[] = {
    { .lvl = 14, .species = SPECIES_SHROOMISH, },
    { .lvl = 14, .species = SPECIES_MORELULL, }
};

static const struct TrainerMon sParty_Rose1[] = {
    { .lvl = 19, .species = SPECIES_BUDEW, },
    { .lvl = 19, .species = SPECIES_SHROOMISH, },
    { .lvl = 19, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Rose2[] = {
    { .iv = 10, .lvl = 26, .species = SPECIES_ROSELIA, },
    { .iv = 10, .lvl = 26, .species = SPECIES_SHROOMISH, },
    { .iv = 10, .lvl = 26, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Rose3[] = {
    { .iv = 20, .lvl = 28, .species = SPECIES_ROSELIA, },
    { .iv = 20, .lvl = 28, .species = SPECIES_SHROOMISH, },
    { .iv = 20, .lvl = 28, .species = SPECIES_GLOOM, },
    { .iv = 20, .lvl = 28, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Rose4[] = {
    { .iv = 30, .lvl = 31, .species = SPECIES_ROSELIA, },
    { .iv = 30, .lvl = 31, .species = SPECIES_BRELOOM, },
    { .iv = 30, .lvl = 31, .species = SPECIES_GLOOM, },
    { .iv = 30, .lvl = 31, .species = SPECIES_ROSERADE, }
};

static const struct TrainerMon sParty_Rose5[] = {
    { .iv = 40, .lvl = 34, .species = SPECIES_ROSELIA, .heldItem = ITEM_EVIOLITE },
    { .iv = 40, .lvl = 34, .species = SPECIES_BRELOOM, },
    { .iv = 40, .lvl = 34, .species = SPECIES_BELLOSSOM, },
    { .iv = 40, .lvl = 34, .species = SPECIES_ROSERADE, }
};

static const struct TrainerMon sParty_Felix[] = {
    { .lvl = 64, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_HARDER,
                 .heldItem = ITEM_MEGA_STONE, .build = TRAINER_MON_SPEED_SPEC, .hiddenPower = TYPE_FLYING,
      .moves =   {MOVE_PSYCHIC, MOVE_HIDDEN_POWER, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL} },
    { .lvl = 64, .species = SPECIES_CLAYDOL, .difficulty = TRAINER_HARDER,
                 .heldItem = ITEM_SOFT_SAND, .build = TRAINER_MON_HP_DEF,
      .moves =   {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Violet[] = {
    { .lvl = 31, .species = SPECIES_ROSERADE, },
    { .lvl = 31, .species = SPECIES_VILEPLUME, }
};

static const struct TrainerMon sParty_Dusty1[] = {
    { .lvl = 25, .species = SPECIES_KROKOROK, .difficulty = TRAINER_EASY,
      .moves =   {MOVE_DIG, MOVE_SAND_TOMB, MOVE_BITE, MOVE_SCARY_FACE} },
    { .lvl = 25, .species = SPECIES_SANDSLASH, .difficulty = TRAINER_EASY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DIG, MOVE_CRUSH_CLAW, MOVE_MUD_SLAP, MOVE_METAL_CLAW} }
};

static const struct TrainerMon sParty_Dusty2[] = {
    { .lvl = 27, .species = SPECIES_KROKOROK, .difficulty = TRAINER_EASY,
      .moves =   {MOVE_DIG, MOVE_SAND_TOMB, MOVE_BITE, MOVE_SCARY_FACE} },
    { .lvl = 27, .species = SPECIES_SANDSLASH, .difficulty = TRAINER_EASY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DIG, MOVE_CRUSH_CLAW, MOVE_MUD_SLAP, MOVE_METAL_CLAW} }
};

static const struct TrainerMon sParty_Dusty3[] = {
    { .lvl = 31, .species = SPECIES_KROKOROK, .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_DIG, MOVE_SAND_TOMB, MOVE_CRUNCH, MOVE_SCARY_FACE} },
    { .lvl = 31, .species = SPECIES_SANDSLASH, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DIG, MOVE_CRUSH_CLAW, MOVE_MUD_SLAP, MOVE_METAL_CLAW} }
};

static const struct TrainerMon sParty_Dusty4[] = {
    { .lvl = 35, .species = SPECIES_KROKOROK, .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_DIG, MOVE_SAND_TOMB, MOVE_CRUNCH, MOVE_SCARY_FACE} },
    { .lvl = 35, .species = SPECIES_SANDSLASH, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DIG, MOVE_CRUSH_CLAW, MOVE_MUD_SLAP, MOVE_METAL_CLAW} }
};

static const struct TrainerMon sParty_Dusty5[] = {
    { .lvl = 40, .species = SPECIES_KROOKODILE, .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_DIG, MOVE_SAND_TOMB, MOVE_CRUNCH, MOVE_SCARY_FACE} },
    { .lvl = 40, .species = SPECIES_SANDSLASH, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DIG, MOVE_CRUSH_CLAW, MOVE_MUD_SLAP, MOVE_METAL_CLAW} }
};

static const struct TrainerMon sParty_Chip[] = {
    { .iv = 50, .lvl = 36, .species = SPECIES_CLAYDOL,
      .moves =   {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER} },
    { .iv = 50, .lvl = 36, .species = SPECIES_SANDSHREW,
      .moves =   {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING} },
    { .iv = 50, .lvl = 36, .species = SPECIES_SANDSLASH,
      .moves =   {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING} }
};

static const struct TrainerMon sParty_Foster[] = {
    { .iv = 100, .lvl = 30, .species = SPECIES_SANDSHREW,
      .moves =   {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING} },
    { .iv = 100, .lvl = 30, .species = SPECIES_SANDSLASH,
      .moves =   {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING} }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    { .lvl = 21, .species = SPECIES_MAGNEMITE, .ability = ABILITY_SLOT_2, .difficulty = TRAINER_EASY, },
    { .lvl = 21, .species = SPECIES_WHISMUR,   .ability = ABILITY_HIDDEN, .difficulty = TRAINER_EASY, }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    { .lvl = 27, .species = SPECIES_MAGNEMITE, .ability = ABILITY_SLOT_2, .difficulty = TRAINER_MEDIUM, },
    { .lvl = 27, .species = SPECIES_WHISMUR,   .ability = ABILITY_HIDDEN, .difficulty = TRAINER_MEDIUM, }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    { .iv = 150, .lvl = 30, .species = SPECIES_MAGNETON, .ability = ABILITY_SLOT_2,},
    { .iv = 150, .lvl = 30, .species = SPECIES_LOUDRED, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    { .iv = 200, .lvl = 34, .species = SPECIES_MAGNEZONE, .ability = ABILITY_SLOT_2,},
    { .iv = 200, .lvl = 34, .species = SPECIES_LOUDRED, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    { .difficulty = TRAINER_HARD, .lvl = 38, .species = SPECIES_MAGNEZONE, .ability = ABILITY_SLOT_2,},
    { .difficulty = TRAINER_HARD, .lvl = 38, .species = SPECIES_LOUDRED, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    { .difficulty = TRAINER_HARD, .lvl = 44, .species = SPECIES_MAGNEZONE, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT} },
    { .difficulty = TRAINER_HARD, .lvl = 44, .species = SPECIES_EXPLOUD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_CRUNCH, MOVE_STOMP, MOVE_WORK_UP, MOVE_HYPER_VOICE} }
};

static const struct TrainerMon sParty_Lola1[] = {
    { .iv = 10, .lvl = 12, .species = SPECIES_AZURILL, },
    { .iv = 10, .lvl = 12, .species = SPECIES_SHELLOS, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Lola2[] = {
    { .iv = 10, .lvl = 26, .species = SPECIES_MARILL, },
    { .iv = 10, .lvl = 26, .species = SPECIES_SHELLOS, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Lola3[] = {
    { .iv = 20, .lvl = 29, .species = SPECIES_MARILL, },
    { .iv = 20, .lvl = 29, .species = SPECIES_SHELLOS, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Lola4[] = {
    { .iv = 30, .lvl = 32, .species = SPECIES_MARILL, },
    { .iv = 30, .lvl = 32, .species = SPECIES_GASTRODON, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Lola5[] = {
    { .iv = 40, .lvl = 35, .species = SPECIES_AZUMARILL, },
    { .iv = 40, .lvl = 35, .species = SPECIES_GASTRODON, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Austina[] = {
    { .lvl = 30, .species = SPECIES_MARILL, },
    { .lvl = 30, .species = SPECIES_SKRELP, }
};

static const struct TrainerMon sParty_Gwen[] = {
    { .lvl = 30, .species = SPECIES_MARILL, },
    { .lvl = 30, .species = SPECIES_FRILLISH, }
};

static const struct TrainerMon sParty_Simon[] = {
    { .lvl = 12, .species = SPECIES_AZURILL, },
    { .lvl = 12, .species = SPECIES_MARILL, }
};

static const struct TrainerMon sParty_Charlie[] = {
    { .lvl = 32, .species = SPECIES_MARILL, },
    { .lvl = 32, .species = SPECIES_CLAUNCHER, }
};

static const struct TrainerMon sParty_Ricky1[] = {
    { .iv = 10, .lvl = 13, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF} },
    { .iv = 10, .lvl = 13, .species = SPECIES_STARYU, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_RAPID_SPIN, MOVE_HARDEN, MOVE_CONFUSE_RAY, MOVE_SURF} }
};

static const struct TrainerMon sParty_Ricky2[] = {
    { .iv = 10, .lvl = 27, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF} },
    { .iv = 10, .lvl = 27, .species = SPECIES_STARYU, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_RAPID_SPIN, MOVE_SWIFT, MOVE_CONFUSE_RAY, MOVE_SURF} }
};

static const struct TrainerMon sParty_Ricky3[] = {
    { .iv = 20, .lvl = 30, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF} },
    { .iv = 20, .lvl = 30, .species = SPECIES_STARMIE, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_RAPID_SPIN, MOVE_PSYBEAM, MOVE_COSMIC_POWER, MOVE_SURF} }
};

static const struct TrainerMon sParty_Ricky4[] = {
    { .iv = 30, .lvl = 33, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF} },
    { .iv = 30, .lvl = 33, .species = SPECIES_STARMIE, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_RAPID_SPIN, MOVE_PSYBEAM, MOVE_COSMIC_POWER, MOVE_SURF} }
};

static const struct TrainerMon sParty_Ricky5[] = {
    { .iv = 40, .lvl = 36, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF} },
    { .iv = 40, .lvl = 36, .species = SPECIES_STARMIE, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_RAPID_SPIN, MOVE_PSYBEAM, MOVE_COSMIC_POWER, MOVE_SURF} }
};

static const struct TrainerMon sParty_Randall[] = {
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_SWELLOW,
      .moves =   {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_BUNEARY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_JUMP_KICK, MOVE_NONE} }
};

static const struct TrainerMon sParty_Parker[] = {
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_SPINDA, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_CHATOT, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_CHATTER, MOVE_NONE, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_George[] = {
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_VIGOROTH, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_VIGOROTH, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE} }
};

static const struct TrainerMon sParty_Berke[] = {
    { .difficulty = TRAINER_HARD, .lvl = 30, .species = SPECIES_VIGOROTH,
      .moves =   {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 30, .species = SPECIES_VIGOROTH,
      .moves =   {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Braxton[] = {
    { .lvl = 39, .species = SPECIES_SWELLOW,   .difficulty = TRAINER_MEDIUM,
                 .heldItem = ITEM_FLAME_ORB,   .nature = NATURE_HASTY,
      .moves =   {MOVE_FACADE, MOVE_TAILWIND, MOVE_WING_ATTACK, MOVE_AIR_SLASH} },
    { .lvl = 39, .species = SPECIES_VIBRAVA,   .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_BULLDOZE, MOVE_DRAGON_TAIL, MOVE_FIRST_IMPRESSION, MOVE_BITE} },
    { .lvl = 39, .species = SPECIES_WAILMER,   .difficulty = TRAINER_MEDIUM, },
    { .lvl = 39, .species = SPECIES_MAGNEZONE, .difficulty = TRAINER_MEDIUM,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_AIR_BALLOON,
      .moves =   {MOVE_MAGNET_RISE, MOVE_ELECTRO_BALL, MOVE_TRI_ATTACK, MOVE_FLASH_CANNON} },
    { .lvl = 39, .species = SPECIES_SHIFTRY,  .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_NATURE_POWER, MOVE_SWAGGER} }
};

static const struct TrainerMon sParty_Vincent[] = {
    { .lvl = 44, .species = SPECIES_SABLEYE,  .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_QUASH, MOVE_RECOVER, MOVE_DISABLE, MOVE_TORMENT} },
    { .lvl = 44, .species = SPECIES_SHARPEDO, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_WATERFALL, MOVE_POISON_FANG} },
    { .lvl = 44, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_FORCE_PALM, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH} }
};

static const struct TrainerMon sParty_Leroy[] = {
    { .lvl = 46, .species = SPECIES_MAWILE,  .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_FOUL_PLAY, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH} },
    { .lvl = 46, .species = SPECIES_STARMIE, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PSYCHIC} }
};

static const struct TrainerMon sParty_Wilton1[] = {
    { .lvl = 20, .species = SPECIES_ELECTRIKE, .difficulty = TRAINER_MEDIUM, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .heldItem = ITEM_SHUCA_BERRY, .nature = NATURE_MODEST, },
    { .lvl = 20, .species = SPECIES_WAILMER,   .difficulty = TRAINER_MEDIUM, .build = TRAINER_MON_DEFENSES,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_RINDO_BERRY, .nature = NATURE_BOLD, },
    { .lvl = 20, .species = SPECIES_MAKUHITA,  .difficulty = TRAINER_MEDIUM, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_SLOT_1,    .heldItem = ITEM_COBA_BERRY,  .nature = NATURE_JOLLY, }
};

static const struct TrainerMon sParty_Wilton2[] = {
    { .lvl = 26, .species = SPECIES_ELECTRIKE, .difficulty = TRAINER_HARD,   .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .heldItem = ITEM_SHUCA_BERRY, .nature = NATURE_MODEST, },
    { .lvl = 26, .species = SPECIES_WAILMER,   .difficulty = TRAINER_HARD,   .build = TRAINER_MON_DEFENSES,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_RINDO_BERRY, .nature = NATURE_BOLD, },
    { .lvl = 26, .species = SPECIES_MAKUHITA,  .difficulty = TRAINER_HARD,   .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_SLOT_1,    .heldItem = ITEM_COBA_BERRY,  .nature = NATURE_JOLLY, }
};

static const struct TrainerMon sParty_Wilton3[] = {
    { .lvl = 29, .species = SPECIES_MANECTRIC, .difficulty = TRAINER_HARD,   .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .heldItem = ITEM_SHUCA_BERRY, .nature = NATURE_MODEST, },
    { .lvl = 29, .species = SPECIES_WAILMER,   .difficulty = TRAINER_HARD,   .build = TRAINER_MON_DEFENSES,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_RINDO_BERRY, .nature = NATURE_BOLD, },
    { .lvl = 29, .species = SPECIES_MAKUHITA,  .difficulty = TRAINER_HARD,   .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_SLOT_1,    .heldItem = ITEM_COBA_BERRY,  .nature = NATURE_JOLLY, }
};

static const struct TrainerMon sParty_Wilton4[] = {
    { .lvl = 32, .species = SPECIES_MANECTRIC, .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .heldItem = ITEM_MEGA_STONE,  .nature = NATURE_MODEST, },
    { .lvl = 32, .species = SPECIES_WAILMER,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_DEFENSES,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_RINDO_BERRY, .nature = NATURE_BOLD, },
    { .lvl = 32, .species = SPECIES_MAKUHITA,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_SLOT_1,    .heldItem = ITEM_COBA_BERRY,  .nature = NATURE_JOLLY, }
};

static const struct TrainerMon sParty_Wilton5[] = {
    { .lvl = 35, .species = SPECIES_MANECTRIC, .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .heldItem = ITEM_MEGA_STONE,   .nature = NATURE_MODEST, },
    { .lvl = 35, .species = SPECIES_WAILMER,   .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_DEFENSES,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_RINDO_BERRY,  .nature = NATURE_BOLD, },
    { .lvl = 35, .species = SPECIES_HARIYAMA,  .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_SLOT_1,    .heldItem = ITEM_COBA_BERRY,   .nature = NATURE_JOLLY, }
};

static const struct TrainerMon sParty_Edgar[] = {
    { .lvl = 65, .species = SPECIES_CACTURNE, .difficulty = TRAINER_HARD, },
    { .lvl = 65, .species = SPECIES_PELIPPER, .difficulty = TRAINER_HARD, }
};

static const struct TrainerMon sParty_Albert[] = {
    { .lvl = 63, .species = SPECIES_MAGNETON, .difficulty = TRAINER_HARD, },
    { .lvl = 63, .species = SPECIES_MUK,      .difficulty = TRAINER_HARD, }
};

static const struct TrainerMon sParty_Samuel[] = {
    { .lvl = 64, .species = SPECIES_SWELLOW,  .difficulty = TRAINER_HARD, },
    { .lvl = 64, .species = SPECIES_MAWILE,   .difficulty = TRAINER_HARD, },
    { .lvl = 64, .species = SPECIES_ALAKAZAM, .difficulty = TRAINER_HARD, }
};

static const struct TrainerMon sParty_Vito[] = {
    { .lvl = 64, .species = SPECIES_DODRIO,    .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_PHYS,
                 .heldItem = ITEM_SALAC_BERRY, .ability = ABILITY_SLOT_2,    .friendship = TRAINER_MON_FRIENDLY,
      .moves =   {MOVE_REST, MOVE_DRILL_PECK, MOVE_JUMP_KICK, MOVE_RETURN} },
    { .lvl = 64, .species = SPECIES_ALAKAZAM,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .heldItem = ITEM_MEGA_STONE,  .nature = NATURE_TIMID,       .hiddenPower = TYPE_ICE,
      .moves =   {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_HIDDEN_POWER} },
    { .lvl = 64, .species = SPECIES_ELECTRODE, .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .heldItem = ITEM_AIR_BALLOON, .nature = NATURE_MODEST,      .hiddenPower = TYPE_WATER,
      .moves =   {MOVE_ELECTRO_BALL, MOVE_FOUL_PLAY, MOVE_EERIE_IMPULSE, MOVE_HIDDEN_POWER} },
    { .lvl = 64, .species = SPECIES_SHIFTRY,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_PHYS,
      .moves =   {MOVE_HURRICANE, MOVE_LEAF_BLADE, MOVE_LOW_SWEEP, MOVE_SUCKER_PUNCH} }
};

static const struct TrainerMon sParty_Owen[] = {
    { .lvl = 64, .species = SPECIES_KECLEON,  .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_SHADOW_SNEAK, MOVE_SUCKER_PUNCH, MOVE_ROCK_TOMB, MOVE_TRICK_ROOM} },
    { .lvl = 64, .species = SPECIES_GOLEM, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WIDE_GUARD, MOVE_HAMMER_ARM, MOVE_GYRO_BALL, MOVE_FIRE_PUNCH} },
    { .lvl = 64, .species = SPECIES_WAILORD,  .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_BOUNCE, MOVE_DIVE, MOVE_SOAK, MOVE_NOBLE_ROAR} }
};

static const struct TrainerMon sParty_Warren[] = {
    { .lvl = 57, .species = SPECIES_RHYPERIOR, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_GUARD_SPLIT, MOVE_MEGAHORN, MOVE_STONE_EDGE, MOVE_DRILL_RUN} },
    { .lvl = 57, .species = SPECIES_LUDICOLO,  .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_1,
      .moves =   {MOVE_MUDDY_WATER, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_ICY_WIND} }
};

static const struct TrainerMon sParty_Mary[] = {
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_DELCATTY,
      .moves =   {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_JIGGLYPUFF, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_DISARMING_VOICE, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Alexia[] = {
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_WIGGLYTUFF,
      .moves =   {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_SWABLU,
      .moves =   {MOVE_COTTON_GUARD, MOVE_DRAGON_RUSH, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Jody[] = {
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_ZANGOOSE,
      .moves =   {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_ZANGOOSE,
      .moves =   {MOVE_SWORDS_DANCE, MOVE_CRUSH_CLAW, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Wendy[] = {
    { .lvl = 39, .species = SPECIES_MAWILE,   .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_PLAY_ROUGH, MOVE_FOUL_PLAY, MOVE_FAKE_TEARS, MOVE_BITE} },
    { .lvl = 41, .species = SPECIES_PELIPPER, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_WEATHER_BALL, MOVE_ROOST} },
    { .lvl = 40, .species = SPECIES_ROSERADE, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_MAGICAL_LEAF, MOVE_WEATHER_BALL, MOVE_DAZZLING_GLEAM, MOVE_NATURE_POWER} }
};

static const struct TrainerMon sParty_Keira[] = {
    { .lvl = 45, .species = SPECIES_AGGRON,    .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 45, .species = SPECIES_MANECTRIC, .difficulty = TRAINER_HARD, .ability  = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Jennifer[] = {
    { .lvl = 35, .species = SPECIES_SABLEYE,    .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 35, .species = SPECIES_MISDREAVUS, .difficulty = TRAINER_HARD, }
};

static const struct TrainerMon sParty_Hope[] = {
    { .lvl = 64, .species = SPECIES_ROSERADE, .difficulty = TRAINER_HARD, },
    { .lvl = 64, .species = SPECIES_TOGEKISS, .difficulty = TRAINER_HARD, }
};

static const struct TrainerMon sParty_Shannon[] = {
    { .lvl = 65, .species = SPECIES_CLAYDOL,    .difficulty = TRAINER_HARD, },
    { .lvl = 65, .species = SPECIES_DARMANITAN, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_Michelle[] = {
    { .lvl = 64, .species = SPECIES_TORKOAL,  .difficulty = TRAINER_HARD, },
    { .lvl = 64, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 64, .species = SPECIES_LUDICOLO, .difficulty = TRAINER_HARD, }
};

static const struct TrainerMon sParty_Caroline[] = {
    { .lvl = 64, .species = SPECIES_SKARMORY, .difficulty = TRAINER_HARD, },
    { .lvl = 64, .species = SPECIES_SABLEYE,  .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE, }
};

static const struct TrainerMon sParty_Julie[] = {
    { .lvl = 64, .species = SPECIES_SANDSLASH, .difficulty = TRAINER_HARD, },
    { .lvl = 64, .species = SPECIES_NINETALES, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN, },
    { .lvl = 64, .species = SPECIES_TROPIUS,   .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2 }
};

static const struct TrainerMon sParty_Brooke1[] = {
    { .lvl = 20, .species = SPECIES_WINGULL, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_SLOT_1, },
    { .lvl = 20, .species = SPECIES_NUMEL,   .difficulty = TRAINER_MEDIUM, .ability = ABILITY_SLOT_2, },
    { .lvl = 20, .species = SPECIES_ROSELIA, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Brooke2[] = {
    { .lvl = 26, .species = SPECIES_PELIPPER, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_1, },
    { .lvl = 26, .species = SPECIES_NUMEL,    .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2, },
    { .lvl = 26, .species = SPECIES_ROSELIA,  .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Brooke3[] = {
    { .lvl = 29, .species = SPECIES_PELIPPER, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_1, },
    { .lvl = 29, .species = SPECIES_NUMEL,    .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2, },
    { .lvl = 29, .species = SPECIES_ROSERADE, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_VENOM_DRENCH, MOVE_AROMATHERAPY} }
};

static const struct TrainerMon sParty_Brooke4[] = {
    { .lvl = 33, .species = SPECIES_PELIPPER, .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_1, },
    { .lvl = 33, .species = SPECIES_CAMERUPT, .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_2, },
    { .lvl = 33, .species = SPECIES_ROSERADE, .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_VENOM_DRENCH, MOVE_AROMATHERAPY} }
};

static const struct TrainerMon sParty_Brooke5[] = {
    { .lvl = 37, .species = SPECIES_PELIPPER, .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_1, },
    { .lvl = 37, .species = SPECIES_CAMERUPT, .difficulty = TRAINER_HARDER, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 37, .species = SPECIES_ROSERADE, .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_VENOM_DRENCH, MOVE_AROMATHERAPY} }
};

static const struct TrainerMon sParty_Patricia[] = {
    { .lvl = 41, .species = SPECIES_BANETTE, },
    { .lvl = 41, .species = SPECIES_LUNATONE, }
};

static const struct TrainerMon sParty_Kindra[] = {
    { .lvl = 40, .species = SPECIES_DUSKULL, },
    { .lvl = 40, .species = SPECIES_SHUPPET, }
};

static const struct TrainerMon sParty_Tammy[] = {
    { .lvl = 36, .species = SPECIES_DUSKULL, },
    { .lvl = 36, .species = SPECIES_SHUPPET, }
};

static const struct TrainerMon sParty_Tasha[] = {
    { .iv = 50, .lvl = 44, .species = SPECIES_SHUPPET, },
    { .iv = 50, .lvl = 44, .species = SPECIES_MISDREAVUS, }
};

static const struct TrainerMon sParty_Valerie1[] = {
    { .lvl = 44, .species = SPECIES_SABLEYE, },
    { .lvl = 44, .species = SPECIES_SPOINK, }
};

static const struct TrainerMon sParty_Valerie2[] = {
    { .iv = 10, .lvl = 46, .species = SPECIES_SABLEYE, },
    { .iv = 10, .lvl = 46, .species = SPECIES_SPOINK, },
    { .iv = 10, .lvl = 46, .species = SPECIES_VULPIX, }
};

static const struct TrainerMon sParty_Valerie3[] = {
    { .iv = 20, .lvl = 48, .species = SPECIES_SPOINK, },
    { .iv = 20, .lvl = 48, .species = SPECIES_SABLEYE, },
    { .iv = 20, .lvl = 48, .species = SPECIES_NINETALES, }
};

static const struct TrainerMon sParty_Valerie4[] = {
    { .iv = 30, .lvl = 50, .species = SPECIES_SPOINK, },
    { .iv = 30, .lvl = 50, .species = SPECIES_SABLEYE, },
    { .iv = 30, .lvl = 50, .species = SPECIES_NINETALES, }
};

static const struct TrainerMon sParty_Valerie5[] = {
    { .iv = 40, .lvl = 52, .species = SPECIES_DUSKULL, },
    { .iv = 40, .lvl = 52, .species = SPECIES_SABLEYE, },
    { .iv = 40, .lvl = 52, .species = SPECIES_GRUMPIG, },
    { .iv = 40, .lvl = 52, .species = SPECIES_NINETALES, }
};

static const struct TrainerMon sParty_Daphne[] = {
    { .iv = 100, .lvl = 63, .species = SPECIES_LUVDISC, .heldItem = ITEM_NUGGET,
      .moves =   {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE} },
    { .iv = 100, .lvl = 63, .species = SPECIES_LUVDISC, .heldItem = ITEM_NUGGET,
      .moves =   {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE} }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    { .lvl = 54, .species = SPECIES_HERDIER, },
    { .lvl = 54, .species = SPECIES_MIGHTYENA, },
    { .lvl = 54, .species = SPECIES_CAMERUPT, }
};

static const struct TrainerMon sParty_Brianna[] = {
    { .iv = 150, .lvl = 63, .species = SPECIES_SEAKING, .heldItem = ITEM_NUGGET },
    { .iv = 150, .lvl = 63, .species = SPECIES_DRAGALGE, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Naomi[] = {
    { .iv = 100, .lvl = 45, .species = SPECIES_ROSERADE, .heldItem = ITEM_NUGGET },
    { .iv = 100, .lvl = 45, .species = SPECIES_JELLICENT, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Cindy1[] = {
    { .lvl = 7, .species = SPECIES_ZIGZAGOON, .heldItem = ITEM_NUGGET },
    { .lvl = 7, .species = SPECIES_MAREEP, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Cindy2[] = {
    { .lvl = 11, .species = SPECIES_ZIGZAGOON, .heldItem = ITEM_NUGGET,
      .moves =   {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE} },
    { .lvl = 11, .species = SPECIES_MAREEP, .heldItem = ITEM_NUGGET,
      .moves =   {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Cindy3[] = {
    { .iv = 10, .lvl = 27, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .iv = 10, .lvl = 27, .species = SPECIES_FLAAFFY, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Cindy4[] = {
    { .iv = 20, .lvl = 30, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .iv = 20, .lvl = 30, .species = SPECIES_FLAAFFY, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Cindy5[] = {
    { .iv = 30, .lvl = 33, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .iv = 30, .lvl = 33, .species = SPECIES_FLAAFFY, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Cindy6[] = {
    { .iv = 40, .lvl = 36, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET, },
    { .iv = 40, .lvl = 36, .species = SPECIES_AMPHAROS, .heldItem = ITEM_NUGGET, }
};

static const struct TrainerMon sParty_Melissa[] = {
    { .lvl = 25, .species = SPECIES_MARILL, },
    { .lvl = 25, .species = SPECIES_MURKROW, }
};

static const struct TrainerMon sParty_Sheila[] = {
    { .lvl = 25, .species = SPECIES_SHROOMISH, },
    { .lvl = 25, .species = SPECIES_PONYTA, }
};

static const struct TrainerMon sParty_Shirley[] = {
    { .lvl = 25, .species = SPECIES_NUMEL, },
    { .lvl = 25, .species = SPECIES_FARFETCHD, .heldItem = ITEM_STICK, }
};

static const struct TrainerMon sParty_Jessica1[] = {
    { .lvl = 38, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK} },
    { .lvl = 38, .species = SPECIES_SEVIPER,
      .moves =   {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH} }
};

static const struct TrainerMon sParty_Jessica2[] = {
    { .iv = 10, .lvl = 35, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK} },
    { .iv = 10, .lvl = 35, .species = SPECIES_SEVIPER,
      .moves =   {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH} }
};

static const struct TrainerMon sParty_Jessica3[] = {
    { .iv = 20, .lvl = 38, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK} },
    { .iv = 20, .lvl = 38, .species = SPECIES_SEVIPER,
      .moves =   {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH} }
};

static const struct TrainerMon sParty_Jessica4[] = {
    { .iv = 30, .lvl = 41, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK} },
    { .iv = 30, .lvl = 41, .species = SPECIES_SEVIPER,
      .moves =   {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH} }
};

static const struct TrainerMon sParty_Jessica5[] = {
    { .iv = 40, .lvl = 44, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK} },
    { .iv = 40, .lvl = 44, .species = SPECIES_SEVIPER,
      .moves =   {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH} }
};

static const struct TrainerMon sParty_Connie[] = {
    { .iv = 100, .lvl = 63, .species = SPECIES_SEAKING, .ability = ABILITY_HIDDEN, },
    { .iv = 100, .lvl = 63, .species = SPECIES_LANTURN, }
};

static const struct TrainerMon sParty_Bridget[] = {
    { .iv = 150, .lvl = 63, .species = SPECIES_AZUMARILL, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK} },
    { .iv = 150, .lvl = 63, .species = SPECIES_SLOWKING,
      .moves =   {MOVE_PSYCH_UP, MOVE_HEAL_PULSE, MOVE_ZEN_HEADBUTT, MOVE_SWAGGER} }
};

static const struct TrainerMon sParty_Olivia[] = {
    { .iv = 100, .lvl = 61, .species = SPECIES_CLAMPERL,
      .moves =   {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE} },
    { .iv = 100, .lvl = 62, .species = SPECIES_CORPHISH,
      .moves =   {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE} },
    { .iv = 100, .lvl = 63, .species = SPECIES_LOMBRE,
      .moves =   {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE} }
};

static const struct TrainerMon sParty_Tiffany[] = {
    { .iv = 100, .lvl = 62, .species = SPECIES_CRAWDAUNT, },
    { .iv = 100, .lvl = 62, .species = SPECIES_SHARPEDO, }
};

static const struct TrainerMon sParty_Winston1[] = {
    { .lvl = 7, .species = SPECIES_ZIGZAGOON, .heldItem = ITEM_NUGGET },
    { .lvl = 7, .species = SPECIES_LILLIPUP, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Winston2[] = {
    { .lvl = 27, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .lvl = 27, .species = SPECIES_HERDIER, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Winston3[] = {
    { .lvl = 30, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .lvl = 30, .species = SPECIES_HERDIER, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Winston4[] = {
    { .lvl = 33, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .lvl = 33, .species = SPECIES_HERDIER, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Winston5[] = {
    { .lvl = 36, .species = SPECIES_LINOONE, .heldItem = ITEM_NUGGET },
    { .lvl = 36, .species = SPECIES_STOUTLAND, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Mollie[] = {
    { .lvl = 57, .species = SPECIES_WHISCASH, },
    { .iv = 200, .lvl = 57, .species = SPECIES_MEDITITE, }
};

static const struct TrainerMon sParty_Garret[] = {
    { .lvl = 45, .species = SPECIES_AZUMARILL, .heldItem = ITEM_NUGGET },
    { .lvl = 45, .species = SPECIES_GASTRODON, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Steve1[] = {
    { .lvl = 22, .species = SPECIES_ARON, },
    { .lvl = 22, .species = SPECIES_FERROSEED, }
};

static const struct TrainerMon sParty_Steve2[] = {
    { .iv = 10, .lvl = 27, .species = SPECIES_LAIRON, },
    { .iv = 10, .lvl = 27, .species = SPECIES_FERROSEED, }
};

static const struct TrainerMon sParty_Steve3[] = {
    { .iv = 20, .lvl = 29, .species = SPECIES_LAIRON, },
    { .iv = 20, .lvl = 29, .species = SPECIES_RHYHORN, },
    { .iv = 20, .lvl = 29, .species = SPECIES_FERROSEED, }
};

static const struct TrainerMon sParty_Steve4[] = {
    { .iv = 30, .lvl = 32, .species = SPECIES_LAIRON, },
    { .iv = 30, .lvl = 32, .species = SPECIES_RHYHORN, },
    { .iv = 30, .lvl = 32, .species = SPECIES_FERROSEED, }
};

static const struct TrainerMon sParty_Steve5[] = {
    { .iv = 40, .lvl = 35, .species = SPECIES_AGGRON, },
    { .iv = 40, .lvl = 35, .species = SPECIES_RHYDON, },
    { .iv = 40, .lvl = 35, .species = SPECIES_FERROTHORN, }
};

static const struct TrainerMon sParty_Mark[] = {
    { .lvl = 42, .species = SPECIES_RHYHORN, },
    { .lvl = 42, .species = SPECIES_PINECO, }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    { .lvl = 24, .species = SPECIES_NUMEL, },
    { .lvl = 24, .species = SPECIES_PONYTA, }
};

static const struct TrainerMon sParty_Luis[] = {
    { .lvl = 26, .species = SPECIES_CARVANHA, },
    { .lvl = 26, .species = SPECIES_HORSEA, }
};

static const struct TrainerMon sParty_Dominik[] = {
    { .lvl = 26, .species = SPECIES_TENTACOOL, },
    { .lvl = 26, .species = SPECIES_GOLDEEN, }
};

static const struct TrainerMon sParty_Douglas[] = {
    { .iv = 10, .lvl = 30, .species = SPECIES_TENTACOOL, },
    { .iv = 10, .lvl = 30, .species = SPECIES_FRILLISH, }
};

static const struct TrainerMon sParty_Darrin[] = {
    { .iv = 10, .lvl = 28, .species = SPECIES_TENTACOOL, },
    { .iv = 10, .lvl = 29, .species = SPECIES_PELIPPER, },
    { .iv = 10, .lvl = 30, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Tony1[] = {
    { .lvl = 26, .species = SPECIES_CARVANHA, },
    { .lvl = 26, .species = SPECIES_CLAUNCHER, }
};

static const struct TrainerMon sParty_Tony2[] = {
    { .iv = 10, .lvl = 30, .species = SPECIES_SHARPEDO, },
    { .iv = 10, .lvl = 30, .species = SPECIES_CLAUNCHER, }
};

static const struct TrainerMon sParty_Tony3[] = {
    { .iv = 20, .lvl = 33, .species = SPECIES_SHARPEDO, },
    { .iv = 20, .lvl = 33, .species = SPECIES_CLAUNCHER, }
};

static const struct TrainerMon sParty_Tony4[] = {
    { .iv = 30, .lvl = 34, .species = SPECIES_STARYU, },
    { .iv = 30, .lvl = 36, .species = SPECIES_SHARPEDO, },
    { .iv = 30, .lvl = 38, .species = SPECIES_CLAWITZER, }
};

static const struct TrainerMon sParty_Tony5[] = {
    { .iv = 40, .lvl = 37, .species = SPECIES_STARMIE, },
    { .iv = 40, .lvl = 39, .species = SPECIES_SHARPEDO, },
    { .iv = 40, .lvl = 41, .species = SPECIES_CLAWITZER, }
};

static const struct TrainerMon sParty_Jerome[] = {
    { .lvl = 30, .species = SPECIES_TENTACRUEL, },
    { .lvl = 30, .species = SPECIES_FRILLISH, }
};

static const struct TrainerMon sParty_Matthew[] = {
    { .lvl = 30, .species = SPECIES_CARVANHA, },
    { .lvl = 30, .species = SPECIES_GRIMER, }
};

static const struct TrainerMon sParty_David[] = {
    { .lvl = 30, .species = SPECIES_TENTACOOL, },
    { .lvl = 30, .species = SPECIES_CARVANHA, }
};

static const struct TrainerMon sParty_Spencer[] = {
    { .lvl = 52, .species = SPECIES_TENTACRUEL, },
    { .lvl = 52, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Roland[] = {
    { .lvl = 54, .species = SPECIES_CARVANHA, },
    { .lvl = 54, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Nolen[] = {
    { .lvl = 55, .species = SPECIES_TENTACRUEL, },
    { .lvl = 55, .species = SPECIES_PYUKUMUKU, }
};

static const struct TrainerMon sParty_Stan[] = {
    { .lvl = 56, .species = SPECIES_HORSEA, },
    { .lvl = 56, .species = SPECIES_SKRELP, }
};

static const struct TrainerMon sParty_Barry[] = {
    { .lvl = 55, .species = SPECIES_GYARADOS, },
    { .lvl = 55, .species = SPECIES_FRILLISH, }
};

static const struct TrainerMon sParty_Dean[] = {
    { .lvl = 54, .species = SPECIES_SHARPEDO, },
    { .lvl = 54, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Rodney[] = {
    { .lvl = 57, .species = SPECIES_GYARADOS, },
    { .lvl = 57, .species = SPECIES_JELLICENT, }
};

static const struct TrainerMon sParty_Richard[] = {
    { .lvl = 57, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2, },
    { .lvl = 57, .species = SPECIES_SEADRA, }
};

static const struct TrainerMon sParty_Herman[] = {
    { .lvl = 57, .species = SPECIES_TENTACRUEL, },
    { .lvl = 57, .species = SPECIES_DRAGALGE, }
};

static const struct TrainerMon sParty_Santiago[] = {
    { .lvl = 57, .species = SPECIES_TENTACRUEL, },
    { .lvl = 57, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Gilbert[] = {
    { .lvl = 58, .species = SPECIES_SHARPEDO, },
    { .lvl = 58, .species = SPECIES_PALPITOAD, }
};

static const struct TrainerMon sParty_Franklin[] = {
    { .lvl = 57, .species = SPECIES_SEALEO, },
    { .lvl = 57, .species = SPECIES_CLAUNCHER, }
};

static const struct TrainerMon sParty_Kevin[] = {
    { .lvl = 58, .species = SPECIES_SPHEAL, },
    { .lvl = 58, .species = SPECIES_HORSEA, }
};

static const struct TrainerMon sParty_Jack[] = {
    { .lvl = 58, .species = SPECIES_GYARADOS, },
    { .lvl = 58, .species = SPECIES_CLAWITZER, }
};

static const struct TrainerMon sParty_Dudley[] = {
    { .lvl = 33, .species = SPECIES_TENTACOOL, },
    { .lvl = 33, .species = SPECIES_WINGULL, },
    { .lvl = 33, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Chad[] = {
    { .lvl = 53, .species = SPECIES_TENTACRUEL, },
    { .lvl = 53, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Takao[] = {
    { .iv = 127, .lvl = 14, .species = SPECIES_MACHOP, },
    { .iv = 127, .lvl = 14, .species = SPECIES_TIMBURR, }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    { .iv = 50, .lvl = 58, .species = SPECIES_MACHOP, },
    { .iv = 200, .lvl = 58, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Kiyo[] = {
    { .iv = 100, .lvl = 55, .species = SPECIES_HARIYAMA, },
    { .iv = 100, .lvl = 55, .species = SPECIES_LOPUNNY, }
};

static const struct TrainerMon sParty_Koichi[] = {
    { .iv = 100, .lvl = 28, .species = SPECIES_MACHOP, },
    { .iv = 150, .lvl = 32, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Nob1[] = {
    { .iv = 100, .lvl = 22, .species = SPECIES_MACHOP, },
    { .iv = 100, .lvl = 22, .species = SPECIES_TIMBURR, }
};

static const struct TrainerMon sParty_Nob2[] = {
    { .iv = 110, .lvl = 27, .species = SPECIES_MACHOKE, },
    { .iv = 110, .lvl = 27, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_Nob3[] = {
    { .iv = 120, .lvl = 29, .species = SPECIES_MACHOP, },
    { .iv = 120, .lvl = 29, .species = SPECIES_MACHOKE, },
    { .iv = 120, .lvl = 29, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_Nob4[] = {
    { .iv = 130, .lvl = 31, .species = SPECIES_MACHOP, },
    { .iv = 130, .lvl = 31, .species = SPECIES_MACHOKE, },
    { .iv = 130, .lvl = 31, .species = SPECIES_GURDURR, },
    { .iv = 130, .lvl = 31, .species = SPECIES_MACHAMP, }
};

static const struct TrainerMon sParty_Nob5[] = {
    { .iv = 140, .lvl = 33, .species = SPECIES_MACHOP},
    { .iv = 140, .lvl = 33, .species = SPECIES_MACHOKE},
    { .iv = 140, .lvl = 33, .species = SPECIES_CONKELDURR},
    { .iv = 140, .lvl = 33, .species = SPECIES_MACHAMP, .heldItem = ITEM_BLACK_BELT }
};

static const struct TrainerMon sParty_Yuji[] = {
    { .iv = 100, .lvl = 26, .species = SPECIES_MAKUHITA, },
    { .iv = 100, .lvl = 26, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Daisuke[] = {
    { .iv = 100, .lvl = 23, .species = SPECIES_MACHOP, },
    { .iv = 100, .lvl = 23, .species = SPECIES_RIOLU, }
};

static const struct TrainerMon sParty_Atsushi[] = {
    { .iv = 100, .lvl = 44, .species = SPECIES_HARIYAMA, },
    { .iv = 100, .lvl = 44, .species = SPECIES_LUCARIO, }
};

static const struct TrainerMon sParty_Kirk[] = {
    { .iv = 100, .lvl = 20, .species = SPECIES_ELECTRIKE, },
    { .iv = 100, .lvl = 20, .species = SPECIES_VOLTORB, }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    { .lvl = 50, .species = SPECIES_MIGHTYENA, },
    { .lvl = 50, .species = SPECIES_GOLBAT, }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    { .lvl = 50, .species = SPECIES_SHARPEDO, },
    { .lvl = 50, .species = SPECIES_LUMINEON, }
};

static const struct TrainerMon sParty_Shawn[] = {
    { .iv = 100, .lvl = 20, .species = SPECIES_VOLTORB, },
    { .iv = 100, .lvl = 20, .species = SPECIES_MAGNEMITE, }
};

static const struct TrainerMon sParty_Fernando1[] = {
    { .lvl = 41, .species = SPECIES_MANECTRIC, },
    { .lvl = 41, .species = SPECIES_LOUDRED, }
};

static const struct TrainerMon sParty_Fernando2[] = {
    { .iv = 10, .lvl = 44, .species = SPECIES_ELECTRIKE, .ability = ABILITY_SLOT_2, },
    { .iv = 10, .lvl = 44, .species = SPECIES_MANECTRIC, },
    { .iv = 10, .lvl = 44, .species = SPECIES_LOUDRED, }
};

static const struct TrainerMon sParty_Fernando3[] = {
    { .iv = 20, .lvl = 47, .species = SPECIES_ELECTRIKE, .ability = ABILITY_SLOT_2, },
    { .iv = 20, .lvl = 47, .species = SPECIES_MANECTRIC, },
    { .iv = 20, .lvl = 48, .species = SPECIES_EXPLOUD, }
};

static const struct TrainerMon sParty_Fernando4[] = {
    { .iv = 30, .lvl = 49, .species = SPECIES_MANECTRIC, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WILD_CHARGE, MOVE_ELECTRIC_TERRAIN, MOVE_ELECTRO_BALL, MOVE_FIRE_FANG, } },
    { .iv = 30, .lvl = 49, .species = SPECIES_MANECTRIC, },
    { .iv = 30, .lvl = 50, .species = SPECIES_LOUDRED, }
};

static const struct TrainerMon sParty_Fernando5[] = {
    { .iv = 40, .lvl = 51, .species = SPECIES_MANECTRIC, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WILD_CHARGE, MOVE_ELECTRIC_TERRAIN, MOVE_ELECTRO_BALL, MOVE_FIRE_FANG, } },
    { .iv = 40, .lvl = 51, .species = SPECIES_MANECTRIC, },
    { .iv = 40, .lvl = 52, .species = SPECIES_EXPLOUD, }
};

static const struct TrainerMon sParty_Dalton1[] = {
    { .lvl = 20, .species = SPECIES_MAGNEMITE, },
    { .lvl = 20, .species = SPECIES_WHISMUR, }
};

static const struct TrainerMon sParty_Dalton2[] = {
    { .iv = 10, .lvl = 25, .species = SPECIES_MAGNEMITE, },
    { .iv = 10, .lvl = 25, .species = SPECIES_WHISMUR, },
    { .iv = 10, .lvl = 25, .species = SPECIES_NOIBAT, }
};

static const struct TrainerMon sParty_Dalton3[] = {
    { .iv = 20, .lvl = 28, .species = SPECIES_MAGNEMITE, },
    { .iv = 20, .lvl = 28, .species = SPECIES_LOUDRED, },
    { .iv = 20, .lvl = 28, .species = SPECIES_NOIBAT, }
};

static const struct TrainerMon sParty_Dalton4[] = {
    { .iv = 30, .lvl = 31, .species = SPECIES_MAGNETON, },
    { .iv = 30, .lvl = 31, .species = SPECIES_LOUDRED, },
    { .iv = 30, .lvl = 31, .species = SPECIES_NOIBAT, }
};

static const struct TrainerMon sParty_Dalton5[] = {
    { .iv = 40, .lvl = 34, .species = SPECIES_MAGNEZONE, },
    { .iv = 40, .lvl = 34, .species = SPECIES_EXPLOUD, },
    { .iv = 40, .lvl = 34, .species = SPECIES_NOIVERN, }
};

static const struct TrainerMon sParty_Cole[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_NUMEL, },
    { .iv = 100, .lvl = 25, .species = SPECIES_SALANDIT, }
};

static const struct TrainerMon sParty_Jeff[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_SLUGMA, },
    { .iv = 100, .lvl = 25, .species = SPECIES_SLUGMA, }
};

static const struct TrainerMon sParty_Axle[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_NUMEL, },
    { .iv = 100, .lvl = 25, .species = SPECIES_PONYTA, }
};

static const struct TrainerMon sParty_Jace[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_SLUGMA, },
    { .iv = 100, .lvl = 25, .species = SPECIES_SALANDIT, }
};

static const struct TrainerMon sParty_Keegan[] = {
    { .iv = 120, .lvl = 25, .species = SPECIES_SLUGMA, },
    { .iv = 120, .lvl = 25, .species = SPECIES_MAGBY, }
};

static const struct TrainerMon sParty_Bernie1[] = {
    { .lvl = 22, .species = SPECIES_SLUGMA, },
    { .lvl = 22, .species = SPECIES_WINGULL, }
};

static const struct TrainerMon sParty_Bernie2[] = {
    { .iv = 10, .lvl = 26, .species = SPECIES_SLUGMA, },
    { .iv = 10, .lvl = 26, .species = SPECIES_WINGULL, }
};

static const struct TrainerMon sParty_Bernie3[] = {
    { .iv = 20, .lvl = 29, .species = SPECIES_SLUGMA, },
    { .iv = 20, .lvl = 29, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Bernie4[] = {
    { .iv = 30, .lvl = 32, .species = SPECIES_SLUGMA, },
    { .iv = 30, .lvl = 32, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Bernie5[] = {
    { .iv = 40, .lvl = 35, .species = SPECIES_MAGCARGO, },
    { .iv = 40, .lvl = 35, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Drew[] = {
    { .lvl = 23, .species = SPECIES_SANDSHREW, },
    { .lvl = 23, .species = SPECIES_SANDILE, }
};

static const struct TrainerMon sParty_Beau[] = {
    { .lvl = 24, .species = SPECIES_BALTOY,
      .moves =   {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB} },
    { .lvl = 24, .species = SPECIES_SANDSHREW,
      .moves =   {MOVE_FURY_CUTTER, MOVE_SAND_ATTACK, MOVE_BULLDOZE, MOVE_POISON_STING} },
    { .lvl = 24, .species = SPECIES_BALTOY,
      .moves =   {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB} }
};

static const struct TrainerMon sParty_Larry[] = {
    { .lvl = 21, .species = SPECIES_NUZLEAF, },
    { .lvl = 22, .species = SPECIES_SWADLOON, }
};

static const struct TrainerMon sParty_Shane[] = {
    { .lvl = 22, .species = SPECIES_SANDSHREW, },
    { .lvl = 22, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Justin[] = {
    { .lvl = 24, .species = SPECIES_KECLEON, },
    { .lvl = 24, .species = SPECIES_MURKROW, }
};

static const struct TrainerMon sParty_Ethan1[] = {
    { .lvl = 25, .species = SPECIES_LINOONE, },
    { .lvl = 25, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Ethan2[] = {
    { .iv = 10, .lvl = 27, .species = SPECIES_LINOONE, },
    { .iv = 10, .lvl = 27, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Ethan3[] = {
    { .iv = 20, .lvl = 31, .species = SPECIES_LINOONE, },
    { .iv = 20, .lvl = 31, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Ethan4[] = {
    { .iv = 30, .lvl = 33, .species = SPECIES_SANDSHREW, },
    { .iv = 30, .lvl = 33, .species = SPECIES_SWELLOW, },
    { .iv = 30, .lvl = 33, .species = SPECIES_LINOONE, }
};

static const struct TrainerMon sParty_Ethan5[] = {
    { .iv = 40, .lvl = 36, .species = SPECIES_SWELLOW, },
    { .iv = 40, .lvl = 36, .species = SPECIES_SANDSLASH, },
    { .iv = 40, .lvl = 36, .species = SPECIES_LINOONE, }
};

static const struct TrainerMon sParty_Autumn[] = {
    { .lvl = 24, .species = SPECIES_SHROOMISH, },
    { .lvl = 24, .species = SPECIES_LEAVANNY, }
};

static const struct TrainerMon sParty_Travis[] = {
    { .lvl = 21, .species = SPECIES_SANDSHREW, },
    { .lvl = 21, .species = SPECIES_VENIPEDE, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_Brent[] = {
    { .iv = 100, .lvl = 30, .species = SPECIES_SURSKIT, },
    { .iv = 100, .lvl = 30, .species = SPECIES_WHIRLIPEDE, }
};

static const struct TrainerMon sParty_Donald[] = {
    { .iv = 100, .lvl = 28, .species = SPECIES_BEEDRILL, .heldItem = ITEM_MEGA_STONE, },
    { .iv = 100, .lvl = 30, .species = SPECIES_BEAUTIFLY, }
};

static const struct TrainerMon sParty_Taylor[] = {
    { .iv = 100, .lvl = 30, .species = SPECIES_WHIRLIPEDE, .ability = ABILITY_HIDDEN, },
    { .iv = 100, .lvl = 30, .species = SPECIES_DUSTOX, }
};

static const struct TrainerMon sParty_Derek[] = {
    { .iv = 150, .lvl = 16, .species = SPECIES_DUSTOX, },
    { .iv = 150, .lvl = 16, .species = SPECIES_BEAUTIFLY, }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    { .lvl = 35, .species = SPECIES_SURSKIT, },
    { .lvl = 35, .species = SPECIES_SURSKIT, },
    { .lvl = 36, .species = SPECIES_MASQUERAIN, }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    { .iv = 10, .lvl = 31, .species = SPECIES_SURSKIT, },
    { .iv = 10, .lvl = 31, .species = SPECIES_SURSKIT, },
    { .iv = 10, .lvl = 31, .species = SPECIES_MASQUERAIN, }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    { .iv = 20, .lvl = 34, .species = SPECIES_SURSKIT, },
    { .iv = 20, .lvl = 34, .species = SPECIES_SURSKIT, },
    { .iv = 20, .lvl = 34, .species = SPECIES_MASQUERAIN, }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    { .iv = 30, .lvl = 36, .species = SPECIES_SURSKIT, },
    { .iv = 30, .lvl = 36, .species = SPECIES_WURMPLE, },
    { .iv = 30, .lvl = 36, .species = SPECIES_SURSKIT, },
    { .iv = 30, .lvl = 36, .species = SPECIES_MASQUERAIN, }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    { .iv = 40, .lvl = 38, .species = SPECIES_SURSKIT},
    { .iv = 40, .lvl = 38, .species = SPECIES_DUSTOX},
    { .iv = 40, .lvl = 38, .species = SPECIES_SURSKIT},
    { .iv = 40, .lvl = 38, .species = SPECIES_MASQUERAIN, .heldItem = ITEM_SILVER_POWDER },
    { .iv = 40, .lvl = 38, .species = SPECIES_BEAUTIFLY}
};

static const struct TrainerMon sParty_Edward[] = {
    { .lvl = 15, .species = SPECIES_ABRA,
      .moves =   {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE} },
    { .lvl = 15, .species = SPECIES_ABRA,
      .moves =   {MOVE_METRONOME, MOVE_NONE, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Preston[] = {
    { .iv = 100, .lvl = 56, .species = SPECIES_GARDEVOIR, },
    { .iv = 100, .lvl = 56, .species = SPECIES_GALLADE, }
};

static const struct TrainerMon sParty_Virgil[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_ELGYEM, },
    { .iv = 100, .lvl = 57, .species = SPECIES_GARDEVOIR, }
};

static const struct TrainerMon sParty_Blake[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_GIRAFARIG, },
    { .iv = 100, .lvl = 57, .species = SPECIES_GIRAFARIG, }
};

static const struct TrainerMon sParty_William[] = {
    { .lvl = 43, .species = SPECIES_GARDEVOIR, },
    { .lvl = 43, .species = SPECIES_GALLADE, }
};

static const struct TrainerMon sParty_Joshua[] = {
    { .lvl = 41, .species = SPECIES_KADABRA, },
    { .lvl = 41, .species = SPECIES_SOLROCK, }
};

static const struct TrainerMon sParty_Cameron1[] = {
    { .lvl = 40, .species = SPECIES_ALAKAZAM,
      .moves =   {MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_NONE, MOVE_NONE} },
    { .lvl = 40, .species = SPECIES_SOLROCK, }
};

static const struct TrainerMon sParty_Cameron2[] = {
    { .iv = 10, .lvl = 33, .species = SPECIES_KADABRA,
      .moves =   {MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_ALLY_SWITCH, MOVE_RECOVER} },
    { .iv = 10, .lvl = 33, .species = SPECIES_SOLROCK, }
};

static const struct TrainerMon sParty_Cameron3[] = {
    { .iv = 20, .lvl = 38, .species = SPECIES_KADABRA, },
    { .iv = 20, .lvl = 38, .species = SPECIES_SOLROCK, }
};

static const struct TrainerMon sParty_Cameron4[] = {
    { .iv = 30, .lvl = 41, .species = SPECIES_KADABRA, },
    { .iv = 30, .lvl = 41, .species = SPECIES_SOLROCK, }
};

static const struct TrainerMon sParty_Cameron5[] = {
    { .iv = 40, .lvl = 45, .species = SPECIES_SOLROCK, },
    { .iv = 40, .lvl = 45, .species = SPECIES_ALAKAZAM, }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    { .lvl = 16, .species = SPECIES_ABRA,
      .moves =   {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE} },
    { .lvl = 16, .species = SPECIES_ABRA,
      .moves =   {MOVE_METRONOME, MOVE_NONE, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Hannah[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_GALLADE, },
    { .iv = 100, .lvl = 57, .species = SPECIES_GARDEVOIR, }
};

static const struct TrainerMon sParty_Samantha[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_XATU, .ability = ABILITY_HIDDEN, },
    { .iv = 100, .lvl = 57, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Maura[] = {
    { .iv = 100, .lvl = 56, .species = SPECIES_KADABRA, },
    { .iv = 100, .lvl = 56, .species = SPECIES_KADABRA, }
};

static const struct TrainerMon sParty_Kayla[] = {
    { .lvl = 43, .species = SPECIES_WOBBUFFET, },
    { .lvl = 43, .species = SPECIES_NATU, },
    { .lvl = 43, .species = SPECIES_KADABRA, }
};

static const struct TrainerMon sParty_Alexis[] = {
    { .lvl = 41, .species = SPECIES_KIRLIA, },
    { .lvl = 41, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Jacki1[] = {
    { .lvl = 42, .species = SPECIES_KADABRA, },
    { .lvl = 42, .species = SPECIES_LUNATONE, }
};

static const struct TrainerMon sParty_Jacki2[] = {
    { .iv = 10, .lvl = 44, .species = SPECIES_KADABRA, },
    { .iv = 10, .lvl = 44, .species = SPECIES_LUNATONE, }
};

static const struct TrainerMon sParty_Jacki3[] = {
    { .iv = 20, .lvl = 47, .species = SPECIES_KADABRA, },
    { .iv = 20, .lvl = 47, .species = SPECIES_LUNATONE, }
};

static const struct TrainerMon sParty_Jacki4[] = {
    { .iv = 30, .lvl = 50, .species = SPECIES_KADABRA, },
    { .iv = 30, .lvl = 50, .species = SPECIES_LUNATONE, }
};

static const struct TrainerMon sParty_Jacki5[] = {
    { .iv = 40, .lvl = 53, .species = SPECIES_LUNATONE, },
    { .iv = 40, .lvl = 53, .species = SPECIES_ALAKAZAM, }
};

static const struct TrainerMon sParty_Micah[] = {
    { .lvl = 44, .species = SPECIES_MANECTRIC, },
    { .lvl = 44, .species = SPECIES_MANECTRIC, }
};

static const struct TrainerMon sParty_Thomas[] = {
    { .lvl = 45, .species = SPECIES_ZANGOOSE, },
    { .lvl = 45, .species = SPECIES_MAMOSWINE, }
};

static const struct TrainerMon sParty_Walter1[] = {
    { .lvl = 29, .species = SPECIES_MANECTRIC, .ability = ABILITY_HIDDEN, },
    { .lvl = 29, .species = SPECIES_KLINK, .ability = ABILITY_SLOT_1, }
};

static const struct TrainerMon sParty_Walter2[] = {
    { .iv = 10, .lvl = 34, .species = SPECIES_MANECTRIC, .ability = ABILITY_HIDDEN, },
    { .iv = 10, .lvl = 34, .species = SPECIES_KLINK, .ability = ABILITY_SLOT_1, }
};

static const struct TrainerMon sParty_Walter3[] = {
    { .iv = 20, .lvl = 36, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SLASH, MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_FURY_SWIPES} },
    { .iv = 20, .lvl = 36, .species = SPECIES_MANECTRIC, .ability = ABILITY_HIDDEN, },
    { .iv = 20, .lvl = 36, .species = SPECIES_KLANG, .ability = ABILITY_SLOT_1, }
};

static const struct TrainerMon sParty_Walter4[] = {
    { .iv = 30, .lvl = 39, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SLASH, MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_FURY_SWIPES} },
    { .iv = 30, .lvl = 39, .species = SPECIES_MANECTRIC, .ability = ABILITY_HIDDEN, },
    { .iv = 30, .lvl = 39, .species = SPECIES_KLANG, .ability = ABILITY_SLOT_1, }
};

static const struct TrainerMon sParty_Walter5[] = {
    { .iv = 40, .lvl = 41, .species = SPECIES_LINOONE,
      .moves =   {MOVE_SLASH, MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_FURY_SWIPES} },
    { .iv = 40, .lvl = 41, .species = SPECIES_MANECTRIC, .ability = ABILITY_HIDDEN, },
    { .iv = 40, .lvl = 41, .species = SPECIES_KLANG, .ability = ABILITY_SLOT_1, },
    { .iv = 40, .lvl = 41, .species = SPECIES_GOLDUCK,
      .moves =   {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP} }
};

static const struct TrainerMon sParty_Sidney[] = {
    { .lvl = 65, .species = SPECIES_ZOROARK,   .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_1,    .heldItem = ITEM_FOCUS_SASH, .nature = NATURE_HASTY,
      .moves =   {MOVE_U_TURN, MOVE_SNARL, MOVE_FLAMETHROWER, MOVE_CRUNCH} },
    { .lvl = 65, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_HASTY,
      .moves =   {MOVE_PLAY_ROUGH, MOVE_SNARL, MOVE_POISON_FANG, MOVE_CRUNCH} },
    { .lvl = 65, .species = SPECIES_HONCHKROW, .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TAILWIND, MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_ROOST} },
    { .lvl = 65, .species = SPECIES_CACTURNE,  .difficulty = TRAINER_HARD, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_SNOWBALL,
      .moves =   {MOVE_SPIKY_SHIELD, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_FELL_STINGER} },
    { .lvl = 66, .species = SPECIES_CRAWDAUNT, .difficulty = TRAINER_HARD, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_CELL_BATTERY,
      .moves =   {MOVE_WATERFALL, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_FACADE} },
    { .lvl = 67, .species = SPECIES_ABSOL,     .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_MEGA_STONE, 
      .moves =   {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SWORDS_DANCE, MOVE_MEGAHORN} }
};

static const struct TrainerMon sParty_Phoebe[] = {
    { .lvl = 66, .species = SPECIES_DUSCLOPS, .difficulty = TRAINER_HARD, .build = TRAINER_MON_HP_DEF,
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_EVIOLITE,
      .moves =   {MOVE_TRICK_ROOM, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT} },
    { .lvl = 67, .species = SPECIES_ROTOM, .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, 
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_OMINOUS_WIND, MOVE_HELPING_HAND, MOVE_VOLT_SWITCH, MOVE_SNATCH} },
    { .lvl = 66, .species = SPECIES_MAROWAK_ALOLAN, .difficulty = TRAINER_HARD, .build = TRAINER_MON_PHYS, 
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_THICK_CLUB,
      .moves =   {MOVE_SHADOW_BONE, MOVE_BONEMERANG, MOVE_FIRE_PUNCH, MOVE_PROTECT} },
    { .lvl = 66, .species = SPECIES_BANETTE, .difficulty = TRAINER_HARD, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_HIDDEN, .heldItem = ITEM_MEGA_STONE, .nature = NATURE_ADAMANT,
      .moves =   {MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_GUNK_SHOT, MOVE_PURSUIT} },
    { .lvl = 66, .species = SPECIES_SABLEYE, .difficulty = TRAINER_HARD, .build = TRAINER_MON_HP_DEF, 
                 .ability = ABILITY_HIDDEN, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_FOUL_PLAY, MOVE_SPITE, MOVE_RECOVER, MOVE_WILL_O_WISP} },
    { .lvl = 68, .species = SPECIES_DUSKNOIR, .difficulty = TRAINER_HARD, .build = TRAINER_MON_PHYS,
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_SITRUS_BERRY, .nature = NATURE_ADAMANT,
      .moves =   {MOVE_SHADOW_SNEAK, MOVE_PAIN_SPLIT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH} }
};

static const struct TrainerMon sParty_Glacia[] = {
    { .lvl = 67, .species = SPECIES_VANILLUXE, .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC, 
                 .nature = NATURE_MODEST,      .ability = ABILITY_SLOT_2, .heldItem = ITEM_LIGHT_CLAY,
      .moves =   {MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_AURORA_VEIL, MOVE_PROTECT} },
    { .lvl = 67, .species = SPECIES_FROSLASS,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC, 
                 .nature = NATURE_TIMID,       .ability = ABILITY_HIDDEN, .heldItem = ITEM_FOCUS_SASH,
      .moves =   {MOVE_DRAINING_KISS, MOVE_SPIKES, MOVE_SHADOW_BALL, MOVE_ICY_WIND} },
    { .lvl = 68, .species = SPECIES_GLALIE,    .difficulty = TRAINER_HARDER, .build = TRAINER_MON_DEFENSES,
                 .ball = ITEM_TIMER_BALL,      .ability = ABILITY_HIDDEN, .heldItem = ITEM_LEFTOVERS,
      .moves =   {MOVE_SHADOW_BALL, MOVE_PROTECT, MOVE_HAIL, MOVE_WEATHER_BALL} },
    { .lvl = 68, .species = SPECIES_WALREIN,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEC,
                 .ball = ITEM_DIVE_BALL,       .ability = ABILITY_SLOT_2, .heldItem = ITEM_WIKI_BERRY,
      .moves =   {MOVE_WATER_PULSE, MOVE_BLIZZARD, MOVE_STOCKPILE, MOVE_YAWN} },
    { .lvl = 69, .species = SPECIES_GLALIE,    .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_PHYS, 
                 .ball = ITEM_HEAVY_BALL,      .ability = ABILITY_HIDDEN, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_EXPLOSION, MOVE_CRUNCH, MOVE_ICE_SHARD, MOVE_FREEZE_DRY} }
};

static const struct TrainerMon sParty_Drake[] = {
    { .lvl = 69, .species = SPECIES_DRUDDIGON, .difficulty = TRAINER_HARD, 
                 .ability = ABILITY_SLOT_2, .nature = NATURE_ADAMANT, .heldItem = ITEM_LIFE_ORB,
      .moves =   {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_POISON_TAIL, MOVE_BREAKING_SWIPE} },
    { .lvl = 68, .species = SPECIES_ALTARIA, .difficulty = TRAINER_HARD,
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_MEGA_STONE, 
      .moves =   {MOVE_MOONBLAST, MOVE_DRAGON_PULSE, MOVE_COTTON_GUARD, MOVE_TAILWIND} },
    { .lvl = 68, .species = SPECIES_KINGDRA, .difficulty = TRAINER_HARD, 
                 .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_LASER_FOCUS, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_BREAKING_SWIPE} },
    { .lvl = 68, .species = SPECIES_HYDREIGON, .difficulty = TRAINER_HARD,
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_ROSELI_BERRY,
      .moves =   {MOVE_CHARGE_BEAM, MOVE_DRAGON_PULSE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE} },
    { .lvl = 69, .species = SPECIES_FLYGON, .difficulty = TRAINER_HARD,
                 .ability = ABILITY_SLOT_1, .heldItem = ITEM_YACHE_BERRY,
      .moves =   {MOVE_BUG_BUZZ, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE} },
    { .lvl = 70, .species = SPECIES_SALAMENCE, .difficulty = TRAINER_HARD,
                 .ability = ABILITY_HIDDEN, .heldItem = ITEM_YACHE_BERRY,
      .moves =   {MOVE_BULLDOZE, MOVE_OUTRAGE, MOVE_ROCK_SLIDE, MOVE_CRUNCH} }
};

static const struct TrainerMon sParty_Roxanne1[] = {
    { .lvl = 12, .species = SPECIES_GEODUDE,  .difficulty = TRAINER_HARD,  .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_RELAXED,    .build = TRAINER_MON_PHYS,   .heldItem = ITEM_RINDO_BERRY, 
      .moves =   {MOVE_STEALTH_ROCK, MOVE_DEFENSE_CURL, MOVE_MUD_SLAP, MOVE_ROCK_TOMB} },
    { .lvl = 13, .species = SPECIES_ARON,     .difficulty = TRAINER_HARD,  .ability = ABILITY_SLOT_1, 
                 .nature = NATURE_SASSY,   .build = TRAINER_MON_HP_SPDEF,  .heldItem = ITEM_CHOPLE_BERRY,
      .moves =   {MOVE_METAL_CLAW, MOVE_SANDSTORM, MOVE_MUD_SLAP, MOVE_ROCK_TOMB} },
    { .lvl = 14, .species = SPECIES_SHUCKLE,  .difficulty = TRAINER_EASY,  .ability = ABILITY_HIDDEN,
                 .nature = NATURE_IMPISH,     .build = TRAINER_MON_HP_DEF, .heldItem = ITEM_SILVER_POWDER,
      .moves =   {MOVE_ENCORE, MOVE_STRUGGLE_BUG, MOVE_STICKY_WEB, MOVE_ROCK_TOMB} },
    { .lvl = 15, .species = SPECIES_NOSEPASS, .difficulty = TRAINER_EASY,  .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MODEST,     .build = TRAINER_MON_SPEC,   .heldItem = ITEM_SOFT_SAND,
      .moves =   {MOVE_WIDE_GUARD, MOVE_ROCK_TOMB, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP} }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    { .lvl = 32, .species = SPECIES_GOLEM,      .difficulty = TRAINER_HARD,      .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_RELAXED,      .build = TRAINER_MON_PHYS,       .heldItem = ITEM_RINDO_BERRY, 
      .moves =   {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STEAMROLLER, MOVE_HEAVY_SLAM} },
    { .lvl = 34, .species = SPECIES_GIGALITH,   .difficulty = TRAINER_HARD,      .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_SASSY,        .build = TRAINER_MON_HP_SPDEF,   .heldItem = ITEM_FOCUS_SASH,
      .moves =   {MOVE_WIDE_GUARD, MOVE_SANDSTORM, MOVE_SMACK_DOWN, MOVE_BULLDOZE} },
    { .lvl = 35, .species = SPECIES_SHUCKLE,    .difficulty = TRAINER_HARD,      .ability = ABILITY_HIDDEN,
                 .nature = NATURE_IMPISH,       .build = TRAINER_MON_HP_DEF,     .heldItem = ITEM_LEFTOVERS,
      .moves =   {MOVE_ENCORE, MOVE_STRUGGLE_BUG, MOVE_STICKY_WEB, MOVE_ROCK_TOMB} },
    { .lvl = 35, .species = SPECIES_AERODACTYL, .difficulty = TRAINER_HARD,      .ability = ABILITY_SLOT_1,
                 .nature = NATURE_ADAMANT,      .build = TRAINER_MON_SPEED_PHYS, .heldItem = ITEM_SCOPE_LENS,
      .moves =   {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_ROOST, MOVE_DUAL_WINGBEAT} },
    { .lvl = 37, .species = SPECIES_PROBOPASS,  .difficulty = TRAINER_HARD,      .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MODEST,       .build = TRAINER_MON_SPEC,       .heldItem = ITEM_AIR_BALLOON,
      .moves =   {MOVE_PROTECT, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_POWER_GEM} }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    { .lvl = 40, .species = SPECIES_GOLEM,      .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_RELAXED,      .build = TRAINER_MON_PHYS,       .heldItem = ITEM_RINDO_BERRY, 
      .moves =   {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STEAMROLLER, MOVE_HEAVY_SLAM} },
    { .lvl = 40, .species = SPECIES_GIGALITH,   .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_SASSY,        .build = TRAINER_MON_HP_SPDEF,   .heldItem = ITEM_FOCUS_SASH,
      .moves =   {MOVE_WIDE_GUARD, MOVE_SANDSTORM, MOVE_SMACK_DOWN, MOVE_BULLDOZE} },
    { .lvl = 41, .species = SPECIES_SHUCKLE,    .difficulty = TRAINER_HARDER,    .ability = ABILITY_HIDDEN,
                 .nature = NATURE_IMPISH,       .build = TRAINER_MON_HP_DEF,     .heldItem = ITEM_LEFTOVERS,
      .moves =   {MOVE_TOXIC, MOVE_SKITTER_SMACK, MOVE_KNOCK_OFF, MOVE_ACUPRESSURE} },
    { .lvl = 41, .species = SPECIES_AERODACTYL, .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_1,
                 .nature = NATURE_ADAMANT,      .build = TRAINER_MON_SPEED_PHYS, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_CRUNCH, MOVE_STONE_EDGE, MOVE_ROOST, MOVE_DUAL_WINGBEAT} },
    { .lvl = 42, .species = SPECIES_PROBOPASS,  .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MODEST,       .build = TRAINER_MON_SPEC,       .heldItem = ITEM_AIR_BALLOON,
      .moves =   {MOVE_PROTECT, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_POWER_GEM} }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    { .lvl = 45, .species = SPECIES_GIGALITH,   .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_SASSY,        .build = TRAINER_MON_HP_SPDEF,   .heldItem = ITEM_FOCUS_SASH,
      .moves =   {MOVE_WIDE_GUARD, MOVE_SANDSTORM, MOVE_SMACK_DOWN, MOVE_BULLDOZE} },
    { .lvl = 47, .species = SPECIES_SHUCKLE,    .difficulty = TRAINER_HARDER,    .ability = ABILITY_HIDDEN,
                 .nature = NATURE_IMPISH,       .build = TRAINER_MON_HP_DEF,     .heldItem = ITEM_LEFTOVERS,
      .moves =   {MOVE_TOXIC, MOVE_SKITTER_SMACK, MOVE_KNOCK_OFF, MOVE_ACUPRESSURE} },
    { .lvl = 46, .species = SPECIES_GOLEM,      .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_RELAXED,      .build = TRAINER_MON_PHYS,       .heldItem = ITEM_RINDO_BERRY, 
      .moves =   {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STEAMROLLER, MOVE_HEAVY_SLAM} },
    { .lvl = 48, .species = SPECIES_AERODACTYL, .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_1,
                 .nature = NATURE_ADAMANT,      .build = TRAINER_MON_SPEED_PHYS, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_CRUNCH, MOVE_STONE_EDGE, MOVE_ROOST, MOVE_DUAL_WINGBEAT} },
    { .lvl = 48, .species = SPECIES_PROBOPASS,  .difficulty = TRAINER_HARDER,    .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MODEST,       .build = TRAINER_MON_SPEC,       .heldItem = ITEM_AIR_BALLOON,
      .moves =   {MOVE_PROTECT, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_POWER_GEM} }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    { .lvl = 52, .species = SPECIES_GIGALITH,   .difficulty = TRAINER_HARDEST,   .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_SASSY,        .build = TRAINER_MON_HP_SPDEF,   .heldItem = ITEM_FOCUS_SASH,
      .moves =   {MOVE_WIDE_GUARD, MOVE_SANDSTORM, MOVE_SMACK_DOWN, MOVE_BULLDOZE} },
    { .lvl = 52, .species = SPECIES_SHUCKLE,    .difficulty = TRAINER_HARDEST,   .ability = ABILITY_HIDDEN,
                 .nature = NATURE_IMPISH,       .build = TRAINER_MON_HP_DEF,     .heldItem = ITEM_LEFTOVERS,
      .moves =   {MOVE_TOXIC, MOVE_SKITTER_SMACK, MOVE_KNOCK_OFF, MOVE_ACUPRESSURE} },
    { .lvl = 51, .species = SPECIES_GOLEM,      .difficulty = TRAINER_HARDEST,   .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_RELAXED,      .build = TRAINER_MON_PHYS,       .heldItem = ITEM_RINDO_BERRY, 
      .moves =   {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STEAMROLLER, MOVE_HEAVY_SLAM} },
    { .lvl = 53, .species = SPECIES_AERODACTYL, .difficulty = TRAINER_HARDEST,   .ability = ABILITY_SLOT_1,
                 .nature = NATURE_ADAMANT,      .build = TRAINER_MON_SPEED_PHYS, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_CRUNCH, MOVE_STONE_EDGE, MOVE_ROOST, MOVE_DUAL_WINGBEAT} },
    { .lvl = 53, .species = SPECIES_PROBOPASS,  .difficulty = TRAINER_HARDEST,   .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MODEST,       .build = TRAINER_MON_SPEC,       .heldItem = ITEM_AIR_BALLOON,
      .moves =   {MOVE_PROTECT, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_POWER_GEM} }
};

static const struct TrainerMon sParty_Brawly1[] = {
    { .lvl = 16, .species = SPECIES_MACHOP,   .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_ADAMANT,    .build = TRAINER_MON_PHYS,  .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_QUICK_GUARD, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP} },
    { .lvl = 17, .species = SPECIES_TIMBURR,  .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2,
                 .nature = NATURE_SASSY,      .build = TRAINER_MON_PHYS,  .heldItem = ITEM_FOCUS_SASH,
      .moves =   {MOVE_WIDE_GUARD, MOVE_MACH_PUNCH, MOVE_ROCK_THROW, MOVE_BULK_UP} },
    { .lvl = 18, .species = SPECIES_JANGMO_O, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2,
                 .nature = NATURE_JOLLY, .build = TRAINER_MON_SPEED_PHYS, .heldItem = ITEM_ROSELI_BERRY,
      .moves =   {MOVE_DRAGON_TAIL, MOVE_SCARY_FACE, MOVE_LOW_KICK, MOVE_BULK_UP} },
    { .lvl = 19, .species = SPECIES_MAKUHITA, .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_IMPISH,     .build = TRAINER_MON_PHYS,  .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_ARM_THRUST, MOVE_FORESIGHT, MOVE_FAKE_OUT, MOVE_BULK_UP} }
};


static const struct TrainerMon sParty_Brawly2[] = {
    { .difficulty = TRAINER_HARD, .lvl = 33, .species = SPECIES_MACHAMP, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_QUICK_GUARD, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP} },
    { .difficulty = TRAINER_HARD, .lvl = 34, .species = SPECIES_CONKELDURR, .heldItem = ITEM_BLACK_BELT,
      .moves =   {MOVE_WIDE_GUARD, MOVE_MACH_PUNCH, MOVE_CHIP_AWAY, MOVE_POWER_UP_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 35, .species = SPECIES_HAKAMO_O, .heldItem = ITEM_ROSELI_BERRY,
      .moves =   {MOVE_DRAGON_CLAW, MOVE_AUTOTOMIZE, MOVE_SKY_UPPERCUT, MOVE_BRUTAL_SWING} },
    { .difficulty = TRAINER_HARD, .lvl = 35, .species = SPECIES_LUCARIO, .heldItem = ITEM_EXPERT_BELT, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_BULLET_PUNCH, MOVE_CRUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 36, .species = SPECIES_HARIYAMA, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_VITAL_THROW, MOVE_BRINE, MOVE_FAKE_OUT, MOVE_BULK_UP} }
};

static const struct TrainerMon sParty_Brawly3[] = {
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_MACHAMP, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_QUICK_GUARD, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP} },
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_CONKELDURR, .heldItem = ITEM_BLACK_BELT,
      .moves =   {MOVE_WIDE_GUARD, MOVE_MACH_PUNCH, MOVE_CHIP_AWAY, MOVE_POWER_UP_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_HAKAMO_O, .heldItem = ITEM_ROSELI_BERRY,
      .moves =   {MOVE_DRAGON_CLAW, MOVE_AUTOTOMIZE, MOVE_SKY_UPPERCUT, MOVE_SHADOW_CLAW} },
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_LUCARIO, .heldItem = ITEM_MEGA_STONE, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_BULLET_PUNCH, MOVE_CRUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 42, .species = SPECIES_HARIYAMA, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_VITAL_THROW, MOVE_BRINE, MOVE_FAKE_OUT, MOVE_BULK_UP} }
};

static const struct TrainerMon sParty_Brawly4[] = {
    { .difficulty = TRAINER_HARD, .lvl = 44, .species = SPECIES_MACHAMP, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_QUICK_GUARD, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP} },
    { .difficulty = TRAINER_HARD, .lvl = 44, .species = SPECIES_CONKELDURR, .heldItem = ITEM_BLACK_BELT,
      .moves =   {MOVE_WIDE_GUARD, MOVE_MACH_PUNCH, MOVE_CHIP_AWAY, MOVE_POWER_UP_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 44, .species = SPECIES_HAKAMO_O, .heldItem = ITEM_ROSELI_BERRY,
      .moves =   {MOVE_DRAGON_CLAW, MOVE_AUTOTOMIZE, MOVE_SKY_UPPERCUT, MOVE_SHADOW_CLAW} },
    { .difficulty = TRAINER_HARD, .lvl = 44, .species = SPECIES_LUCARIO, .heldItem = ITEM_MEGA_STONE, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_BULLET_PUNCH, MOVE_CRUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 45, .species = SPECIES_HARIYAMA, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_FOCUS_PUNCH, MOVE_BRINE, MOVE_FAKE_OUT, MOVE_SUBSTITUTE} }
};

static const struct TrainerMon sParty_Brawly5[] = {
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_MACHAMP, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_QUICK_GUARD, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP} },
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_CONKELDURR, .heldItem = ITEM_BLACK_BELT,
      .moves =   {MOVE_WIDE_GUARD, MOVE_MACH_PUNCH, MOVE_CHIP_AWAY, MOVE_POWER_UP_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_HAKAMO_O, .heldItem = ITEM_ROSELI_BERRY,
      .moves =   {MOVE_DRAGON_CLAW, MOVE_AUTOTOMIZE, MOVE_SKY_UPPERCUT, MOVE_SHADOW_CLAW} },
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_LUCARIO, .heldItem = ITEM_MEGA_STONE, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_BULLET_PUNCH, MOVE_CRUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 50, .species = SPECIES_HARIYAMA, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_FOCUS_PUNCH, MOVE_BRINE, MOVE_FAKE_OUT, MOVE_SUBSTITUTE} }
};

static const struct TrainerMon sParty_Wattson1[] = {
    { .lvl = 24, .species = SPECIES_JOLTIK,     .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_MODEST,   .heldItem = ITEM_SILVER_POWDER, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_STICKY_WEB, MOVE_ELECTRO_BALL} },
    { .lvl = 26, .species = SPECIES_PINCURCHIN, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_BRAVE,      .heldItem = ITEM_MENTAL_HERB, .build = TRAINER_MON_HP_DEF,
      .moves =   {MOVE_BRINE, MOVE_SPIKES, MOVE_ELECTRIC_TERRAIN, MOVE_SPARK} },
    { .lvl = 25, .species = SPECIES_MAGNEMITE,  .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_TIMID,     .heldItem = ITEM_CHOPLE_BERRY, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_ROUND, MOVE_THUNDER_WAVE, MOVE_GYRO_BALL, MOVE_SHOCK_WAVE} },
    { .lvl = 25, .species = SPECIES_ROTOM,      .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_CALM,       .heldItem = ITEM_EXPERT_BELT, .build = TRAINER_MON_SPEC,
      .moves =   {MOVE_ASTONISH, MOVE_CONFUSE_RAY, MOVE_HELPING_HAND, MOVE_SHOCK_WAVE} },
    { .lvl = 24, .species = SPECIES_MANECTRIC,  .difficulty = TRAINER_HARD, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MILD,      .heldItem = ITEM_SITRUS_BERRY, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_FIRE_FANG, MOVE_SHOCK_WAVE} }
};

static const struct TrainerMon sParty_Wattson2[] = {
    { .lvl = 37, .species = SPECIES_GALVANTULA, .difficulty = TRAINER_HARDER, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_MODEST,     .heldItem = ITEM_SILVER_POWDER, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_STICKY_WEB, MOVE_ELECTRO_BALL} },
    { .lvl = 38, .species = SPECIES_PINCURCHIN, .difficulty = TRAINER_HARDER, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_BRAVE,        .heldItem = ITEM_MENTAL_HERB, .build = TRAINER_MON_HP_DEF,
      .moves =   {MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_ELECTRIC_TERRAIN, MOVE_SPARK} },
    { .lvl = 38, .species = SPECIES_MAGNETON,   .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_TIMID,           .heldItem = ITEM_EVIOLITE, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_FLASH_CANNON, MOVE_SHOCK_WAVE} },
    { .lvl = 38, .species = SPECIES_MANECTRIC,  .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MILD,          .heldItem = ITEM_MEGA_STONE, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_UPROAR, MOVE_SNARL, MOVE_FLAMETHROWER, MOVE_VOLT_SWITCH} },
    { .lvl = 39, .species = SPECIES_ROTOM,      .difficulty = TRAINER_HARDER, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_CALM,         .heldItem = ITEM_EXPERT_BELT, .build = TRAINER_MON_SPEC,
      .moves =   {MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_HELPING_HAND, MOVE_VOLT_SWITCH} }
};

static const struct TrainerMon sParty_Wattson3[] = {
    { .lvl = 45, .species = SPECIES_GALVANTULA, .difficulty = TRAINER_HARDEST, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_MODEST,      .heldItem = ITEM_SILVER_POWDER, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_STICKY_WEB, MOVE_ELECTRO_BALL} },
    { .lvl = 45, .species = SPECIES_PINCURCHIN, .difficulty = TRAINER_HARDEST, .ability = ABILITY_HIDDEN,
                 .nature = NATURE_BRAVE,         .heldItem = ITEM_MENTAL_HERB, .build = TRAINER_MON_HP_DEF,
      .moves =   {MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_ELECTRIC_TERRAIN, MOVE_ZING_ZAP} },
    { .lvl = 46, .species = SPECIES_MAGNETON,   .difficulty = TRAINER_HARDEST, .ability = ABILITY_SLOT_2, 
                 .nature = NATURE_TIMID,            .heldItem = ITEM_EVIOLITE, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT} },
    { .lvl = 47, .species = SPECIES_MANECTRIC,  .difficulty = TRAINER_HARDEST, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_MILD,           .heldItem = ITEM_MEGA_STONE, .build = TRAINER_MON_SPEED_SPEC,
      .moves =   {MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_FLAMETHROWER, MOVE_VOLT_SWITCH} },
    { .lvl = 47, .species = SPECIES_ROTOM,      .difficulty = TRAINER_HARDEST, .ability = ABILITY_SLOT_1,
                 .nature = NATURE_CALM,          .heldItem = ITEM_EXPERT_BELT, .build = TRAINER_MON_SPEC,
      .moves =   {MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_HELPING_HAND, MOVE_VOLT_SWITCH} }
};

static const struct TrainerMon sParty_Flannery1[] = {
    { .difficulty = TRAINER_HARD, .lvl = 27, .species = SPECIES_TORKOAL, .nature = NATURE_RELAXED, .gender = TRAINER_MON_FEMALE,
      .heldItem = ITEM_HEAT_ROCK, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HEAT_WAVE, MOVE_ATTRACT} },
    { .difficulty = TRAINER_HARD, .lvl = 28, .species = SPECIES_NUMEL, .ability = ABILITY_SLOT_2, .heldItem = ITEM_PASSHO_BERRY,
      .moves =   {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_GROWTH, MOVE_STOCKPILE} },
    { .difficulty = TRAINER_HARD, .lvl = 29, .species = SPECIES_SLUGMA, .ability = ABILITY_SLOT_2, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SMOG, MOVE_MEMENTO, MOVE_RECOVER} },
    { .difficulty = TRAINER_HARD, .lvl = 27, .species = SPECIES_MAGMAR, .heldItem = ITEM_HEAT_ROCK,
      .moves =   {MOVE_LAVA_PLUME, MOVE_HELPING_HAND, MOVE_LOW_KICK, MOVE_SUNNY_DAY} },
    { .difficulty = TRAINER_HARD, .lvl = 30, .species = SPECIES_PONYTA,
      .moves =   {MOVE_OVERHEAT, MOVE_FLAME_CHARGE, MOVE_BOUNCE, MOVE_DOUBLE_KICK} }
};

static const struct TrainerMon sParty_Flannery2[] = {
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_TORKOAL, .nature = NATURE_RELAXED, .gender = TRAINER_MON_FEMALE,
      .heldItem = ITEM_HEAT_ROCK, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HEAT_WAVE, MOVE_ATTRACT} },
    { .difficulty = TRAINER_HARD, .lvl = 38, .species = SPECIES_NUMEL, .ability = ABILITY_SLOT_2, .heldItem = ITEM_PASSHO_BERRY,
      .moves =   {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_GROWTH, MOVE_STOCKPILE} },
    { .difficulty = TRAINER_HARD, .lvl = 39, .species = SPECIES_SLUGMA, .ability = ABILITY_SLOT_2, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SMOG, MOVE_MEMENTO, MOVE_RECOVER} },
    { .difficulty = TRAINER_HARD, .lvl = 38, .species = SPECIES_MAGMAR, .heldItem = ITEM_HEAT_ROCK,
      .moves =   {MOVE_LAVA_PLUME, MOVE_HELPING_HAND, MOVE_LOW_KICK, MOVE_SUNNY_DAY} },
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_RAPIDASH,
      .moves =   {MOVE_OVERHEAT, MOVE_FLAME_CHARGE, MOVE_BOUNCE, MOVE_DOUBLE_KICK} }
};

static const struct TrainerMon sParty_Flannery3[] = {
    { .difficulty = TRAINER_HARD, .lvl = 41, .species = SPECIES_GROWLITHE,
      .moves =   {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY} },
    { .difficulty = TRAINER_HARD, .lvl = 43, .species = SPECIES_MAGCARGO, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE} },
    { .difficulty = TRAINER_HARD, .lvl = 41, .species = SPECIES_PONYTA,
      .moves =   {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE} },
    { .difficulty = TRAINER_HARD, .lvl = 43, .species = SPECIES_CAMERUPT, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT} },
    { .difficulty = TRAINER_HARD, .lvl = 45, .species = SPECIES_TORKOAL, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT} }
};

static const struct TrainerMon sParty_Flannery4[] = {
    { .difficulty = TRAINER_HARD, .lvl = 46, .species = SPECIES_HOUNDOUR,
      .moves =   {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY} },
    { .difficulty = TRAINER_HARD, .lvl = 46, .species = SPECIES_GROWLITHE,
      .moves =   {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR} },
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_MAGCARGO, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE} },
    { .difficulty = TRAINER_HARD, .lvl = 46, .species = SPECIES_RAPIDASH,
      .moves =   {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE} },
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_CAMERUPT, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT} },
    { .difficulty = TRAINER_HARD, .lvl = 50, .species = SPECIES_TORKOAL, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT} }
};

static const struct TrainerMon sParty_Flannery5[] = {
    { .difficulty = TRAINER_HARD, .lvl = 51, .species = SPECIES_ARCANINE,
      .moves =   {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR} },
    { .difficulty = TRAINER_HARD, .lvl = 53, .species = SPECIES_MAGCARGO, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE} },
    { .difficulty = TRAINER_HARD, .lvl = 51, .species = SPECIES_HOUNDOOM,
      .moves =   {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY} },
    { .difficulty = TRAINER_HARD, .lvl = 51, .species = SPECIES_RAPIDASH,
      .moves =   {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE} },
    { .difficulty = TRAINER_HARD, .lvl = 53, .species = SPECIES_CAMERUPT, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT} },
    { .difficulty = TRAINER_HARD, .lvl = 55, .species = SPECIES_TORKOAL, .heldItem = ITEM_WHITE_HERB,
      .moves =   {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT} }
};

static const struct TrainerMon sParty_Norman1[] = {
    { .iv = 200, .lvl = 30, .species = SPECIES_SPINDA, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ASSIST} },
    { .iv = 200, .lvl = 32, .species = SPECIES_AUDINO, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_SKILL_SWAP, MOVE_HEAL_PULSE, MOVE_GROWL, MOVE_HELPING_HAND} },
    { .iv = 200, .lvl = 32, .species = SPECIES_DELCATTY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_TICKLE, MOVE_DISARMING_VOICE, MOVE_ASSIST, MOVE_FACADE} },
    { .iv = 200, .lvl = 30, .species = SPECIES_SWELLOW, .heldItem = ITEM_FLAME_ORB,
      .moves =   {MOVE_FACADE, MOVE_ROOST, MOVE_BRAVE_BIRD, MOVE_PROTECT} },
    { .difficulty = TRAINER_HARD, .lvl = 33, .species = SPECIES_SLAKING, .heldItem = ITEM_LUM_BERRY,
      .moves =   {MOVE_SCRATCH, MOVE_ICY_WIND, MOVE_BULK_UP, MOVE_ENCORE} }
};

static const struct TrainerMon sParty_Norman2[] = {
    { .difficulty = TRAINER_HARD, .lvl = 42, .species = SPECIES_CHANSEY,
      .moves =   {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 42, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST} },
    { .difficulty = TRAINER_HARD, .lvl = 43, .species = SPECIES_SPINDA,
      .moves =   {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS} },
    { .difficulty = TRAINER_HARD, .lvl = 45, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL} }
};

static const struct TrainerMon sParty_Norman3[] = {
    { .difficulty = TRAINER_HARD, .lvl = 47, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST} },
    { .difficulty = TRAINER_HARD, .lvl = 47, .species = SPECIES_CHANSEY,
      .moves =   {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 45, .species = SPECIES_KANGASKHAN,
      .moves =   {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL} },
    { .difficulty = TRAINER_HARD, .lvl = 48, .species = SPECIES_SPINDA,
      .moves =   {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS} },
    { .difficulty = TRAINER_HARD, .lvl = 50, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL} }
};

static const struct TrainerMon sParty_Norman4[] = {
    { .difficulty = TRAINER_HARD, .lvl = 52, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST} },
    { .difficulty = TRAINER_HARD, .lvl = 52, .species = SPECIES_BLISSEY,
      .moves =   {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 50, .species = SPECIES_KANGASKHAN,
      .moves =   {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL} },
    { .difficulty = TRAINER_HARD, .lvl = 53, .species = SPECIES_SPINDA,
      .moves =   {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS} },
    { .difficulty = TRAINER_HARD, .lvl = 55, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL} }
};

static const struct TrainerMon sParty_Norman5[] = {
    { .difficulty = TRAINER_HARD, .lvl = 57, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST} },
    { .difficulty = TRAINER_HARD, .lvl = 57, .species = SPECIES_BLISSEY,
      .moves =   {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH} },
    { .difficulty = TRAINER_HARD, .lvl = 55, .species = SPECIES_KANGASKHAN,
      .moves =   {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL} },
    { .difficulty = TRAINER_HARD, .lvl = 57, .species = SPECIES_TAUROS,
      .moves =   {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE} },
    { .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_SPINDA,
      .moves =   {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS} },
    { .difficulty = TRAINER_HARD, .lvl = 60, .species = SPECIES_SLAKING, .heldItem = ITEM_SITRUS_BERRY,
      .moves =   {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL} }
};

static const struct TrainerMon sParty_Winona1[] = {
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 39,
      .species = SPECIES_PIDGEOT, .heldItem = ITEM_MEGA_STONE, .nature = NATURE_MODEST,
      .moves =   {MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_HURRICANE, MOVE_OMINOUS_WIND} },
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 37,
      .species = SPECIES_XATU, .heldItem = ITEM_QUICK_CLAW, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TAILWIND, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_AIR_SLASH} },
    { .iv = 210, .lvl = 37, .species = SPECIES_SKARMORY, .heldItem = ITEM_METAL_COAT, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SPIKES, MOVE_FEINT, MOVE_STEEL_WING, MOVE_AERIAL_ACE} },
    { .iv = 210, .lvl = 37, .species = SPECIES_PELIPPER, .heldItem = ITEM_WACAN_BERRY,
      .moves =   {MOVE_SCALD, MOVE_ROOST, MOVE_WIDE_GUARD, MOVE_AERIAL_ACE} },
    { .iv = 210, .lvl = 38, .species = SPECIES_TROPIUS, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_DRAGON_HAMMER, MOVE_NATURE_POWER, MOVE_ENERGY_BALL, MOVE_SYNTHESIS} },
    { .difficulty = TRAINER_HARD, .lvl = 40, .species = SPECIES_ALTARIA, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DAZZLING_GLEAM, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_AERIAL_ACE} }
};

static const struct TrainerMon sParty_Winona2[] = {
    { .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC, .lvl = 45,
      .species = SPECIES_PIDGEOT, .heldItem = ITEM_MEGA_STONE, .nature = NATURE_MODEST,
      .moves =   {MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_HURRICANE, MOVE_OMINOUS_WIND} },
    { .iv = 210, .lvl = 44, .species = SPECIES_XATU, .heldItem = ITEM_QUICK_CLAW, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TAILWIND, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_AIR_SLASH} },
    { .iv = 210, .lvl = 44, .species = SPECIES_SKARMORY, .heldItem = ITEM_METAL_COAT, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SPIKES, MOVE_FEINT, MOVE_STEEL_WING, MOVE_AERIAL_ACE} },
    { .iv = 210, .lvl = 44, .species = SPECIES_PELIPPER, .heldItem = ITEM_WACAN_BERRY,
      .moves =   {MOVE_SCALD, MOVE_ROOST, MOVE_WIDE_GUARD, MOVE_AERIAL_ACE} },
    { .iv = 210, .lvl = 44, .species = SPECIES_TROPIUS, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_DRAGON_HAMMER, MOVE_NATURE_POWER, MOVE_ENERGY_BALL, MOVE_SYNTHESIS} },
    { .difficulty = TRAINER_HARD, .lvl = 46, .species = SPECIES_ALTARIA, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DAZZLING_GLEAM, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_AERIAL_ACE} }
};

static const struct TrainerMon sParty_Winona3[] = {
    { .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC, .lvl = 49,
      .species = SPECIES_PIDGEOT, .heldItem = ITEM_MEGA_STONE, .nature = NATURE_MODEST,
      .moves =   {MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_HURRICANE, MOVE_OMINOUS_WIND} },
    { .iv = 210, .lvl = 48, .species = SPECIES_XATU, .heldItem = ITEM_QUICK_CLAW, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TAILWIND, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_AIR_SLASH} },
    { .iv = 210, .lvl = 48, .species = SPECIES_SKARMORY, .heldItem = ITEM_METAL_COAT, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SPIKES, MOVE_FEINT, MOVE_STEEL_WING, MOVE_AERIAL_ACE} },
    { .iv = 210, .lvl = 48, .species = SPECIES_PELIPPER, .heldItem = ITEM_WACAN_BERRY,
      .moves =   {MOVE_SCALD, MOVE_ROOST, MOVE_WIDE_GUARD, MOVE_AERIAL_ACE} },
    { .iv = 210, .lvl = 48, .species = SPECIES_TROPIUS, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_DRAGON_HAMMER, MOVE_NATURE_POWER, MOVE_ENERGY_BALL, MOVE_SYNTHESIS} },
    { .difficulty = TRAINER_HARD, .lvl = 50, .species = SPECIES_ALTARIA, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DAZZLING_GLEAM, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_AERIAL_ACE} }
};

static const struct TrainerMon sParty_Winona4[] = {
    { .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC, .lvl = 54,
      .species = SPECIES_PIDGEOT, .heldItem = ITEM_MEGA_STONE, .nature = NATURE_MODEST,
      .moves =   {MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_HURRICANE, MOVE_OMINOUS_WIND} },
    { .difficulty = TRAINER_HARD, .lvl = 54, .species = SPECIES_XATU, .heldItem = ITEM_QUICK_CLAW, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TAILWIND, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_AIR_SLASH} },
    { .difficulty = TRAINER_HARD, .lvl = 54, .species = SPECIES_SKARMORY, .heldItem = ITEM_METAL_COAT, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SPIKES, MOVE_FEINT, MOVE_STEEL_WING, MOVE_AERIAL_ACE} },
    { .difficulty = TRAINER_HARD, .lvl = 54, .species = SPECIES_PELIPPER, .heldItem = ITEM_WACAN_BERRY,
      .moves =   {MOVE_SCALD, MOVE_ROOST, MOVE_WIDE_GUARD, MOVE_AERIAL_ACE} },
    { .difficulty = TRAINER_HARD, .lvl = 54, .species = SPECIES_TROPIUS, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_DRAGON_HAMMER, MOVE_NATURE_POWER, MOVE_LEAF_STORM, MOVE_SYNTHESIS} },
    { .difficulty = TRAINER_HARD, .lvl = 56, .species = SPECIES_ALTARIA, .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DAZZLING_GLEAM, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_AERIAL_ACE} }
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 58, .species = SPECIES_MEOWSTIC_FEMALE,
      .heldItem = ITEM_WISE_GLASSES, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_PSYSHOCK, MOVE_CHARGE_BEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND} },
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 58, .species = SPECIES_MEOWSTIC,
      .heldItem = ITEM_LEFTOVERS, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_HELPING_HAND, MOVE_YAWN, MOVE_QUICK_GUARD, MOVE_SUBSTITUTE} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_CLAYDOL, .heldItem = ITEM_EXPERT_BELT,
      .moves =   {MOVE_GRASS_KNOT, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_EARTH_POWER} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_REUNICLUS,
      .ability = ABILITY_SLOT_2, .heldItem = ITEM_FLAME_ORB,
      .moves =   {MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_GRASS_KNOT, MOVE_RECOVER} },
    { .build = TRAINER_MON_PHYS, .difficulty = TRAINER_HARD, .lvl = 59, .species = SPECIES_BRONZONG,
      .moves =   {MOVE_WEATHER_BALL, MOVE_GYRO_BALL, MOVE_PSYCHIC, MOVE_CALM_MIND} },
    { .difficulty = TRAINER_HARD, .lvl = 60, .species = SPECIES_MEDICHAM, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ZEN_HEADBUTT} }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 61, .species = SPECIES_MEOWSTIC_FEMALE,
      .heldItem = ITEM_WISE_GLASSES, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_PSYSHOCK, MOVE_CHARGE_BEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND} },
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 61, .species = SPECIES_MEOWSTIC,
      .heldItem = ITEM_LEFTOVERS, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_HELPING_HAND, MOVE_YAWN, MOVE_QUICK_GUARD, MOVE_SUBSTITUTE} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 61, .species = SPECIES_CLAYDOL, .heldItem = ITEM_EXPERT_BELT,
      .moves =   {MOVE_TRICK_ROOM, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_EARTH_POWER} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 61, .species = SPECIES_REUNICLUS,
      .ability = ABILITY_SLOT_2, .heldItem = ITEM_FLAME_ORB,
      .moves =   {MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_GRASS_KNOT, MOVE_RECOVER} },
    { .build = TRAINER_MON_PHYS, .difficulty = TRAINER_HARD, .lvl = 61, .species = SPECIES_BRONZONG,
      .moves =   {MOVE_WEATHER_BALL, MOVE_GYRO_BALL, MOVE_PSYCHIC, MOVE_CALM_MIND} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 63, .species = SPECIES_SLOWBRO, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_MUDDY_WATER, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_SLACK_OFF} }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 64, .species = SPECIES_MEOWSTIC_FEMALE,
      .heldItem = ITEM_WISE_GLASSES, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_PSYSHOCK, MOVE_CHARGE_BEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND} },
    { .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC, .lvl = 64, .species = SPECIES_MEOWSTIC,
      .heldItem = ITEM_LEFTOVERS, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_HELPING_HAND, MOVE_YAWN, MOVE_QUICK_GUARD, MOVE_SUBSTITUTE} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 64, .species = SPECIES_CLAYDOL, .heldItem = ITEM_EXPERT_BELT,
      .moves =   {MOVE_TRICK_ROOM, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_EARTH_POWER} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 64, .species = SPECIES_REUNICLUS,
      .ability = ABILITY_SLOT_2, .heldItem = ITEM_FLAME_ORB,
      .moves =   {MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_GRASS_KNOT, MOVE_RECOVER} },
    { .build = TRAINER_MON_PHYS, .difficulty = TRAINER_HARD, .lvl = 66, .species = SPECIES_BRONZONG,
      .moves =   {MOVE_WEATHER_BALL, MOVE_GYRO_BALL, MOVE_PSYCHIC, MOVE_CALM_MIND} },
    { .build = TRAINER_MON_SPEC, .difficulty = TRAINER_HARD, .lvl = 66, .species = SPECIES_SLOWBRO, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_MUDDY_WATER, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_SLACK_OFF} }
};

static const struct TrainerMon sParty_Juan1[] = {
    { .lvl = 63, .species = SPECIES_PYUKUMUKU, .difficulty = TRAINER_HARD, .build = TRAINER_MON_HP_SPDEF,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_LUM_BERRY, .nature = NATURE_CALM,
      .moves =   {MOVE_CURSE, MOVE_RECOVER, MOVE_HELPING_HAND, MOVE_TOXIC} },
    { .lvl = 63, .species = SPECIES_PELIPPER,  .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .ball = ITEM_TIMER_BALL,    .heldItem = ITEM_DAMP_ROCK,
      .moves =   {MOVE_WATER_PULSE, MOVE_HURRICANE, MOVE_U_TURN, MOVE_RAIN_DANCE} },
    { .lvl = 63, .species = SPECIES_LANTURN,   .difficulty = TRAINER_HARD, .build = TRAINER_MON_HP_DEF,
                 .ability = ABILITY_SLOT_1,    .nature = NATURE_BOLD,      .heldItem = ITEM_ASSAULT_VEST,
      .moves =   {MOVE_VOLT_SWITCH, MOVE_WATER_PULSE, MOVE_THUNDER, MOVE_DAZZLING_GLEAM} },
    { .lvl = 65, .species = SPECIES_CRAWDAUNT, .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .ball = ITEM_LURE_BALL,     .heldItem = ITEM_SHELL_BELL,
      .moves =   {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_PROTECT} },
    { .lvl = 63, .species = SPECIES_GYARADOS,  .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .nature = NATURE_JOLLY,     .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_WATER_PULSE, MOVE_CRUNCH, MOVE_POWER_WHIP, MOVE_HURRICANE} },
    { .lvl = 66, .species = SPECIES_KINGDRA,   .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_TIMID,     .heldItem = ITEM_SCOPE_LENS,
      .moves =   {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_LASER_FOCUS} }
};

static const struct TrainerMon sParty_Juan2[] = {
    { .lvl = 68, .species = SPECIES_PYUKUMUKU, .difficulty = TRAINER_HARDER, .build = TRAINER_MON_HP_SPDEF,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_LUM_BERRY,   .nature = NATURE_CALM,
      .moves =   {MOVE_CURSE, MOVE_RECOVER, MOVE_HELPING_HAND, MOVE_TOXIC} },
    { .lvl = 68, .species = SPECIES_PELIPPER,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .ball = ITEM_TIMER_BALL,      .heldItem = ITEM_DAMP_ROCK,
      .moves =   {MOVE_WATER_PULSE, MOVE_HURRICANE, MOVE_U_TURN, MOVE_RAIN_DANCE} },
    { .lvl = 68, .species = SPECIES_LANTURN,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_HP_DEF,
                 .ability = ABILITY_SLOT_1,    .nature = NATURE_BOLD,        .heldItem = ITEM_ASSAULT_VEST,
      .moves =   {MOVE_VOLT_SWITCH, MOVE_WATER_PULSE, MOVE_THUNDER, MOVE_DAZZLING_GLEAM} },
    { .lvl = 70, .species = SPECIES_CRAWDAUNT, .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .ball = ITEM_LURE_BALL,       .heldItem = ITEM_SHELL_BELL,
      .moves =   {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_PROTECT} },
    { .lvl = 68, .species = SPECIES_GYARADOS,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_MEGA_STONE,  .nature = NATURE_JOLLY,
      .moves =   {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_POWER_WHIP, MOVE_HURRICANE} },
    { .lvl = 71, .species = SPECIES_KINGDRA,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_TIMID,       .heldItem = ITEM_SCOPE_LENS,
      .moves =   {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_LASER_FOCUS} }
};

static const struct TrainerMon sParty_Juan3[] = {
    { .lvl = 73, .species = SPECIES_PYUKUMUKU, .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_HP_SPDEF,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_LUM_BERRY,    .nature = NATURE_CALM,
      .moves =   {MOVE_CURSE, MOVE_RECOVER, MOVE_HELPING_HAND, MOVE_TOXIC} },
    { .lvl = 73, .species = SPECIES_PELIPPER,  .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .ball = ITEM_TIMER_BALL,       .heldItem = ITEM_DAMP_ROCK,
      .moves =   {MOVE_WATER_PULSE, MOVE_HURRICANE, MOVE_U_TURN, MOVE_RAIN_DANCE} },
    { .lvl = 73, .species = SPECIES_LANTURN,   .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_HP_DEF,
                 .ability = ABILITY_SLOT_1,    .nature = NATURE_BOLD,         .heldItem = ITEM_ASSAULT_VEST,
      .moves =   {MOVE_VOLT_SWITCH, MOVE_WATER_PULSE, MOVE_THUNDER, MOVE_DAZZLING_GLEAM} },
    { .lvl = 75, .species = SPECIES_CRAWDAUNT, .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .ball = ITEM_LURE_BALL,        .heldItem = ITEM_SHELL_BELL,
      .moves =   {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_PROTECT} },
    { .lvl = 73, .species = SPECIES_GYARADOS,  .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .heldItem = ITEM_MEGA_STONE,   .nature = NATURE_JOLLY,
      .moves =   {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_POWER_WHIP, MOVE_HURRICANE} },
    { .lvl = 76, .species = SPECIES_KINGDRA,   .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_TIMID,        .heldItem = ITEM_SCOPE_LENS,
      .moves =   {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_LASER_FOCUS} }
};

static const struct TrainerMon sParty_Jerry1[] = {
    { .iv = 10, .lvl = 11, .species = SPECIES_RALTS, },
    { .iv = 10, .lvl = 11, .species = SPECIES_SOLOSIS, }
};

static const struct TrainerMon sParty_Jerry2[] = {
    { .iv = 20, .lvl = 26, .species = SPECIES_KIRLIA, },
    { .iv = 20, .lvl = 26, .species = SPECIES_MEDITITE, },
    { .iv = 20, .lvl = 26, .species = SPECIES_SOLOSIS, }
};

static const struct TrainerMon sParty_Jerry3[] = {
    { .iv = 30, .lvl = 32, .species = SPECIES_KIRLIA, },
    { .iv = 30, .lvl = 32, .species = SPECIES_MEDITITE, },
    { .iv = 30, .lvl = 32, .species = SPECIES_DUOSION, }
};

static const struct TrainerMon sParty_Jerry4[] = {
    { .iv = 40, .lvl = 36, .species = SPECIES_KIRLIA, },
    { .iv = 40, .lvl = 36, .species = SPECIES_MEDICHAM, },
    { .iv = 40, .lvl = 36, .species = SPECIES_DUOSION, }
};

static const struct TrainerMon sParty_Jerry5[] = {
    { .iv = 50, .lvl = 41, .species = SPECIES_GALLADE, },
    { .iv = 50, .lvl = 41, .species = SPECIES_BANETTE, },
    { .iv = 50, .lvl = 41, .species = SPECIES_MEDICHAM, },
    { .iv = 50, .lvl = 41, .species = SPECIES_REUNICLUS, }
};

static const struct TrainerMon sParty_Ted[] = {
    { .iv = 10, .lvl = 17, .species = SPECIES_RALTS, },
    { .iv = 10, .lvl = 17, .species = SPECIES_GOTHITA, }
};

static const struct TrainerMon sParty_Paul[] = {
    { .iv = 10, .lvl = 15, .species = SPECIES_NUMEL, },
    { .iv = 10, .lvl = 15, .species = SPECIES_ODDISH, },
    { .iv = 10, .lvl = 15, .species = SPECIES_WINGULL, }
};

static const struct TrainerMon sParty_Georgia[] = {
    { .iv = 10, .lvl = 16, .species = SPECIES_SHROOMISH, },
    { .iv = 10, .lvl = 16, .species = SPECIES_BEAUTIFLY, }
};

static const struct TrainerMon sParty_Karen1[] = {
    { .iv = 10, .lvl = 10, .species = SPECIES_SHROOMISH, },
    { .iv = 10, .lvl = 10, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Karen2[] = {
    { .iv = 20, .lvl = 26, .species = SPECIES_SHROOMISH, },
    { .iv = 20, .lvl = 26, .species = SPECIES_WHISMUR, },
    { .iv = 20, .lvl = 26, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Karen3[] = {
    { .iv = 30, .lvl = 29, .species = SPECIES_SHROOMISH, },
    { .iv = 30, .lvl = 29, .species = SPECIES_LOUDRED, },
    { .iv = 30, .lvl = 29, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Karen4[] = {
    { .iv = 40, .lvl = 34, .species = SPECIES_BRELOOM, },
    { .iv = 40, .lvl = 34, .species = SPECIES_LOUDRED, },
    { .iv = 40, .lvl = 34, .species = SPECIES_SANDYGAST, }

};

static const struct TrainerMon sParty_Karen5[] = {
    { .iv = 50, .lvl = 40, .species = SPECIES_BRELOOM, },
    { .iv = 50, .lvl = 40, .species = SPECIES_EXPLOUD, },
    { .iv = 50, .lvl = 40, .species = SPECIES_PALOSSAND, }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    { .lvl = 37, .species = SPECIES_SPINDA,
      .moves =   {MOVE_SKILL_SWAP, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE} },
    { .lvl = 40, .species = SPECIES_SLAKING,
      .moves =   {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK} }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    { .lvl = 17, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH} },
    { .lvl = 19, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    { .iv = 10, .lvl = 28, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH} },
    { .iv = 10, .lvl = 30, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    { .iv = 20, .lvl = 31, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH} },
    { .iv = 20, .lvl = 33, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    { .iv = 30, .lvl = 34, .species = SPECIES_LINOONE,
      .moves =   {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_PLAY_ROUGH} },
    { .iv = 30, .lvl = 36, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    { .iv = 40, .lvl = 36, .species = SPECIES_LINOONE,
      .moves =   {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_PLAY_ROUGH} },
    { .iv = 40, .lvl = 38, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Victor[] = {
    { .iv = 25, .lvl = 19, .species = SPECIES_TAILLOW, .heldItem = ITEM_ORAN_BERRY, },
    { .iv = 25, .lvl = 19, .species = SPECIES_ZIGZAGOON, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_PIN_MISSILE, MOVE_HEADBUTT, MOVE_BABY_DOLL_EYES, MOVE_MUD_SPORT} }
};

static const struct TrainerMon sParty_Colton[] = {
    { .lvl = 22, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} },
    { .lvl = 36, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} },
    { .lvl = 40, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} },
    { .lvl = 12, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} },
    { .lvl = 30, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} },
    { .lvl = 42, .species = SPECIES_DELCATTY, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} }
};

static const struct TrainerMon sParty_Miguel1[] = {
    { .lvl = 15, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 15, .species = SPECIES_WIMPOD, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Miguel2[] = {
    { .lvl = 29, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 30, .species = SPECIES_GOLISOPOD, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Miguel3[] = {
    { .lvl = 32, .species = SPECIES_SKITTY, .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 33, .species = SPECIES_GOLISOPOD, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Miguel4[] = {
    { .lvl = 35, .species = SPECIES_DELCATTY, .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 37, .species = SPECIES_GOLISOPOD, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Miguel5[] = {
    { .lvl = 38, .species = SPECIES_DELCATTY, .heldItem = ITEM_SITRUS_BERRY },
    { .lvl = 42, .species = SPECIES_GOLISOPOD, .heldItem = ITEM_SITRUS_BERRY }
};

static const struct TrainerMon sParty_Victoria[] = {
    { .iv = 50, .lvl = 20, .species = SPECIES_ROSELIA, .heldItem = ITEM_ORAN_BERRY },
    { .iv = 50, .lvl = 20, .species = SPECIES_MORELULL, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Vanessa[] = {
    { .lvl = 38, .species = SPECIES_RAICHU, .ability = ABILITY_HIDDEN, .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 38, .species = SPECIES_PACHIRISU, .ability = ABILITY_HIDDEN, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Bethany[] = {
    { .iv = 100, .lvl = 61, .species = SPECIES_AZURILL, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_HELPING_HAND, MOVE_PERISH_SONG, MOVE_DRAINING_KISS, MOVE_ATTRACT} },
    { .iv = 100, .lvl = 61, .species = SPECIES_WAILMER, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_WHIRLPOOL, MOVE_HEAVY_SLAM, MOVE_BOUNCE, MOVE_ATTRACT} },
    { .iv = 100, .lvl = 62, .species = SPECIES_MARILL, .heldItem = ITEM_ORAN_BERRY },
    { .iv = 100, .lvl = 63, .species = SPECIES_AZUMARILL, .heldItem = ITEM_ORAN_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_WATERFALL} }
};

static const struct TrainerMon sParty_Isabel1[] = {
    { .lvl = 14, .species = SPECIES_PLUSLE, .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 14, .species = SPECIES_MINUN, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Isabel2[] = {
    { .iv = 10, .lvl = 26, .species = SPECIES_PLUSLE, .heldItem = ITEM_ORAN_BERRY },
    { .iv = 10, .lvl = 26, .species = SPECIES_MINUN, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Isabel3[] = {
    { .iv = 20, .lvl = 29, .species = SPECIES_PLUSLE, .heldItem = ITEM_ORAN_BERRY },
    { .iv = 20, .lvl = 29, .species = SPECIES_MINUN, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Isabel4[] = {
    { .iv = 30, .lvl = 32, .species = SPECIES_PLUSLE, .heldItem = ITEM_ORAN_BERRY },
    { .iv = 30, .lvl = 32, .species = SPECIES_MINUN, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Isabel5[] = {
    { .iv = 40, .lvl = 35, .species = SPECIES_PLUSLE, .heldItem = ITEM_SITRUS_BERRY },
    { .iv = 40, .lvl = 35, .species = SPECIES_MINUN, .heldItem = ITEM_SITRUS_BERRY }
};

static const struct TrainerMon sParty_Timothy1[] = {
    { .iv = 200, .lvl = 31, .species = SPECIES_HARIYAMA, },
    { .iv = 200, .lvl = 31, .species = SPECIES_TYROGUE,
      .moves =   {MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_RAPID_SPIN, MOVE_BULLET_PUNCH} }
};

static const struct TrainerMon sParty_Timothy2[] = {
    { .iv = 210, .lvl = 34, .species = SPECIES_HARIYAMA, },
    { .iv = 210, .lvl = 34, .species = SPECIES_HITMONCHAN, },
    { .iv = 210, .lvl = 34, .species = SPECIES_HITMONTOP, }
};

static const struct TrainerMon sParty_Timothy3[] = {
    { .iv = 220, .lvl = 37, .species = SPECIES_HARIYAMA, },
    { .iv = 220, .lvl = 37, .species = SPECIES_HITMONCHAN, },
    { .iv = 220, .lvl = 37, .species = SPECIES_HITMONLEE, },
    { .iv = 220, .lvl = 37, .species = SPECIES_HITMONTOP, }
};

static const struct TrainerMon sParty_Timothy4[] = {
    { .iv = 230, .lvl = 40, .species = SPECIES_HARIYAMA, },
    { .iv = 230, .lvl = 40, .species = SPECIES_HITMONCHAN, },
    { .iv = 230, .lvl = 40, .species = SPECIES_HITMONLEE, },
    { .iv = 230, .lvl = 40, .species = SPECIES_HITMONTOP, }
};

static const struct TrainerMon sParty_Timothy5[] = {
    { .iv = 240, .lvl = 44, .species = SPECIES_HARIYAMA, },
    { .iv = 240, .lvl = 44, .species = SPECIES_HITMONCHAN, },
    { .iv = 240, .lvl = 44, .species = SPECIES_HITMONLEE, },
    { .iv = 240, .lvl = 44, .species = SPECIES_HITMONTOP, }
};

static const struct TrainerMon sParty_Vicky[] = {
    { .iv = 200, .lvl = 21, .species = SPECIES_MEDITITE,
      .moves =   {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT} },
    { .iv = 200, .lvl = 21, .species = SPECIES_MR_MIME,
      .moves =   {MOVE_WIDE_GUARD, MOVE_MAGICAL_LEAF, MOVE_LIGHT_SCREEN, MOVE_REFLECT} }
};

static const struct TrainerMon sParty_Shelby1[] = {
    { .iv = 200, .lvl = 24, .species = SPECIES_MEDITITE, },
    { .iv = 200, .lvl = 24, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Shelby2[] = {
    { .iv = 210, .lvl = 30, .species = SPECIES_MEDITITE, },
    { .iv = 210, .lvl = 30, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Shelby3[] = {
    { .iv = 220, .lvl = 33, .species = SPECIES_MEDICHAM, },
    { .iv = 220, .lvl = 33, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Shelby4[] = {
    { .iv = 230, .lvl = 36, .species = SPECIES_MEDICHAM, },
    { .iv = 230, .lvl = 36, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Shelby5[] = {
    { .iv = 240, .lvl = 39, .species = SPECIES_MEDICHAM, },
    { .iv = 240, .lvl = 39, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Calvin1[] = {
    { .lvl = 5, .species = SPECIES_ZORUA, },
    { .lvl = 5, .species = SPECIES_POOCHYENA, },
    { .lvl = 5, .species = SPECIES_TAILLOW, }
};

static const struct TrainerMon sParty_Calvin2[] = {
    { .iv = 10, .lvl = 27, .species = SPECIES_ZORUA, },
    { .iv = 10, .lvl = 27, .species = SPECIES_MIGHTYENA, },
    { .iv = 10, .lvl = 27, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Calvin3[] = {
    { .iv = 20, .lvl = 29, .species = SPECIES_ZORUA, },
    { .iv = 20, .lvl = 30, .species = SPECIES_MIGHTYENA, },
    { .iv = 20, .lvl = 28, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Calvin4[] = {
    { .iv = 30, .lvl = 29, .species = SPECIES_LINOONE,
      .moves =   {MOVE_PIN_MISSILE, MOVE_FLAIL, MOVE_HELPING_HAND, MOVE_PURSUIT} },
    { .iv = 30, .lvl = 31, .species = SPECIES_ZOROARK, },
    { .iv = 30, .lvl = 33, .species = SPECIES_MIGHTYENA, },
    { .iv = 30, .lvl = 31, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Calvin5[] = {
    { .iv = 40, .lvl = 32, .species = SPECIES_LINOONE,
      .moves =   {MOVE_PIN_MISSILE, MOVE_FLAIL, MOVE_HELPING_HAND, MOVE_PURSUIT} },
    { .iv = 40, .lvl = 34, .species = SPECIES_ZOROARK, },
    { .iv = 40, .lvl = 36, .species = SPECIES_MIGHTYENA, },
    { .iv = 40, .lvl = 34, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Billy[] = {
    { .lvl = 5, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_GROWL, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE} },
    { .lvl = 7, .species = SPECIES_SENTRET, }
};

static const struct TrainerMon sParty_Josh[] = {
    { .iv = 100, .lvl = 9, .species = SPECIES_GEODUDE },
    { .iv = 100, .lvl = 9, .species = SPECIES_ROGGENROLA }
};

static const struct TrainerMon sParty_Tommy[] = {
    { .iv = 110, .lvl = 9, .species = SPECIES_DWEBBLE, },
    { .iv = 120, .lvl = 9, .species = SPECIES_DWEBBLE, }
};

static const struct TrainerMon sParty_Joey[] = {
    { .lvl = 10, .species = SPECIES_MACHOP, },
    { .lvl = 10, .species = SPECIES_TIMBURR, }
};

static const struct TrainerMon sParty_Ben[] = {
    { .iv = 150, .lvl = 20, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT} },
    { .iv = 150, .lvl = 20, .species = SPECIES_GULPIN,
      .moves =   {MOVE_SHOCK_WAVE, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND} }
};

static const struct TrainerMon sParty_Quincy[] = {
    { .iv = 100, .lvl = 64, .species = SPECIES_SLAKING,
      .moves =   {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER} },
    { .iv = 100, .lvl = 64, .species = SPECIES_DUSKNOIR,
      .moves =   {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC} }
};

static const struct TrainerMon sParty_Katelynn[] = {
    { .iv = 100, .lvl = 64, .species = SPECIES_GARDEVOIR,
      .moves =   {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM} },
    { .iv = 100, .lvl = 64, .species = SPECIES_SLAKING,
      .moves =   {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK} }
};

static const struct TrainerMon sParty_Jaylen[] = {
    { .lvl = 21, .species = SPECIES_TRAPINCH, },
    { .lvl = 21, .species = SPECIES_DEINO, }
};

static const struct TrainerMon sParty_Dillon[] = {
    { .lvl = 19, .species = SPECIES_ARON, },
    { .lvl = 19, .species = SPECIES_SNUBBULL, }
};

static const struct TrainerMon sParty_Eddie[] = {
    { .lvl = 14, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_GROWL, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_ODOR_SLEUTH} },
    { .lvl = 16, .species = SPECIES_ZIGZAGOON,
      .moves =   {MOVE_GROWL, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_ODOR_SLEUTH} }
};

static const struct TrainerMon sParty_Allen[] = {
    { .lvl = 4, .species = SPECIES_SOLOSIS, },
    { .lvl = 4, .species = SPECIES_TAILLOW, }
};

static const struct TrainerMon sParty_Timmy[] = {
    { .lvl = 15, .species = SPECIES_ARON, },
    { .lvl = 15, .species = SPECIES_ELECTRIKE, }
};

static const struct TrainerMon sParty_Wallace[] = {
    { .difficulty = TRAINER_HARD, .lvl = 69, .species = SPECIES_SLOWBRO, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_SLACK_OFF, MOVE_PSYSHOCK} },
    { .difficulty = TRAINER_HARD, .lvl = 69, .species = SPECIES_GOLISOPOD, .heldItem = ITEM_PERSIM_BERRY,
      .moves =   {MOVE_FIRST_IMPRESSION, MOVE_AQUA_JET, MOVE_BUG_BITE, MOVE_WIDE_GUARD} },
    { .difficulty = TRAINER_HARD, .lvl = 70, .species = SPECIES_SEISMITOAD, .ability = ABILITY_SLOT_2, .heldItem = ITEM_PERSIM_BERRY,
      .moves =   {MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_POWER_WHIP, MOVE_STOMPING_TANTRUM} },
    { .difficulty = TRAINER_HARD, .lvl = 69, .species = SPECIES_LUDICOLO, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_TEETER_DANCE, MOVE_KNOCK_OFF, MOVE_ENERGY_BALL, MOVE_HYDRO_PUMP} },
    { .difficulty = TRAINER_HARD, .lvl = 70, .species = SPECIES_GYARADOS, .ability = ABILITY_HIDDEN, .heldItem = ITEM_PERSIM_BERRY,
      .moves =   {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_DIVE, MOVE_OUTRAGE} },
    { .difficulty = TRAINER_HARD, .lvl = 71, .species = SPECIES_MILOTIC, .heldItem = ITEM_WHITE_HERB, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_RECOVER, MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_SCALD} }
};

static const struct TrainerMon sParty_Andrew[] = {
    { .lvl = 15, .species = SPECIES_MAGIKARP, },
    { .lvl = 15, .species = SPECIES_TENTACOOL, },
    { .lvl = 15, .species = SPECIES_MAGIKARP, }
};

static const struct TrainerMon sParty_Ivan[] = {
    { .lvl = 5, .species = SPECIES_MAGIKARP, },
    { .lvl = 6, .species = SPECIES_MAGIKARP, },
    { .lvl = 7, .species = SPECIES_MAGIKARP, }
};

static const struct TrainerMon sParty_Claude[] = {
    { .lvl = 20, .species = SPECIES_GYARADOS, },
    { .lvl = 21, .species = SPECIES_BARBOACH, },
    { .lvl = 22, .species = SPECIES_GOLDEEN, }
};

static const struct TrainerMon sParty_Ned[] = {
    { .iv = 10, .lvl = 12, .species = SPECIES_TENTACOOL, },
    { .iv = 10, .lvl = 12, .species = SPECIES_KRABBY, }
};

static const struct TrainerMon sParty_Dale[] = {
    { .lvl = 11, .species = SPECIES_TENTACOOL, },
    { .lvl = 14, .species = SPECIES_WAILMER, },
    { .lvl = 11, .species = SPECIES_TENTACOOL, },
    { .lvl = 14, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Nolan[] = {
    { .lvl = 22, .species = SPECIES_BARBOACH, },
    { .lvl = 22, .species = SPECIES_SHELLOS, }
};

static const struct TrainerMon sParty_Barny[] = {
    { .lvl = 30, .species = SPECIES_TENTACOOL, },
    { .lvl = 30, .species = SPECIES_CARVANHA, }
};

static const struct TrainerMon sParty_Wade[] = {
    { .lvl = 20, .species = SPECIES_TENTACOOL, },
    { .lvl = 20, .species = SPECIES_GOLDEEN, }
};

static const struct TrainerMon sParty_Carter[] = {
    { .iv = 10, .lvl = 30, .species = SPECIES_WAILMER, },
    { .iv = 10, .lvl = 30, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Elliot1[] = {
    { .lvl = 13, .species = SPECIES_MAGIKARP, },
    { .lvl = 10, .species = SPECIES_TENTACOOL, },
    { .lvl = 13, .species = SPECIES_MAGIKARP, }
};

static const struct TrainerMon sParty_Elliot2[] = {
    { .iv = 10, .lvl = 24, .species = SPECIES_TENTACOOL, },
    { .iv = 10, .lvl = 27, .species = SPECIES_GYARADOS, },
    { .iv = 10, .lvl = 27, .species = SPECIES_GYARADOS, }
};

static const struct TrainerMon sParty_Elliot3[] = {
    { .iv = 20, .lvl = 29, .species = SPECIES_GYARADOS, },
    { .iv = 20, .lvl = 26, .species = SPECIES_CARVANHA, },
    { .iv = 20, .lvl = 26, .species = SPECIES_TENTACOOL, },
    { .iv = 20, .lvl = 29, .species = SPECIES_GYARADOS, }
};

static const struct TrainerMon sParty_Elliot4[] = {
    { .iv = 30, .lvl = 31, .species = SPECIES_GYARADOS, },
    { .iv = 30, .lvl = 30, .species = SPECIES_CARVANHA, },
    { .iv = 30, .lvl = 30, .species = SPECIES_TENTACRUEL, },
    { .iv = 31, .lvl = 31, .species = SPECIES_GYARADOS, }
};

static const struct TrainerMon sParty_Elliot5[] = {
    { .iv = 40, .lvl = 33, .species = SPECIES_GYARADOS, },
    { .iv = 40, .lvl = 33, .species = SPECIES_SHARPEDO, },
    { .iv = 40, .lvl = 33, .species = SPECIES_GYARADOS, },
    { .iv = 40, .lvl = 35, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Ronald[] = {
    { .lvl = 55, .species = SPECIES_PINCURCHIN, },
    { .lvl = 47, .species = SPECIES_GYARADOS, },
    { .lvl = 49, .species = SPECIES_GYARADOS, },
    { .lvl = 51, .species = SPECIES_GYARADOS, },
    { .lvl = 53, .species = SPECIES_GYARADOS, },
    { .lvl = 55, .species = SPECIES_GYARADOS, }
};

static const struct TrainerMon sParty_Jacob[] = {
    { .iv = 20, .lvl = 14, .species = SPECIES_VOLTORB, },
    { .iv = 20, .lvl = 14, .species = SPECIES_KLINK, },
    { .iv = 200, .lvl = 14, .species = SPECIES_MAGNEMITE, }
};

static const struct TrainerMon sParty_Anthony[] = {
    { .lvl = 18, .species = SPECIES_MAGNEMITE, },
    { .lvl = 18, .species = SPECIES_KLINK, }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    { .lvl = 20, .species = SPECIES_MAGNEMITE, },
    { .lvl = 20, .species = SPECIES_KLINK, }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    { .iv = 10, .lvl = 30, .species = SPECIES_MAGNEMITE, },
    { .iv = 10, .lvl = 30, .species = SPECIES_KLINK, }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    { .iv = 20, .lvl = 34, .species = SPECIES_MAGNEMITE, },
    { .iv = 20, .lvl = 34, .species = SPECIES_KLANG, }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    { .iv = 30, .lvl = 39, .species = SPECIES_MAGNEZONE, },
    { .iv = 30, .lvl = 39, .species = SPECIES_KLANG, }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    { .iv = 40, .lvl = 44, .species = SPECIES_MAGNEZONE, },
    { .iv = 40, .lvl = 44, .species = SPECIES_KLINKLANG, }
};

static const struct TrainerMon sParty_Jasmine[] = {
    { .iv = 80, .lvl = 14, .species = SPECIES_MAGNEMITE, },
    { .iv = 80, .lvl = 14, .species = SPECIES_MAGNEMITE, },
    { .lvl = 6, .species = SPECIES_VOLTORB, }
};

static const struct TrainerMon sParty_Abigail1[] = {
    { .lvl = 19, .species = SPECIES_MAGNEMITE, },
    { .lvl = 19, .species = SPECIES_MIME_JR, }
};

static const struct TrainerMon sParty_Abigail2[] = {
    { .iv = 10, .lvl = 28, .species = SPECIES_MAGNEMITE, },
    { .iv = 10, .lvl = 28, .species = SPECIES_MR_MIME, }
};

static const struct TrainerMon sParty_Abigail3[] = {
    { .iv = 20, .lvl = 31, .species = SPECIES_MAGNEMITE, },
    { .iv = 20, .lvl = 31, .species = SPECIES_MR_MIME, }
};

static const struct TrainerMon sParty_Abigail4[] = {
    { .iv = 30, .lvl = 34, .species = SPECIES_MAGNETON, },
    { .iv = 20, .lvl = 31, .species = SPECIES_MR_MIME, }
};

static const struct TrainerMon sParty_Abigail5[] = {
    { .iv = 40, .lvl = 37, .species = SPECIES_MAGNEZONE, },
    { .iv = 20, .lvl = 31, .species = SPECIES_MR_MIME, }
};

static const struct TrainerMon sParty_Dylan1[] = {
    { .lvl = 18, .species = SPECIES_DODUO, },
    { .lvl = 18, .species = SPECIES_JOLTIK, }
};

static const struct TrainerMon sParty_Dylan2[] = {
    { .iv = 10, .lvl = 28, .species = SPECIES_DODUO, },
    { .iv = 10, .lvl = 28, .species = SPECIES_JOLTIK, }
};

static const struct TrainerMon sParty_Dylan3[] = {
    { .iv = 20, .lvl = 32, .species = SPECIES_DODUO, },
    { .iv = 20, .lvl = 32, .species = SPECIES_JOLTIK, }
};

static const struct TrainerMon sParty_Dylan4[] = {
    { .iv = 30, .lvl = 36, .species = SPECIES_DODRIO, },
    { .iv = 30, .lvl = 36, .species = SPECIES_GALVANTULA, }
};

static const struct TrainerMon sParty_Dylan5[] = {
    { .iv = 40, .lvl = 41, .species = SPECIES_DODRIO, },
    { .iv = 40, .lvl = 41, .species = SPECIES_GALVANTULA, }
};

static const struct TrainerMon sParty_Maria1[] = {
    { .lvl = 17, .species = SPECIES_DODUO, },
    { .lvl = 17, .species = SPECIES_CHATOT, }
};

static const struct TrainerMon sParty_Maria2[] = {
    { .iv = 10, .lvl = 28, .species = SPECIES_DODUO, },
    { .iv = 10, .lvl = 28, .species = SPECIES_CHATOT, }
};

static const struct TrainerMon sParty_Maria3[] = {
    { .iv = 20, .lvl = 31, .species = SPECIES_DODUO, },
    { .iv = 20, .lvl = 31, .species = SPECIES_CHATOT, }
};

static const struct TrainerMon sParty_Maria4[] = {
    { .iv = 30, .lvl = 34, .species = SPECIES_DODRIO, },
    { .iv = 30, .lvl = 34, .species = SPECIES_CHATOT, }
};

static const struct TrainerMon sParty_Maria5[] = {
    { .iv = 40, .lvl = 37, .species = SPECIES_DODRIO, },
    { .iv = 40, .lvl = 37, .species = SPECIES_CHATOT, }
};

static const struct TrainerMon sParty_Camden[] = {
    { .lvl = 33, .species = SPECIES_STARYU, },
    { .lvl = 33, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Demetrius[] = {
    { .lvl = 32, .species = SPECIES_LINOONE, },
    { .lvl = 32, .species = SPECIES_ELECTRIKE, }
};

static const struct TrainerMon sParty_Chase[] = {
    { .lvl = 54, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2, },
    { .iv = 80, .lvl = 58, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    { .lvl = 35, .species = SPECIES_STARYU, },
    { .lvl = 35, .species = SPECIES_FRILLISH, }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    { .iv = 10, .lvl = 59, .species = SPECIES_STARYU, },
    { .iv = 10, .lvl = 59, .species = SPECIES_FRILLISH, }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    { .iv = 20, .lvl = 62, .species = SPECIES_STARYU, },
    { .iv = 20, .lvl = 62, .species = SPECIES_JELLICENT, }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    { .iv = 30, .lvl = 65, .species = SPECIES_STARMIE, },
    { .iv = 30, .lvl = 65, .species = SPECIES_JELLICENT, }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    { .iv = 40, .lvl = 68, .species = SPECIES_STARMIE, },
    { .iv = 40, .lvl = 68, .species = SPECIES_JELLICENT, }
};

static const struct TrainerMon sParty_Isobel[] = {
    { .lvl = 54, .species = SPECIES_STARYU, },
    { .lvl = 54, .species = SPECIES_PYUKUMUKU, }
};

static const struct TrainerMon sParty_Donny[] = {
    { .lvl = 52, .species = SPECIES_WINGULL, },
    { .iv = 160, .lvl = 58, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Talia[] = {
    { .lvl = 58, .species = SPECIES_STARYU, },
    { .lvl = 58, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Allison[] = {
    { .lvl = 53, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2, },
    { .iv = 240, .lvl = 58, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    { .lvl = 55, .species = SPECIES_STARYU, },
    { .lvl = 55, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    { .iv = 10, .lvl = 59, .species = SPECIES_STARYU, },
    { .iv = 10, .lvl = 59, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    { .iv = 20, .lvl = 62, .species = SPECIES_STARYU, },
    { .iv = 20, .lvl = 62, .species = SPECIES_PALOSSAND, }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    { .iv = 30, .lvl = 65, .species = SPECIES_STARMIE, },
    { .iv = 30, .lvl = 65, .species = SPECIES_PALOSSAND, }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    { .iv = 40, .lvl = 68, .species = SPECIES_STARMIE, },
    { .iv = 40, .lvl = 68, .species = SPECIES_PALOSSAND, }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_ALTARIA, },
    { .iv = 100, .lvl = 37, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    { .iv = 110, .lvl = 41, .species = SPECIES_ALTARIA, },
    { .iv = 110, .lvl = 41, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    { .iv = 120, .lvl = 44, .species = SPECIES_ALTARIA, },
    { .iv = 120, .lvl = 44, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    { .iv = 130, .lvl = 46, .species = SPECIES_BAGON, },
    { .iv = 130, .lvl = 46, .species = SPECIES_ALTARIA, },
    { .iv = 130, .lvl = 46, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    { .iv = 140, .lvl = 49, .species = SPECIES_ALTARIA, },
    { .iv = 140, .lvl = 49, .species = SPECIES_ALTARIA, },
    { .iv = 140, .lvl = 49, .species = SPECIES_SHELGON, .heldItem = ITEM_DRAGON_FANG, }
};

static const struct TrainerMon sParty_Aaron[] = {
    { .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_BAGON, },
    { .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_DEINO, },
    { .iv = 128, .lvl = 58, .species = SPECIES_NOIVERN, }
};

static const struct TrainerMon sParty_Perry[] = {
    { .lvl = 30, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2, },
    { .lvl = 30, .species = SPECIES_TOGETIC, }
};

static const struct TrainerMon sParty_Hugh[] = {
    { .lvl = 30, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2, },
    { .lvl = 30, .species = SPECIES_TROPIUS, .ability = ABILITY_HIDDEN, .heldItem = ITEM_SITRUS_BERRY, }
};

static const struct TrainerMon sParty_Phil[] = {
    { .lvl = 32, .species = SPECIES_SWELLOW, },
    { .lvl = 32, .species = SPECIES_PIDGEOTTO, }
};

static const struct TrainerMon sParty_Jared[] = {
    { .iv = 100, .lvl = 34, .species = SPECIES_SKARMORY, },
    { .iv = 100, .lvl = 35, .species = SPECIES_DODUO, },
    { .iv = 100, .lvl = 36, .species = SPECIES_TROPIUS, }
};

static const struct TrainerMon sParty_Humberto[] = {
    { .difficulty = TRAINER_HARD, .lvl = 35, .species = SPECIES_SKARMORY, },
    { .difficulty = TRAINER_HARD, .lvl = 35, .species = SPECIES_MINIOR, }
};

static const struct TrainerMon sParty_Presley[] = {
    { .lvl = 56, .species = SPECIES_TROPIUS, },
    { .lvl = 56, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Edwardo[] = {
    { .iv = 150, .lvl = 36, .species = SPECIES_DODRIO, },
    { .iv = 150, .lvl = 36, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Colin[] = {
    { .lvl = 34, .species = SPECIES_WINGULL, },
    { .lvl = 34, .species = SPECIES_NATU, }
};

static const struct TrainerMon sParty_Benny[] = {
    { .lvl = 36, .species = SPECIES_SWELLOW, },
    { .lvl = 36, .species = SPECIES_PELIPPER, },
    { .lvl = 36, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Chester[] = {
    { .lvl = 30, .species = SPECIES_SWELLOW, },
    { .lvl = 30, .species = SPECIES_PIDGEOTTO, }
};

static const struct TrainerMon sParty_Robert1[] = {
    { .lvl = 29, .species = SPECIES_NATU, },
    { .lvl = 29, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Robert2[] = {
    { .iv = 10, .lvl = 32, .species = SPECIES_NATU, },
    { .iv = 10, .lvl = 32, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Robert3[] = {
    { .iv = 20, .lvl = 35, .species = SPECIES_NATU, },
    { .iv = 20, .lvl = 35, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_Robert4[] = {
    { .iv = 30, .lvl = 38, .species = SPECIES_NATU, },
    { .iv = 30, .lvl = 38, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_Robert5[] = {
    { .iv = 40, .lvl = 41, .species = SPECIES_ALTARIA, },
    { .iv = 40, .lvl = 41, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Alex[] = {
    { .iv = 150, .lvl = 58, .species = SPECIES_NATU, },
    { .iv = 150, .lvl = 58, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Beck[] = {
    { .lvl = 57, .species = SPECIES_TROPIUS, },
    { .lvl = 57, .species = SPECIES_NOIBAT, }
};

static const struct TrainerMon sParty_Yasu[] = {
    { .lvl = 34, .species = SPECIES_NINJASK, },
    { .lvl = 34, .species = SPECIES_SHEDINJA,
      .moves =   {MOVE_SHADOW_CLAW, MOVE_NONE, MOVE_NONE, MOVE_NONE, } }
};

static const struct TrainerMon sParty_Takashi[] = {
    { .lvl = 32, .species = SPECIES_NINJASK, },
    { .lvl = 32, .species = SPECIES_KOFFING, }
};

static const struct TrainerMon sParty_Dianne[] = {
    { .lvl = 65, .species = SPECIES_CLAYDOL,
      .moves =   {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE} },
    { .lvl = 65, .species = SPECIES_LANTURN, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_DISCHARGE, MOVE_SURF, MOVE_NONE, MOVE_NONE} }
};

static const struct TrainerMon sParty_Jani[] = {
    { .lvl = 33, .species = SPECIES_MARILL, },
    { .lvl = 33, .species = SPECIES_WORMADAM, }
};

static const struct TrainerMon sParty_Lao1[] = {
    { .lvl = 21, .species = SPECIES_KOFFING, },
    { .lvl = 21, .species = SPECIES_KOFFING, },
    { .lvl = 21, .species = SPECIES_KOFFING, }
};

static const struct TrainerMon sParty_Lung[] = {
    { .lvl = 21, .species = SPECIES_KOFFING, },
    { .lvl = 21, .species = SPECIES_NINJASK, }
};

static const struct TrainerMon sParty_Lao2[] = {
    { .lvl = 24, .species = SPECIES_KOFFING, },
    { .lvl = 24, .species = SPECIES_KOFFING, },
    { .lvl = 24, .species = SPECIES_KOFFING, },
    { .lvl = 26, .species = SPECIES_KOFFING, }
};

static const struct TrainerMon sParty_Lao3[] = {
    { .iv = 20, .lvl = 27, .species = SPECIES_KOFFING, },
    { .iv = 20, .lvl = 27, .species = SPECIES_KOFFING, },
    { .iv = 20, .lvl = 27, .species = SPECIES_KOFFING, },
    { .iv = 20, .lvl = 29, .species = SPECIES_KOFFING, }
};

static const struct TrainerMon sParty_Lao4[] = {
    { .iv = 30, .lvl = 30, .species = SPECIES_KOFFING, },
    { .iv = 30, .lvl = 30, .species = SPECIES_KOFFING, },
    { .iv = 30, .lvl = 30, .species = SPECIES_KOFFING, },
    { .iv = 30, .lvl = 32, .species = SPECIES_KOFFING, }
};

static const struct TrainerMon sParty_Lao5[] = {
    { .iv = 40, .lvl = 33, .species = SPECIES_KOFFING, },
    { .iv = 40, .lvl = 33, .species = SPECIES_KOFFING, },
    { .iv = 40, .lvl = 33, .species = SPECIES_KOFFING, },
    { .iv = 40, .lvl = 35, .species = SPECIES_WEEZING, .heldItem = ITEM_SMOKE_BALL,}
};

static const struct TrainerMon sParty_Jocelyn[] = {
    { .iv = 127, .lvl = 13, .species = SPECIES_JANGMO_O, },
    { .iv = 127, .lvl = 14, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Laura[] = {
    { .iv = 150, .lvl = 14, .species = SPECIES_TIMBURR, },
    { .iv = 150, .lvl = 14, .species = SPECIES_MEDITITE, }
};

static const struct TrainerMon sParty_Cora[] = {
    { .iv = 100, .lvl = 27, .species = SPECIES_MEDITITE, },
    { .iv = 100, .lvl = 27, .species = SPECIES_RIOLU, }
};

static const struct TrainerMon sParty_Paula[] = {
    { .iv = 100, .lvl = 27, .species = SPECIES_BRELOOM, },
    { .iv = 100, .lvl = 27, .species = SPECIES_LUCARIO, }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    { .iv = 100, .lvl = 22, .species = SPECIES_MEDITITE, },
    { .iv = 100, .lvl = 22, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    { .iv = 110, .lvl = 26, .species = SPECIES_MEDITITE, },
    { .iv = 110, .lvl = 26, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    { .iv = 120, .lvl = 29, .species = SPECIES_MEDITITE, },
    { .iv = 120, .lvl = 29, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    { .iv = 130, .lvl = 32, .species = SPECIES_MEDICHAM, },
    { .iv = 130, .lvl = 32, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    { .iv = 140, .lvl = 35, .species = SPECIES_MEDICHAM, },
    { .iv = 140, .lvl = 35, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Clarissa[] = {
    { .lvl = 34, .species = SPECIES_ROSELIA, },
    { .lvl = 34, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Angelica[] = {
    { .iv = 50, .lvl = 35, .species = SPECIES_CASTFORM,
      .moves =   {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE} },
    { .iv = 50, .lvl = 35, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_TAILWIND, MOVE_WEATHER_BALL, MOVE_SOAK, MOVE_AIR_SLASH} }
};

static const struct TrainerMon sParty_Madeline1[] = {
    { .lvl = 22, .species = SPECIES_NUMEL,
      .moves =   {MOVE_LAVA_PLUME, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY} },
    { .lvl = 22, .species = SPECIES_PONYTA, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLAME_WHEEL, MOVE_STOMP, MOVE_PROTECT, MOVE_TAIL_WHIP} }
};

static const struct TrainerMon sParty_Madeline2[] = {
    { .iv = 10, .lvl = 29, .species = SPECIES_NUMEL,
      .moves =   {MOVE_LAVA_PLUME, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY} },
    { .iv = 10, .lvl = 29, .species = SPECIES_PONYTA, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLAME_CHARGE, MOVE_STOMP, MOVE_PROTECT, MOVE_TAIL_WHIP} }
};

static const struct TrainerMon sParty_Madeline3[] = {
    { .iv = 20, .lvl = 32, .species = SPECIES_NUMEL,
      .moves =   {MOVE_LAVA_PLUME, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY} },
    { .iv = 20, .lvl = 32, .species = SPECIES_PONYTA, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLAME_CHARGE, MOVE_STOMP, MOVE_PROTECT, MOVE_TAIL_WHIP} }
};

static const struct TrainerMon sParty_Madeline4[] = {
    { .iv = 30, .lvl = 36, .species = SPECIES_LEAFEON,
      .moves =   {MOVE_SYNTHESIS, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY} },
    { .iv = 30, .lvl = 36, .species = SPECIES_NUMEL,
      .moves =   {MOVE_LAVA_PLUME, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY} },
    { .iv = 30, .lvl = 36, .species = SPECIES_PONYTA, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLAME_CHARGE, MOVE_STOMP, MOVE_PROTECT, MOVE_TAIL_WHIP} }
};

static const struct TrainerMon sParty_Madeline5[] = {
    { .iv = 30, .lvl = 40, .species = SPECIES_LEAFEON,
      .moves =   {MOVE_SYNTHESIS, MOVE_LAST_RESORT, MOVE_SOLAR_BLADE, MOVE_SUNNY_DAY} },
    { .iv = 30, .lvl = 40, .species = SPECIES_CAMERUPT,
      .moves =   {MOVE_LAVA_PLUME, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY} },
    { .iv = 30, .lvl = 40, .species = SPECIES_RAPIDASH, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLARE_BLITZ, MOVE_STOMP, MOVE_BOUNCE, MOVE_TAIL_WHIP} }
};

static const struct TrainerMon sParty_Beverly[] = {
    { .lvl = 30, .species = SPECIES_PELIPPER, },
    { .lvl = 30, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Imani[] = {
    { .lvl = 30, .species = SPECIES_AZUMARILL, .ability = ABILITY_HIDDEN, },
    { .lvl = 30, .species = SPECIES_LUDICOLO,
      .moves =   {MOVE_NATURE_POWER, MOVE_MEGA_DRAIN, MOVE_FLAIL, MOVE_BUBBLE_BEAM } }
};

static const struct TrainerMon sParty_Kyla[] = {
    { .lvl = 30, .species = SPECIES_WAILMER, },
    { .lvl = 30, .species = SPECIES_SKRELP, }
};

static const struct TrainerMon sParty_Denise[] = {
    { .lvl = 25, .species = SPECIES_WINGULL, },
    { .lvl = 25, .species = SPECIES_GOLDEEN, }
};

static const struct TrainerMon sParty_Beth[] = {
    { .lvl = 30, .species = SPECIES_GOLDEEN, },
    { .lvl = 30, .species = SPECIES_FINNEON, }
};

static const struct TrainerMon sParty_Tara[] = {
    { .lvl = 30, .species = SPECIES_HORSEA, },
    { .lvl = 30, .species = SPECIES_MARILL, }
};

static const struct TrainerMon sParty_Missy[] = {
    { .lvl = 30, .species = SPECIES_GOLDEEN, },
    { .lvl = 30, .species = SPECIES_FINNEON, }
};

static const struct TrainerMon sParty_Alice[] = {
    { .lvl = 30, .species = SPECIES_GOLDEEN, },
    { .lvl = 30, .species = SPECIES_WINGULL, },
    { .lvl = 30, .species = SPECIES_GOLDEEN, }
};

static const struct TrainerMon sParty_Grace[] = {
    { .lvl = 51, .species = SPECIES_AZUMARILL, },
    { .lvl = 51, .species = SPECIES_VAPOREON, }
};

static const struct TrainerMon sParty_Tanya[] = {
    { .lvl = 56, .species = SPECIES_LUVDISC, },
    { .lvl = 56, .species = SPECIES_ALOMOMOLA, }
};

static const struct TrainerMon sParty_Sharon[] = {
    { .lvl = 56, .species = SPECIES_SEAKING, .ability = ABILITY_HIDDEN, },
    { .lvl = 56, .species = SPECIES_LANTURN, }
};

static const struct TrainerMon sParty_Nikki[] = {
    { .lvl = 55, .species = SPECIES_MARILL, },
    { .lvl = 55, .species = SPECIES_SPHEAL, }
};

static const struct TrainerMon sParty_Brenda[] = {
    { .lvl = 55, .species = SPECIES_SEAKING, .ability = ABILITY_HIDDEN, },
    { .lvl = 55, .species = SPECIES_FINNEON, }
};

static const struct TrainerMon sParty_Katie[] = {
    { .lvl = 57, .species = SPECIES_SEAKING, },
    { .lvl = 57, .species = SPECIES_WALREIN, }
};

static const struct TrainerMon sParty_Susie[] = {
    { .lvl = 57, .species = SPECIES_LUVDISC, },
    { .lvl = 57, .species = SPECIES_CORSOLA, }
};

static const struct TrainerMon sParty_Kara[] = {
    { .lvl = 57, .species = SPECIES_SEAKING, .ability = ABILITY_HIDDEN, },
    { .lvl = 57, .species = SPECIES_CHINCHOU, }
};

static const struct TrainerMon sParty_Dana[] = {
    { .lvl = 58, .species = SPECIES_AZUMARILL, .ability = ABILITY_SLOT_2, },
    { .lvl = 58, .species = SPECIES_SLOWBRO, }
};

static const struct TrainerMon sParty_Sienna[] = {
    { .lvl = 55, .species = SPECIES_LUVDISC, },
    { .lvl = 55, .species = SPECIES_LUVDISC, }
};

static const struct TrainerMon sParty_Debra[] = {
    { .lvl = 57, .species = SPECIES_SEAKING, .ability = ABILITY_HIDDEN, },
    { .lvl = 57, .species = SPECIES_LANTURN, }
};

static const struct TrainerMon sParty_Linda[] = {
    { .lvl = 57, .species = SPECIES_DRAGALGE, },
    { .lvl = 57, .species = SPECIES_SEADRA, }
};

static const struct TrainerMon sParty_Kaylee[] = {
    { .lvl = 34, .species = SPECIES_LANTURN, },
    { .lvl = 34, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Laurel[] = {
    { .lvl = 58, .species = SPECIES_LUVDISC, },
    { .lvl = 58, .species = SPECIES_CORSOLA, }
};

static const struct TrainerMon sParty_Carlee[] = {
    { .lvl = 35, .species = SPECIES_SEAKING, },
    { .lvl = 35, .species = SPECIES_SEAKING, }
};

static const struct TrainerMon sParty_Jenny1[] = {
    { .lvl = 53, .species = SPECIES_WAILMER, },
    { .lvl = 53, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Jenny2[] = {
    { .lvl = 55, .species = SPECIES_STARYU, },
    { .lvl = 55, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Jenny3[] = {
    { .lvl = 57, .species = SPECIES_STARYU, },
    { .lvl = 57, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Jenny4[] = {
    { .lvl = 59, .species = SPECIES_STARMIE, },
    { .lvl = 59, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Jenny5[] = {
    { .lvl = 61, .species = SPECIES_LUVDISC, },
    { .lvl = 61, .species = SPECIES_WAILORD, },
    { .lvl = 61, .species = SPECIES_STARMIE, }
};

static const struct TrainerMon sParty_Heidi[] = {
    { .lvl = 24, .species = SPECIES_SANDSHREW,
      .moves =   {MOVE_DIG, MOVE_BULLDOZE, MOVE_POISON_STING, MOVE_SLASH} },
    { .lvl = 24, .species = SPECIES_BALTOY,
      .moves =   {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB} }
};

static const struct TrainerMon sParty_Becky[] = {
    { .lvl = 27, .species = SPECIES_SANDSLASH, },
    { .lvl = 27, .species = SPECIES_AZUMARILL, }
};

static const struct TrainerMon sParty_Carol[] = {
    { .lvl = 22, .species = SPECIES_TAILLOW, },
    { .lvl = 22, .species = SPECIES_LOMBRE, }
};

static const struct TrainerMon sParty_Nancy[] = {
    { .lvl = 22, .species = SPECIES_MARILL, },
    { .lvl = 22, .species = SPECIES_LOMBRE, }
};

static const struct TrainerMon sParty_Martha[] = {
    { .lvl = 23, .species = SPECIES_SKITTY, },
    { .lvl = 23, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Diana1[] = {
    { .lvl = 24, .species = SPECIES_SHROOMISH, },
    { .lvl = 24, .species = SPECIES_ODDISH, },
    { .lvl = 24, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Cedric[] = {
    { .lvl = 42, .species = SPECIES_WOBBUFFET, },
    { .lvl = 42, .species = SPECIES_GOTHITELLE, }
};

static const struct TrainerMon sParty_Irene[] = {
    { .lvl = 21, .species = SPECIES_SHROOMISH, },
    { .lvl = 21, .species = SPECIES_MARILL, }
};

static const struct TrainerMon sParty_Diana2[] = {
    { .iv = 10, .lvl = 25, .species = SPECIES_SHROOMISH, },
    { .iv = 10, .lvl = 25, .species = SPECIES_GLOOM, },
    { .iv = 10, .lvl = 25, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Diana3[] = {
    { .iv = 20, .lvl = 28, .species = SPECIES_BRELOOM, },
    { .iv = 20, .lvl = 28, .species = SPECIES_GLOOM, },
    { .iv = 20, .lvl = 28, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Diana4[] = {
    { .iv = 30, .lvl = 31, .species = SPECIES_BRELOOM, },
    { .iv = 30, .lvl = 31, .species = SPECIES_GLOOM, },
    { .iv = 30, .lvl = 31, .species = SPECIES_SWABLU, }
};

static const struct TrainerMon sParty_Diana5[] = {
    { .iv = 40, .lvl = 40, .species = SPECIES_BRELOOM, },
    { .iv = 40, .lvl = 40, .species = SPECIES_VILEPLUME, },
    { .iv = 40, .lvl = 40, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    { .lvl = 15, .species = SPECIES_PLUSLE, },
    { .lvl = 15, .species = SPECIES_MINUN, }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    { .iv = 10, .lvl = 27, .species = SPECIES_PLUSLE, },
    { .iv = 10, .lvl = 27, .species = SPECIES_MINUN, }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    { .lvl = 6, .species = SPECIES_SEEDOT, },
    { .lvl = 6, .species = SPECIES_LOTAD, },
    { .lvl = 6, .species = SPECIES_GOTHITA, },
    { .lvl = 6, .species = SPECIES_SOLOSIS, }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    { .lvl = 10, .species = SPECIES_DUSKULL, },
    { .lvl = 10, .species = SPECIES_SHROOMISH, },
    { .lvl = 10, .species = SPECIES_GOTHITA, },
    { .lvl = 10, .species = SPECIES_SOLOSIS, }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    { .lvl = 32, .species = SPECIES_BEAUTIFLY, },
    { .lvl = 32, .species = SPECIES_DUSTOX, }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    { .lvl = 9, .species = SPECIES_PLUSLE, },
    { .lvl = 9, .species = SPECIES_MINUN, }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    { .iv = 20, .lvl = 30, .species = SPECIES_PLUSLE, },
    { .iv = 20, .lvl = 30, .species = SPECIES_MINUN, }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    { .iv = 30, .lvl = 33, .species = SPECIES_PLUSLE,
      .moves =   {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND} },
    { .iv = 30, .lvl = 33, .species = SPECIES_MINUN,
      .moves =   {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND} }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    { .iv = 40, .lvl = 36, .species = SPECIES_PLUSLE,
      .moves =   {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND} },
    { .iv = 40, .lvl = 36, .species = SPECIES_MINUN,
      .moves =   {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND} }
};

static const struct TrainerMon sParty_Huey[] = {
    { .iv = 10, .lvl = 12, .species = SPECIES_WINGULL, },
    { .iv = 10, .lvl = 12, .species = SPECIES_MACHOP, }
};

static const struct TrainerMon sParty_Edmond[] = {
    { .lvl = 13, .species = SPECIES_WINGULL, },
    { .lvl = 13, .species = SPECIES_PINCURCHIN, }
};

static const struct TrainerMon sParty_Dwayne[] = {
    { .lvl = 11, .species = SPECIES_WINGULL, },
    { .lvl = 11, .species = SPECIES_MACHOP, },
    { .lvl = 11, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Phillip[] = {
    { .lvl = 44, .species = SPECIES_TENTACRUEL, },
    { .lvl = 44, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Leonard[] = {
    { .lvl = 43, .species = SPECIES_MACHOP, },
    { .lvl = 43, .species = SPECIES_PELIPPER, },
    { .lvl = 43, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Duncan[] = {
    { .lvl = 32, .species = SPECIES_SPHEAL, },
    { .lvl = 32, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Ernest1[] = {
    { .lvl = 55, .species = SPECIES_PELIPPER, },
    { .lvl = 55, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Ernest2[] = {
    { .iv = 10, .lvl = 57, .species = SPECIES_PELIPPER, },
    { .iv = 10, .lvl = 57, .species = SPECIES_TENTACRUEL, },
    { .iv = 10, .lvl = 57, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Ernest3[] = {
    { .iv = 20, .lvl = 59, .species = SPECIES_PELIPPER, },
    { .iv = 20, .lvl = 59, .species = SPECIES_TENTACRUEL, },
    { .iv = 20, .lvl = 59, .species = SPECIES_MACHOKE, }
};

static const struct TrainerMon sParty_Ernest4[] = {
    { .iv = 30, .lvl = 61, .species = SPECIES_PELIPPER, },
    { .iv = 30, .lvl = 61, .species = SPECIES_TENTACRUEL, },
    { .iv = 30, .lvl = 61, .species = SPECIES_MACHAMP, }
};

static const struct TrainerMon sParty_Ernest5[] = {
    { .iv = 40, .lvl = 64, .species = SPECIES_PELIPPER, },
    { .iv = 40, .lvl = 64, .species = SPECIES_MACHAMP, },
    { .iv = 40, .lvl = 64, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Eli[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_NUMEL, },
    { .iv = 100, .lvl = 25, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_Annika[] = {
    { .iv = 100, .lvl = 63, .species = SPECIES_FEEBAS, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT} },
    { .iv = 100, .lvl = 63, .species = SPECIES_FEEBAS, .heldItem = ITEM_ORAN_BERRY,
      .moves =   {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT} }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    { .lvl = 32, .species = SPECIES_ABSOL, },
    { .lvl = 32, .species = SPECIES_SLOWKING, }
};

static const struct TrainerMon sParty_Jonas[] = {
    { .lvl = 40, .species = SPECIES_WEEZING,
      .moves =   {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB} },
    { .lvl = 40, .species = SPECIES_WEEZING,
      .moves =   {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB} }
};

static const struct TrainerMon sParty_Kayley[] = {
    { .lvl = 40, .species = SPECIES_CASTFORM,
      .moves =   {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_OMINOUS_WIND, MOVE_SOLAR_BEAM} },
    { .lvl = 40, .species = SPECIES_TORKOAL, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SUNNY_DAY, MOVE_RAPID_SPIN, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM} }
};

static const struct TrainerMon sParty_Auron[] = {
    { .lvl = 56, .species = SPECIES_MANECTRIC,
      .moves =   {MOVE_DISCHARGE, MOVE_WILD_CHARGE, MOVE_FIRE_FANG, MOVE_BITE } },
    { .lvl = 56, .species = SPECIES_MACHAMP, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WIDE_GUARD, MOVE_DYNAMIC_PUNCH, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE }}
};

static const struct TrainerMon sParty_Kelvin[] = {
    { .iv = 150, .lvl = 58, .species = SPECIES_MACHOKE, },
    { .iv = 150, .lvl = 58, .species = SPECIES_SPHEAL, }
};

static const struct TrainerMon sParty_Marley[] = {
    { .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_MANECTRIC,
      .moves =   {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_DISCHARGE} },
    { .difficulty = TRAINER_HARD, .lvl = 58, .species = SPECIES_PILOSWINE, }
};

static const struct TrainerMon sParty_Reyna[] = {
    { .iv = 50, .lvl = 58, .species = SPECIES_MEDITITE, },
    { .iv = 200, .lvl = 58, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Hudson[] = {
    { .lvl = 58, .species = SPECIES_VAPOREON, },
    { .lvl = 58, .species = SPECIES_FINNEON, }
};

static const struct TrainerMon sParty_Conor[] = {
    { .lvl = 58, .species = SPECIES_LANTURN, },
    { .iv = 200, .lvl = 58, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Edwin1[] = {
    { .lvl = 14, .species = SPECIES_LOMBRE, },
    { .lvl = 14, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Hector[] = {
    { .lvl = 22, .species = SPECIES_ZANGOOSE, },
    { .lvl = 22, .species = SPECIES_SEVIPER, }
};

static const struct TrainerMon sParty_Edwin2[] = {
    { .lvl = 26, .species = SPECIES_LOMBRE, },
    { .lvl = 26, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Edwin3[] = {
    { .lvl = 29, .species = SPECIES_LOMBRE, },
    { .lvl = 29, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Edwin4[] = {
    { .lvl = 32, .species = SPECIES_LOMBRE, },
    { .lvl = 32, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Edwin5[] = {
    { .lvl = 35, .species = SPECIES_LUDICOLO, },
    { .lvl = 35, .species = SPECIES_SHIFTRY, }
};

static const struct TrainerMon sParty_RivalRoute103Mudkip[] = {
    { .lvl = 5, .species = SPECIES_TREECKO, },
    { .lvl = 5, .species = SPECIES_EEVEE, }
};

static const struct TrainerMon sParty_RivalRustboroMudkip[] = {
    { .iv = 25, .lvl = 13, .species = SPECIES_WINGULL, },
    { .iv = 50, .lvl = 15, .species = SPECIES_TREECKO, },
    { .iv = 50, .lvl = 15, .species = SPECIES_EEVEE, }
};

static const struct TrainerMon sParty_RivalRoute110Mudkip[] = {
    { .iv = 50,  .lvl = 18, .species = SPECIES_SLUGMA, },
    { .iv = 50,  .lvl = 18, .species = SPECIES_WINGULL, },
    { .iv = 100, .lvl = 20, .species = SPECIES_GROVYLE, },
    { .iv = 100, .lvl = 20, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_RivalRoute119Mudkip[] = {
    { .iv = 100, .lvl = 29, .species = SPECIES_SLUGMA, },
    { .iv = 100, .lvl = 29, .species = SPECIES_PELIPPER, },
    { .iv = 150, .lvl = 31, .species = SPECIES_GROVYLE, },
    { .iv = 150, .lvl = 31, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_RivalLilycoveMudkip[] = {
    { .iv = 150, .lvl = 41, .species = SPECIES_TROPIUS, },
    { .iv = 150, .lvl = 42, .species = SPECIES_MAGCARGO, },
    { .iv = 150, .lvl = 42, .species = SPECIES_PELIPPER, },
    { .iv = 200, .lvl = 44, .species = SPECIES_SCEPTILE, .heldItem = ITEM_MEGA_STONE, },
    { .iv = 200, .lvl = 44, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_RivalRoute103Treecko[] = {
    { .lvl = 5, .species = SPECIES_TORCHIC, },
    { .lvl = 5, .species = SPECIES_EEVEE, }
};

static const struct TrainerMon sParty_RivalRustboroTreecko[] = {
    { .iv = 25, .lvl = 13, .species = SPECIES_LOTAD, },
    { .iv = 50, .lvl = 15, .species = SPECIES_TORCHIC, },
    { .iv = 50, .lvl = 15, .species = SPECIES_EEVEE, }
};

static const struct TrainerMon sParty_RivalRoute110Treecko[] = {
    { .iv = 50,  .lvl = 18, .species = SPECIES_WINGULL, },
    { .iv = 50,  .lvl = 18, .species = SPECIES_LOMBRE, },
    { .iv = 100, .lvl = 20, .species = SPECIES_COMBUSKEN, },
    { .iv = 100, .lvl = 20, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_RivalRoute119Treecko[] = {
    { .iv = 100, .lvl = 29, .species = SPECIES_PELIPPER, },
    { .iv = 100, .lvl = 29, .species = SPECIES_LOMBRE, },
    { .iv = 150, .lvl = 31, .species = SPECIES_COMBUSKEN, },
    { .iv = 150, .lvl = 31, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_RivalLilycoveTreecko[] = {
    { .iv = 150, .lvl = 41, .species = SPECIES_TROPIUS, },
    { .iv = 150, .lvl = 42, .species = SPECIES_PELIPPER, },
    { .iv = 150, .lvl = 42, .species = SPECIES_LUDICOLO, },
    { .iv = 200, .lvl = 44, .species = SPECIES_BLAZIKEN, .heldItem = ITEM_MEGA_STONE, },
    { .iv = 200, .lvl = 44, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_RivalRoute103Torchic[] = {
    { .lvl = 5, .species = SPECIES_MUDKIP, },
    { .lvl = 5, .species = SPECIES_EEVEE, }
};

static const struct TrainerMon sParty_RivalRustboroTorchic[] = {
    { .iv = 25, .lvl = 13, .species = SPECIES_SLUGMA, },
    { .iv = 50, .lvl = 15, .species = SPECIES_MUDKIP, },
    { .iv = 50, .lvl = 15, .species = SPECIES_EEVEE, }
};

static const struct TrainerMon sParty_RivalRoute110Torchic[] = {
    { .iv = 50,  .lvl = 18, .species = SPECIES_LOMBRE, },
    { .iv = 50,  .lvl = 18, .species = SPECIES_SLUGMA, },
    { .iv = 100, .lvl = 20, .species = SPECIES_MARSHTOMP, },
    { .iv = 100, .lvl = 20, .species = SPECIES_ESPEON, },
};

static const struct TrainerMon sParty_RivalRoute119Torchic[] = {
    { .iv = 100, .lvl = 29, .species = SPECIES_LOMBRE, },
    { .iv = 100, .lvl = 29, .species = SPECIES_SLUGMA, },
    { .iv = 150, .lvl = 31, .species = SPECIES_MARSHTOMP, },
    { .iv = 150, .lvl = 31, .species = SPECIES_ESPEON, },
};

static const struct TrainerMon sParty_RivalLilycoveTorchic[] = {
    { .iv = 150, .lvl = 41, .species = SPECIES_TROPIUS, },
    { .iv = 150, .lvl = 42, .species = SPECIES_LUDICOLO, },
    { .iv = 150, .lvl = 42, .species = SPECIES_MAGCARGO, },
    { .iv = 200, .lvl = 44, .species = SPECIES_SWAMPERT, .heldItem = ITEM_MEGA_STONE, },
    { .iv = 200, .lvl = 44, .species = SPECIES_ESPEON, }
};

static const struct TrainerMon sParty_Davis[] = {
    { .lvl = 30, .species = SPECIES_PINSIR, },
    { .lvl = 30, .species = SPECIES_HERACROSS, }
};

static const struct TrainerMon sParty_Mitchell[] = {
    { .lvl = 65, .species = SPECIES_SOLROCK,
      .moves =   {MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN} },
    { .lvl = 65, .species = SPECIES_LUNATONE,
      .moves =   {MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_ICY_WIND, MOVE_SHADOW_BALL} }
};


static const struct TrainerMon sParty_Isaac1[] = {
    { .lvl = 15, .species = SPECIES_WHISMUR, },
    { .lvl = 15, .species = SPECIES_LILLIPUP, },
    { .lvl = 15, .species = SPECIES_ARON, },
    { .lvl = 15, .species = SPECIES_POOCHYENA, },
    { .lvl = 15, .species = SPECIES_TAILLOW, },
    { .lvl = 15, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Isaac2[] = {
    { .iv = 10, .lvl = 22, .species = SPECIES_LOUDRED, },
    { .iv = 10, .lvl = 22, .species = SPECIES_HERDIER, },
    { .iv = 10, .lvl = 22, .species = SPECIES_ARON, },
    { .iv = 10, .lvl = 22, .species = SPECIES_MIGHTYENA, },
    { .iv = 10, .lvl = 22, .species = SPECIES_SWELLOW, },
    { .iv = 10, .lvl = 22, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Isaac3[] = {
    { .iv = 20, .lvl = 25, .species = SPECIES_LOUDRED, },
    { .iv = 20, .lvl = 25, .species = SPECIES_HERDIER, },
    { .iv = 20, .lvl = 25, .species = SPECIES_ARON, },
    { .iv = 20, .lvl = 25, .species = SPECIES_MIGHTYENA, },
    { .iv = 20, .lvl = 25, .species = SPECIES_SWELLOW, },
    { .iv = 20, .lvl = 25, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Isaac4[] = {
    { .iv = 30, .lvl = 28, .species = SPECIES_LOUDRED, },
    { .iv = 30, .lvl = 28, .species = SPECIES_HERDIER, },
    { .iv = 30, .lvl = 28, .species = SPECIES_ARON, },
    { .iv = 30, .lvl = 28, .species = SPECIES_MIGHTYENA, },
    { .iv = 30, .lvl = 28, .species = SPECIES_SWELLOW, },
    { .iv = 30, .lvl = 28, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Isaac5[] = {
    { .iv = 40, .lvl = 33, .species = SPECIES_LOUDRED, },
    { .iv = 40, .lvl = 33, .species = SPECIES_STOUTLAND, },
    { .iv = 40, .lvl = 33, .species = SPECIES_LAIRON, },
    { .iv = 40, .lvl = 33, .species = SPECIES_MIGHTYENA, },
    { .iv = 40, .lvl = 33, .species = SPECIES_SWELLOW, },
    { .iv = 40, .lvl = 33, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Halle[] = {
    { .lvl = 64, .species = SPECIES_SABLEYE, },
    { .lvl = 64, .species = SPECIES_ABSOL, }
};

static const struct TrainerMon sParty_Garrison[] = {
    { .lvl = 33, .species = SPECIES_SANDSLASH, },
    { .lvl = 33, .species = SPECIES_GOLETT, }
};

static const struct TrainerMon sParty_Lydia1[] = {
    { .lvl = 11, .species = SPECIES_WINGULL,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_WAVE_INCENSE, },
    { .lvl = 11, .species = SPECIES_SHROOMISH, .difficulty = TRAINER_EASIEST, .heldItem = ITEM_PURE_INCENSE, },
    { .lvl = 11, .species = SPECIES_AZURILL,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_SEA_INCENSE,  },
    { .lvl = 11, .species = SPECIES_BUDEW,     .difficulty = TRAINER_EASIEST, .heldItem = ITEM_ROSE_INCENSE, },
    { .lvl = 11, .species = SPECIES_SKITTY,    .difficulty = TRAINER_EASIEST, .heldItem = ITEM_LAX_INCENSE,  },
    { .lvl = 11, .species = SPECIES_GOLDEEN,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_LUCK_INCENSE, }
};

static const struct TrainerMon sParty_Lydia2[] = {
    { .lvl = 18, .species = SPECIES_WINGULL,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_WAVE_INCENSE, },
    { .lvl = 18, .species = SPECIES_SHROOMISH, .difficulty = TRAINER_EASIEST, .heldItem = ITEM_PURE_INCENSE, },
    { .lvl = 18, .species = SPECIES_MARILL,    .difficulty = TRAINER_EASIEST, .heldItem = ITEM_SEA_INCENSE,  },
    { .lvl = 18, .species = SPECIES_ROSELIA,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_ROSE_INCENSE, },
    { .lvl = 18, .species = SPECIES_SKITTY,    .difficulty = TRAINER_EASIEST, .heldItem = ITEM_LAX_INCENSE,  },
    { .lvl = 18, .species = SPECIES_GOLDEEN,   .difficulty = TRAINER_EASIEST, .heldItem = ITEM_LUCK_INCENSE, }
};

static const struct TrainerMon sParty_Lydia3[] = {
    { .lvl = 25, .species = SPECIES_WINGULL,   .difficulty = TRAINER_EASY, .heldItem = ITEM_WAVE_INCENSE, },
    { .lvl = 25, .species = SPECIES_BRELOOM,   .difficulty = TRAINER_EASY, .heldItem = ITEM_PURE_INCENSE, },
    { .lvl = 25, .species = SPECIES_MARILL,    .difficulty = TRAINER_EASY, .heldItem = ITEM_SEA_INCENSE,  },
    { .lvl = 25, .species = SPECIES_GOLDEEN,   .difficulty = TRAINER_EASY, .heldItem = ITEM_LUCK_INCENSE, },
    { .lvl = 25, .species = SPECIES_ROSELIA,   .difficulty = TRAINER_EASY, .heldItem = ITEM_ROSE_INCENSE, },
    { .lvl = 25, .species = SPECIES_DELCATTY,  .difficulty = TRAINER_EASY, .heldItem = ITEM_LAX_INCENSE,  
      .moves =   {MOVE_FAKE_TEARS, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_PLAY_ROUGH} }
};

static const struct TrainerMon sParty_Lydia4[] = {
    { .lvl = 28, .species = SPECIES_PELIPPER,  .difficulty = TRAINER_EASY, .heldItem = ITEM_WAVE_INCENSE, },
    { .lvl = 28, .species = SPECIES_BRELOOM,   .difficulty = TRAINER_EASY, .heldItem = ITEM_PURE_INCENSE, },
    { .lvl = 28, .species = SPECIES_MARILL,    .difficulty = TRAINER_EASY, .heldItem = ITEM_SEA_INCENSE,  },
    { .lvl = 28, .species = SPECIES_GOLDEEN,   .difficulty = TRAINER_EASY, .heldItem = ITEM_LUCK_INCENSE, },
    { .lvl = 28, .species = SPECIES_ROSERADE,  .difficulty = TRAINER_EASY, .heldItem = ITEM_ROSE_INCENSE, 
      .moves =   {MOVE_SWEET_SCENT, MOVE_PETAL_DANCE, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN} },
    { .lvl = 28, .species = SPECIES_DELCATTY,  .difficulty = TRAINER_EASY, .heldItem = ITEM_LAX_INCENSE,  
      .moves =   {MOVE_FAKE_TEARS, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_PLAY_ROUGH} }
};

static const struct TrainerMon sParty_Lydia5[] = {
    { .lvl = 31, .species = SPECIES_PELIPPER,  .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_WAVE_INCENSE, },
    { .lvl = 31, .species = SPECIES_BRELOOM,   .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_PURE_INCENSE, },
    { .lvl = 31, .species = SPECIES_AZUMARILL, .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_SEA_INCENSE,  },
    { .lvl = 31, .species = SPECIES_SEAKING,   .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_LUCK_INCENSE, },
    { .lvl = 31, .species = SPECIES_ROSERADE,  .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_ROSE_INCENSE, 
      .moves =   {MOVE_SWEET_SCENT, MOVE_PETAL_DANCE, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN} },
    { .lvl = 31, .species = SPECIES_DELCATTY,  .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_LAX_INCENSE,  
      .moves =   {MOVE_FAKE_TEARS, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_PLAY_ROUGH} }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    { .iv = 50, .lvl = 35, .species = SPECIES_BRELOOM, },
    { .iv = 50, .lvl = 35, .species = SPECIES_NUZLEAF, },
    { .iv = 50, .lvl = 35, .species = SPECIES_LOMBRE, }
};

static const struct TrainerMon sParty_Sebastian[] = {
    { .iv = 50, .lvl = 39, .species = SPECIES_CACTURNE, },
    { .iv = 50, .lvl = 39, .species = SPECIES_DARMANITAN, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_Jackson1[] = {
    { .iv = 50, .lvl = 32, .species = SPECIES_BRELOOM, },
    { .iv = 50, .lvl = 32, .species = SPECIES_ESPURR, }
};

static const struct TrainerMon sParty_Jackson2[] = {
    { .iv = 60, .lvl = 31, .species = SPECIES_BRELOOM, },
    { .iv = 60, .lvl = 31, .species = SPECIES_MEOWSTIC, }
};

static const struct TrainerMon sParty_Jackson3[] = {
    { .iv = 70, .lvl = 34, .species = SPECIES_BRELOOM, },
    { .iv = 70, .lvl = 34, .species = SPECIES_MEOWSTIC, }
};

static const struct TrainerMon sParty_Jackson4[] = {
    { .iv = 80, .lvl = 37, .species = SPECIES_BRELOOM, },
    { .iv = 50, .lvl = 37, .species = SPECIES_MEOWSTIC, }
};

static const struct TrainerMon sParty_Jackson5[] = {
    { .iv = 90, .lvl = 39, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN, },
    { .iv = 90, .lvl = 39, .species = SPECIES_BRELOOM, },
    { .iv = 50, .lvl = 39, .species = SPECIES_MEOWSTIC, }
};

static const struct TrainerMon sParty_Jenna[] = {
    { .iv = 50, .lvl = 35, .species = SPECIES_SHIINOTIC, },
    { .iv = 50, .lvl = 35, .species = SPECIES_LOMBRE, },
    { .iv = 50, .lvl = 35, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Sophia[] = {
    { .iv = 50, .lvl = 38, .species = SPECIES_SWABLU, },
    { .iv = 50, .lvl = 38, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Catherine1[] = {
    { .iv = 50, .lvl = 32, .species = SPECIES_GLOOM, },
    { .iv = 50, .lvl = 32, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Catherine2[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_GLOOM, },
    { .iv = 60, .lvl = 30, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Catherine3[] = {
    { .iv = 70, .lvl = 33, .species = SPECIES_GLOOM, },
    { .iv = 70, .lvl = 33, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Catherine4[] = {
    { .iv = 80, .lvl = 36, .species = SPECIES_GLOOM, },
    { .iv = 80, .lvl = 36, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Catherine5[] = {
    { .iv = 90, .lvl = 39, .species = SPECIES_BELLOSSOM, },
    { .iv = 90, .lvl = 39, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Julio[] = {
    { .lvl = 24, .species = SPECIES_MAGNEMITE, },
    { .lvl = 24, .species = SPECIES_MAGNEMITE, }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    { .iv = 50, .lvl = 60, .species = SPECIES_MIGHTYENA, },
    { .iv = 50, .lvl = 60, .species = SPECIES_GOLBAT, }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    { .lvl = 31, .species = SPECIES_WAILMER, },
    { .lvl = 31, .species = SPECIES_ZUBAT, }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    { .lvl = 44, .species = SPECIES_WAILMER, },
    { .lvl = 44, .species = SPECIES_GOLBAT, }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    { .iv = 50, .lvl = 22, .species = SPECIES_POOCHYENA, },
    { .iv = 50, .lvl = 22, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_Marc[] = {
    { .iv = 120, .lvl = 9, .species = SPECIES_GEODUDE, },
    { .iv = 130, .lvl = 9, .species = SPECIES_ARON, }
};

static const struct TrainerMon sParty_Brenden[] = {
    { .iv = 100, .lvl = 14, .species = SPECIES_MACHOP, },
    { .iv = 100, .lvl = 13, .species = SPECIES_TIMBURR, }
};

static const struct TrainerMon sParty_Lilith[] = {
    { .iv = 150, .lvl = 13, .species = SPECIES_MEDITITE, },
    { .iv = 150, .lvl = 13, .species = SPECIES_MEDITITE, }
};

static const struct TrainerMon sParty_Cristian[] = {
    { .iv = 200, .lvl = 13, .species = SPECIES_MAKUHITA, },
    { .iv = 200, .lvl = 14, .species = SPECIES_TYROGUE, }
};

static const struct TrainerMon sParty_Sylvia[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_MEDICHAM, },
    { .iv = 100, .lvl = 57, .species = SPECIES_BEHEEYEM, }
};

static const struct TrainerMon sParty_Leonardo[] = {
    { .lvl = 54, .species = SPECIES_SHARPEDO, },
    { .lvl = 54, .species = SPECIES_FINNEON, }
};

static const struct TrainerMon sParty_Athena[] = {
    { .iv = 100, .lvl = 56, .species = SPECIES_MANECTRIC, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_DISCHARGE} },
    { .iv = 100, .lvl = 56, .species = SPECIES_LINOONE,
      .moves =   {MOVE_BLIZZARD, MOVE_SLASH, MOVE_SURF, MOVE_NONE} }
};

static const struct TrainerMon sParty_Harrison[] = {
    { .lvl = 57, .species = SPECIES_TENTACRUEL, },
    { .lvl = 57, .species = SPECIES_JELLICENT, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    { .lvl = 24, .species = SPECIES_ZUBAT, },
    { .lvl = 24, .species = SPECIES_ZUBAT, }
};

static const struct TrainerMon sParty_Clarence[] = {
    { .lvl = 57, .species = SPECIES_SHARPEDO, },
    { .lvl = 57, .species = SPECIES_CLAUNCHER, }
};

static const struct TrainerMon sParty_Terry[] = {
    { .lvl = 37, .species = SPECIES_GIRAFARIG, },
    { .lvl = 37, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Nate[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_GRUMPIG, },
    { .iv = 100, .lvl = 57, .species = SPECIES_MEOWSTIC, }
};

static const struct TrainerMon sParty_Kathleen[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_KADABRA, },
    { .iv = 100, .lvl = 57, .species = SPECIES_DUOSION, }
};

static const struct TrainerMon sParty_Clifford[] = {
    { .iv = 100, .lvl = 57, .species = SPECIES_GIRAFARIG, },
    { .iv = 100, .lvl = 57, .species = SPECIES_GOTHORITA, }
};

static const struct TrainerMon sParty_Nicholas[] = {
    { .lvl = 57, .species = SPECIES_WOBBUFFET, },
    { .lvl = 57, .species = SPECIES_GOTHITELLE, }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    { .lvl = 55, .species = SPECIES_SWINUB, },
    { .lvl = 55, .species = SPECIES_GOLBAT, }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    { .lvl = 56, .species = SPECIES_CLAYDOL, },
    { .lvl = 56, .species = SPECIES_GOLETT, }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    { .lvl = 56, .species = SPECIES_GOLBAT, },
    { .lvl = 56, .species = SPECIES_MINIOR, }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    { .lvl = 55, .species = SPECIES_PILOSWINE, },
    { .lvl = 56, .species = SPECIES_MIGHTYENA, }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    { .lvl = 56, .species = SPECIES_CLAYDOL, },
    { .lvl = 56, .species = SPECIES_KROOKODILE, }
};

static const struct TrainerMon sParty_Macey[] = {
    { .lvl = 57, .species = SPECIES_XATU, },
    { .lvl = 57, .species = SPECIES_BELDUM,
      .moves =   {MOVE_POUND, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_IRON_DEFENSE } }
};

static const struct TrainerMon sParty_Paxton[] = {
    { .lvl = 55, .species = SPECIES_SWELLOW, },
    { .lvl = 55, .species = SPECIES_BRELOOM, }
};

static const struct TrainerMon sParty_Isabella[] = {
    { .lvl = 54, .species = SPECIES_STARYU, },
    { .lvl = 54, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    { .lvl = 33, .species = SPECIES_GOLBAT, },
    { .lvl = 33, .species = SPECIES_POOCHYENA, }
};

static const struct TrainerMon sParty_Jonathan[] = {
    { .lvl = 57, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN, },
    { .lvl = 57, .species = SPECIES_EXPLOUD, }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    { .lvl = 24, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_MEDIUM,
                 .ability = ABILITY_HIDDEN,    .nature = NATURE_HASTY, .heldItem = ITEM_RAZOR_FANG,
      .moves =   {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_HOWL, MOVE_BITE} },
    { .lvl = 24, .species = SPECIES_MAGBY,     .difficulty = TRAINER_MEDIUM,
                 .ability = ABILITY_SLOT_1,    .nature = NATURE_NAIVE, .heldItem = ITEM_SMOKE_BALL,
      .moves =   {MOVE_MACH_PUNCH, MOVE_CLEAR_SMOG, MOVE_CONFUSE_RAY, MOVE_FLAME_WHEEL} },
    { .lvl = 25, .species = SPECIES_GOLBAT,    .difficulty = TRAINER_MEDIUM,
                 .ability = ABILITY_HIDDEN,    .nature = NATURE_RASH, .heldItem = ITEM_EXPERT_BELT,
      .moves =   {MOVE_AIR_CUTTER, MOVE_QUICK_GUARD, MOVE_POISON_FANG, MOVE_HEAT_WAVE} },
    { .lvl = 26, .species = SPECIES_NUMEL,     .difficulty = TRAINER_MEDIUM,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_CALM, .heldItem = ITEM_PASSHO_BERRY,
      .moves =   {MOVE_STOCKPILE, MOVE_REST, MOVE_FLAME_CHARGE, MOVE_MAGNITUDE} }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    { .lvl = 49, .species = SPECIES_MIGHTYENA, .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_PHYS,
                 .ability = ABILITY_HIDDEN,    .nature = NATURE_HASTY,     .heldItem = ITEM_SALAC_BERRY,
      .moves =   {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_ME_FIRST, MOVE_PLAY_ROUGH} },
    { .lvl = 49, .species = SPECIES_CROBAT,    .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_HIDDEN,    .nature = NATURE_RASH,      .heldItem = ITEM_MAGO_BERRY,
      .moves =   {MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_LEECH_LIFE, MOVE_ACROBATICS} },
    { .lvl = 49, .species = SPECIES_MAGMORTAR, .difficulty = TRAINER_HARD, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_1,    .nature = NATURE_NAIVE,     .heldItem = ITEM_EXPERT_BELT,
      .moves =   {MOVE_MYSTICAL_FIRE, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_PSYCHIC} },
    { .lvl = 50, .species = SPECIES_CAMERUPT,  .difficulty = TRAINER_HARD, .build = TRAINER_MON_HP_DEF,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_CALM,      .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE} }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    { .lvl = 58, .species = SPECIES_CROBAT,    .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_HIDDEN,    .nature = NATURE_RASH,        .heldItem = ITEM_MAGO_BERRY,
      .moves =   {MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_LEECH_LIFE, MOVE_ACROBATICS} },
    { .lvl = 59, .species = SPECIES_MAGMORTAR, .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .ability = ABILITY_SLOT_1,    .nature = NATURE_NAIVE,       .heldItem = ITEM_EXPERT_BELT,
      .moves =   {MOVE_MYSTICAL_FIRE, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_PSYCHIC} },
    { .lvl = 60, .species = SPECIES_CAMERUPT,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_HP_DEF,
                 .ability = ABILITY_SLOT_2,    .nature = NATURE_CALM,        .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE} }
};

static const struct TrainerMon sParty_Tiana[] = {
    { .lvl = 4, .species = SPECIES_ZIGZAGOON, },
    { .lvl = 4, .species = SPECIES_AZURILL, },
    { .lvl = 4, .species = SPECIES_SHROOMISH, }
};

static const struct TrainerMon sParty_Haley1[] = {
    { .lvl = 6, .species = SPECIES_TYMPOLE,   .difficulty = TRAINER_EASIEST, },
    { .lvl = 6, .species = SPECIES_LOTAD,     .difficulty = TRAINER_EASIEST, },
    { .lvl = 6, .species = SPECIES_SHROOMISH, .difficulty = TRAINER_EASIEST, }
};

static const struct TrainerMon sParty_Haley2[] = {
    { .lvl = 26, .species = SPECIES_PALPITOAD, .difficulty = TRAINER_EASIEST, },
    { .lvl = 26, .species = SPECIES_LOMBRE,    .difficulty = TRAINER_EASIEST, },
    { .lvl = 26, .species = SPECIES_SHROOMISH, .difficulty = TRAINER_EASIEST, }
};

static const struct TrainerMon sParty_Haley3[] = {
    { .lvl = 29, .species = SPECIES_PALPITOAD, .difficulty = TRAINER_EASY, },
    { .lvl = 29, .species = SPECIES_LOMBRE,    .difficulty = TRAINER_EASY, },
    { .lvl = 29, .species = SPECIES_BRELOOM,   .difficulty = TRAINER_EASY, }
};

static const struct TrainerMon sParty_Haley4[] = {
    { .lvl = 32, .species = SPECIES_PALPITOAD, .difficulty = TRAINER_EASY, },
    { .lvl = 32, .species = SPECIES_LUDICOLO,  .difficulty = TRAINER_EASY, },
    { .lvl = 32, .species = SPECIES_BRELOOM,   .difficulty = TRAINER_EASY, }
};

static const struct TrainerMon sParty_Haley5[] = {
    { .lvl = 35, .species = SPECIES_SWELLOW,    .difficulty = TRAINER_MEDIUM, },
    { .lvl = 35, .species = SPECIES_SEISMITOAD, .difficulty = TRAINER_MEDIUM, },
    { .lvl = 35, .species = SPECIES_LOMBRE,     .difficulty = TRAINER_MEDIUM, },
    { .lvl = 35, .species = SPECIES_BRELOOM,    .difficulty = TRAINER_MEDIUM, }
};

static const struct TrainerMon sParty_Janice[] = {
    { .lvl = 12, .species = SPECIES_AZURILL, .ability = ABILITY_SLOT_2, },
    { .lvl = 12, .species = SPECIES_SURSKIT, }
};

static const struct TrainerMon sParty_Vivi[] = {
    { .iv = 100, .lvl = 20, .species = SPECIES_MARILL, },
    { .iv = 100, .lvl = 20, .species = SPECIES_SHROOMISH, },
    { .iv = 100, .lvl = 20, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_Sally[] = {
    { .lvl = 16, .species = SPECIES_ODDISH, },
    { .lvl = 16, .species = SPECIES_SEWADDLE, }
};

static const struct TrainerMon sParty_Robin[] = {
    { .lvl = 14, .species = SPECIES_SKITTY, },
    { .lvl = 14, .species = SPECIES_SHROOMISH, },
    { .lvl = 14, .species = SPECIES_MARILL, }
};

static const struct TrainerMon sParty_Andrea[] = {
    { .iv = 100, .lvl = 62, .species = SPECIES_LUVDISC,
      .moves =   {MOVE_HEART_STAMP, MOVE_ATTRACT, MOVE_HEAL_PULSE, MOVE_WATER_PULSE} },
    { .iv = 100, .lvl = 62, .species = SPECIES_DUNSPARCE,
      .moves =   {MOVE_GLARE, MOVE_HEADBUTT, MOVE_ROOST, MOVE_ANCIENT_POWER} }
};

static const struct TrainerMon sParty_Crissy[] = {
    { .iv = 100, .lvl = 63, .species = SPECIES_GOLDEEN, },
    { .iv = 100, .lvl = 63, .species = SPECIES_WAILMER, }
};

static const struct TrainerMon sParty_Rick[] = {
    { .lvl = 4, .species = SPECIES_WURMPLE, },
    { .lvl = 4, .species = SPECIES_SEWADDLE, }
};

static const struct TrainerMon sParty_Lyle[] = {
    { .lvl = 7, .species = SPECIES_SEWADDLE, },
    { .lvl = 7, .species = SPECIES_WEEDLE, },
    { .lvl = 7, .species = SPECIES_WURMPLE, },
    { .lvl = 7, .species = SPECIES_VENIPEDE, }
};

static const struct TrainerMon sParty_Jose[] = {
    { .iv = 50, .lvl = 8, .species = SPECIES_JOLTIK, },
    { .iv = 50, .lvl = 8, .species = SPECIES_NINCADA, },
    { .iv = 50, .lvl = 9, .species = SPECIES_WURMPLE, }
};

static const struct TrainerMon sParty_Doug[] = {
    { .lvl = 30, .species = SPECIES_NINCADA, },
    { .lvl = 30, .species = SPECIES_NINJASK, }
};

static const struct TrainerMon sParty_Greg[] = {
    { .lvl = 30, .species = SPECIES_VOLBEAT, },
    { .lvl = 30, .species = SPECIES_ILLUMISE, }
};

static const struct TrainerMon sParty_Kent[] = {
    { .lvl = 28, .species = SPECIES_NINJASK, },
    { .lvl = 28, .species = SPECIES_SHEDINJA,
      .moves =   {MOVE_SHADOW_CLAW, MOVE_NONE, MOVE_NONE, MOVE_NONE, }, }
};

static const struct TrainerMon sParty_James1[] = {
    { .lvl = 6, .species = SPECIES_JOLTIK,  .difficulty = TRAINER_EASIEST, },
    { .lvl = 6, .species = SPECIES_NINCADA, .difficulty = TRAINER_EASIEST, }
};

static const struct TrainerMon sParty_James2[] = {
    { .lvl = 27, .species = SPECIES_JOLTIK,   .difficulty = TRAINER_EASIEST, },
    { .lvl = 27, .species = SPECIES_NINJASK,  .difficulty = TRAINER_EASIEST, 
      .moves =   {MOVE_BATON_PASS, MOVE_AERIAL_ACE, MOVE_DIG, MOVE_FURY_CUTTER} },
    { .lvl = 27, .species = SPECIES_SHEDINJA, .difficulty = TRAINER_EASIEST, 
      .moves =   {MOVE_GRUDGE, MOVE_SHADOW_SNEAK, MOVE_CONFUSE_RAY, MOVE_SHADOW_CLAW} }
};

static const struct TrainerMon sParty_James3[] = {
    { .lvl = 29, .species = SPECIES_DUSTOX,   .difficulty = TRAINER_EASY, },
    { .lvl = 29, .species = SPECIES_JOLTIK,   .difficulty = TRAINER_EASY, },
    { .lvl = 29, .species = SPECIES_NINJASK,  .difficulty = TRAINER_EASY, 
      .moves =   {MOVE_BATON_PASS, MOVE_AERIAL_ACE, MOVE_DIG, MOVE_FURY_CUTTER} },
    { .lvl = 29, .species = SPECIES_SHEDINJA, .difficulty = TRAINER_EASY, 
      .moves =   {MOVE_GRUDGE, MOVE_SHADOW_SNEAK, MOVE_CONFUSE_RAY, MOVE_SHADOW_CLAW} }
};

static const struct TrainerMon sParty_James4[] = {
    { .lvl = 32, .species = SPECIES_SURSKIT,  .difficulty = TRAINER_EASY, },
    { .lvl = 32, .species = SPECIES_DUSTOX,   .difficulty = TRAINER_EASY, },
    { .lvl = 32, .species = SPECIES_JOLTIK,   .difficulty = TRAINER_EASY, },
    { .lvl = 32, .species = SPECIES_NINJASK,  .difficulty = TRAINER_EASY, 
      .moves =   {MOVE_BATON_PASS, MOVE_AERIAL_ACE, MOVE_DIG, MOVE_FURY_CUTTER} },
    { .lvl = 32, .species = SPECIES_SHEDINJA, .difficulty = TRAINER_EASY, 
      .moves =   {MOVE_GRUDGE, MOVE_SHADOW_SNEAK, MOVE_CONFUSE_RAY, MOVE_SHADOW_CLAW} }
};

static const struct TrainerMon sParty_James5[] = {
    { .lvl = 34, .species = SPECIES_MASQUERAIN, .difficulty = TRAINER_EASY, },
    { .lvl = 34, .species = SPECIES_DUSTOX,     .difficulty = TRAINER_EASY, },
    { .lvl = 34, .species = SPECIES_GALVANTULA, .difficulty = TRAINER_EASY, },
    { .lvl = 34, .species = SPECIES_NINJASK,    .difficulty = TRAINER_EASY, 
      .moves =   {MOVE_BATON_PASS, MOVE_AERIAL_ACE, MOVE_DIG, MOVE_FURY_CUTTER} },
    { .lvl = 34, .species = SPECIES_SHEDINJA,   .difficulty = TRAINER_EASY, 
      .moves =   {MOVE_GRUDGE, MOVE_SHADOW_SNEAK, MOVE_CONFUSE_RAY, MOVE_SHADOW_CLAW} }
};

static const struct TrainerMon sParty_Brice[] = {
    { .lvl = 22, .species = SPECIES_NUMEL, },
    { .lvl = 22, .species = SPECIES_MACHOP, }
};

static const struct TrainerMon sParty_Lenny[] = {
    { .lvl = 23, .species = SPECIES_GEODUDE, },
    { .lvl = 23, .species = SPECIES_MACHOP, }
};

static const struct TrainerMon sParty_Alan[] = {
    { .lvl = 22, .species = SPECIES_GEODUDE, },
    { .lvl = 22, .species = SPECIES_NOSEPASS, },
    { .lvl = 22, .species = SPECIES_GRAVELER, }
};

static const struct TrainerMon sParty_Clark[] = {
    { .lvl = 10, .species = SPECIES_GEODUDE, },
    { .lvl = 10, .species = SPECIES_MUNNA, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_Eric[] = {
    { .lvl = 24, .species = SPECIES_GEODUDE, },
    { .lvl = 24, .species = SPECIES_BALTOY, }
};

static const struct TrainerMon sParty_Lucas1[] = {
    { .lvl = 22, .species = SPECIES_GEODUDE, },
    { .lvl = 22, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_Lucas2[] = {
    { .lvl = 9, .species = SPECIES_WAILMER,
      .moves =   {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE} },
    { .lvl = 9, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_Mike[] = {
    { .lvl = 16, .species = SPECIES_GEODUDE, },
    { .lvl = 16, .species = SPECIES_GEODUDE, },
    { .lvl = 16, .species = SPECIES_MACHOP, }
};

static const struct TrainerMon sParty_Trent1[] = {
    { .lvl = 20, .species = SPECIES_GEODUDE, },
    { .lvl = 21, .species = SPECIES_GEODUDE, },
    { .lvl = 22, .species = SPECIES_GEODUDE, }
};

static const struct TrainerMon sParty_Trent2[] = {
    { .iv = 10, .lvl = 24, .species = SPECIES_GEODUDE, },
    { .iv = 10, .lvl = 24, .species = SPECIES_GEODUDE, },
    { .iv = 10, .lvl = 24, .species = SPECIES_GEODUDE, },
    { .iv = 10, .lvl = 24, .species = SPECIES_GRAVELER, }
};

static const struct TrainerMon sParty_Trent3[] = {
    { .iv = 20, .lvl = 27, .species = SPECIES_GEODUDE, },
    { .iv = 20, .lvl = 27, .species = SPECIES_GEODUDE, },
    { .iv = 20, .lvl = 27, .species = SPECIES_GRAVELER, },
    { .iv = 20, .lvl = 27, .species = SPECIES_GRAVELER, }
};

static const struct TrainerMon sParty_Trent4[] = {
    { .iv = 30, .lvl = 30, .species = SPECIES_GEODUDE, },
    { .iv = 30, .lvl = 30, .species = SPECIES_GRAVELER, },
    { .iv = 30, .lvl = 30, .species = SPECIES_GRAVELER, },
    { .iv = 30, .lvl = 30, .species = SPECIES_GRAVELER, }
};

static const struct TrainerMon sParty_Trent5[] = {
    { .iv = 40, .lvl = 33, .species = SPECIES_GRAVELER, },
    { .iv = 40, .lvl = 33, .species = SPECIES_GRAVELER, },
    { .iv = 40, .lvl = 33, .species = SPECIES_GRAVELER, },
    { .iv = 40, .lvl = 33, .species = SPECIES_GOLEM, }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    { .lvl = 42, .species = SPECIES_DELCATTY, },
    { .lvl = 42, .species = SPECIES_MANECTRIC, }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    { .lvl = 45, .species = SPECIES_LUVDISC, },
    { .lvl = 45, .species = SPECIES_LUVDISC, }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    { .lvl = 34, .species = SPECIES_VOLBEAT, },
    { .lvl = 34, .species = SPECIES_ILLUMISE, }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    { .iv = 10, .lvl = 30, .species = SPECIES_VOLBEAT, },
    { .iv = 10, .lvl = 30, .species = SPECIES_ILLUMISE, }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    { .iv = 20, .lvl = 33, .species = SPECIES_VOLBEAT, },
    { .iv = 20, .lvl = 33, .species = SPECIES_ILLUMISE, }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    { .iv = 30, .lvl = 36, .species = SPECIES_VOLBEAT, },
    { .iv = 30, .lvl = 36, .species = SPECIES_ILLUMISE, }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    { .iv = 40, .lvl = 39, .species = SPECIES_VOLBEAT, },
    { .iv = 40, .lvl = 39, .species = SPECIES_ILLUMISE, }
};

static const struct TrainerMon sParty_Johanna[] = {
    { .lvl = 13, .species = SPECIES_GOLDEEN, },
    { .lvl = 13, .species = SPECIES_GOLDEEN, }
};

static const struct TrainerMon sParty_Gerald[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_KECLEON, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND} },
    { .iv = 100, .lvl = 25, .species = SPECIES_STARYU}
};

static const struct TrainerMon sParty_Vivian[] = {
    { .iv = 100, .lvl = 19, .species = SPECIES_RAICHU_ALOLAN,
      .moves =   {MOVE_NUZZLE, MOVE_DISARMING_VOICE, MOVE_CONFUSION, MOVE_TICKLE} },
    { .iv = 100, .lvl = 21, .species = SPECIES_MEDITITE,
      .moves =   {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_FORCE_PALM} }
};

static const struct TrainerMon sParty_Danielle[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_MEDITITE,
      .moves =   {MOVE_FORCE_PALM, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH} },
    { .iv = 100, .lvl = 25, .species = SPECIES_MEDITITE,
      .moves =   {MOVE_FORCE_PALM, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH} }
};

static const struct TrainerMon sParty_Hideo[] = {
    { .lvl = 34, .species = SPECIES_KOFFING,
      .moves =   {MOVE_GYRO_BALL, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN} },
    { .lvl = 34, .species = SPECIES_KOFFING,
      .moves =   {MOVE_PROTECT, MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN} }
};

static const struct TrainerMon sParty_Keigo[] = {
    { .lvl = 28, .species = SPECIES_KOFFING,
      .moves =   {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN} },
    { .lvl = 28, .species = SPECIES_NINJASK,
      .moves =   {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE} }
};

static const struct TrainerMon sParty_Riley[] = {
    { .lvl = 35, .species = SPECIES_NINJASK, },
    { .lvl = 35, .species = SPECIES_KOFFING, }
};

static const struct TrainerMon sParty_Flint[] = {
    { .iv = 150, .lvl = 36, .species = SPECIES_SWELLOW, },
    { .iv = 150, .lvl = 36, .species = SPECIES_XATU, }
};

static const struct TrainerMon sParty_Ashley[] = {
    { .iv = 100, .lvl = 34, .species = SPECIES_PIDGEOTTO, },
    { .iv = 100, .lvl = 34, .species = SPECIES_SWABLU, },
    { .iv = 100, .lvl = 35, .species = SPECIES_ALTARIA, }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    { .lvl = 19, .species = SPECIES_RALTS, .difficulty = TRAINER_MEDIUM, },
    { .lvl = 19, .species = SPECIES_BUDEW, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    { .lvl = 65, .species = SPECIES_GARDEVOIR,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_CALM,         .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ICY_WIND, MOVE_CHARGE_BEAM, MOVE_PSYSHOCK, MOVE_HYPER_VOICE} },
    { .lvl = 63, .species = SPECIES_DELCATTY,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_HP_DEF,
                 .nature = NATURE_ADAMANT,      .heldItem = ITEM_FOCUS_SASH,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WISH, MOVE_ASSIST, MOVE_HELPING_HAND, MOVE_FEINT_ATTACK} },
    { .lvl = 64, .species = SPECIES_ALTARIA,    .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_TIMID,        .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_MOONBLAST, MOVE_HEAL_BELL, MOVE_DRAGON_PULSE, MOVE_COTTON_GUARD} },
    { .lvl = 61, .species = SPECIES_MAGNEZONE,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_MODEST,       .heldItem = ITEM_AIR_BALLOON, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH} },
    { .lvl = 65, .species = SPECIES_ROSERADE,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_MODEST,       .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC} }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    { .lvl = 69, .species = SPECIES_GARDEVOIR,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_CALM,         .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ICY_WIND, MOVE_CHARGE_BEAM, MOVE_PSYSHOCK, MOVE_HYPER_VOICE} },
    { .lvl = 67, .species = SPECIES_DELCATTY,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_HP_DEF,
                 .nature = NATURE_ADAMANT,      .heldItem = ITEM_FOCUS_SASH,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WISH, MOVE_ASSIST, MOVE_HELPING_HAND, MOVE_FEINT_ATTACK} },
    { .lvl = 68, .species = SPECIES_ALTARIA,    .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_TIMID,        .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_MOONBLAST, MOVE_HEAL_BELL, MOVE_DRAGON_PULSE, MOVE_COTTON_GUARD} },
    { .lvl = 66, .species = SPECIES_MAGNEZONE,  .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_MODEST,       .heldItem = ITEM_AIR_BALLOON, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH} },
    { .lvl = 69, .species = SPECIES_ROSERADE,   .difficulty = TRAINER_HARDER, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_MODEST,       .heldItem = ITEM_YACHE_BERRY, .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC} }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    { .lvl = 73, .species = SPECIES_GARDEVOIR,  .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_CALM,         .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ICY_WIND, MOVE_CHARGE_BEAM, MOVE_PSYSHOCK, MOVE_HYPER_VOICE} },
    { .lvl = 71, .species = SPECIES_DELCATTY,   .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_HP_DEF,
                 .nature = NATURE_ADAMANT,      .heldItem = ITEM_FOCUS_SASH,   .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_WISH, MOVE_ASSIST, MOVE_HELPING_HAND, MOVE_FEINT_ATTACK} },
    { .lvl = 72, .species = SPECIES_ALTARIA,    .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_TIMID,        .heldItem = ITEM_YACHE_BERRY,  .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_MOONBLAST, MOVE_HEAL_BELL, MOVE_DRAGON_PULSE, MOVE_COTTON_GUARD} },
    { .lvl = 72, .species = SPECIES_MAGNEZONE,  .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_MODEST,       .heldItem = ITEM_AIR_BALLOON,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH} },
    { .lvl = 73, .species = SPECIES_ROSERADE,   .difficulty = TRAINER_HARDEST, .build = TRAINER_MON_SPEED_SPEC,
                 .nature = NATURE_MODEST,       .heldItem = ITEM_YACHE_BERRY,  .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC} }
};

static const struct TrainerMon sParty_Jonah[] = {
    { .lvl = 55, .species = SPECIES_WAILMER, },
    { .lvl = 56, .species = SPECIES_TENTACOOL, },
    { .lvl = 57, .species = SPECIES_SHARPEDO, }
};

static const struct TrainerMon sParty_Henry[] = {
    { .lvl = 54, .species = SPECIES_CARVANHA, },
    { .lvl = 57, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Roger[] = {
    { .lvl = 56, .species = SPECIES_GYARADOS, .ability = ABILITY_HIDDEN,  },
    { .lvl = 56, .species = SPECIES_MILOTIC,  .ability = ABILITY_SLOT_2,  },
    { .lvl = 85, .species = SPECIES_FEEBAS,   .ability = ABILITY_HIDDEN, .heldItem = ITEM_EVIOLITE,
      .moves =   {MOVE_SPLASH, MOVE_FLAIL, MOVE_ICY_WIND, MOVE_MUDDY_WATER} },
    { .lvl = 85, .species = SPECIES_MAGIKARP, .ability = ABILITY_HIDDEN, .heldItem = ITEM_EVERSTONE, .shiny = TRUE,
      .moves =   {MOVE_SPLASH, MOVE_FLAIL, MOVE_BOUNCE, MOVE_HYDRO_PUMP} }
};

static const struct TrainerMon sParty_Alexa[] = {
    { .iv = 100, .lvl = 55, .species = SPECIES_GLOOM, },
    { .iv = 100, .lvl = 55, .species = SPECIES_AZUMARILL, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_Ruben[] = {
    { .lvl = 56, .species = SPECIES_SHIFTRY,   .difficulty = TRAINER_HARD, .heldItem = ITEM_AIR_BALLOON,
      .moves =   {MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_BULLET_SEED, MOVE_SYNTHESIS} },
    { .lvl = 56, .species = SPECIES_PROBOPASS, .difficulty = TRAINER_HARD, .heldItem = ITEM_SHUCA_BERRY,
      .moves =   {MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_FLASH_CANNON} }
};

static const struct TrainerMon sParty_Wayne[] = {
    { .lvl = 55, .species = SPECIES_TENTACRUEL, },
    { .lvl = 55, .species = SPECIES_JELLICENT, },
    { .lvl = 56, .species = SPECIES_WAILORD, }
};

static const struct TrainerMon sParty_Aidan[] = {
    { .lvl = 56, .species = SPECIES_SWELLOW, },
    { .lvl = 56, .species = SPECIES_SKARMORY, }
};

static const struct TrainerMon sParty_Reed[] = {
    { .lvl = 57, .species = SPECIES_SEALEO, },
    { .lvl = 57, .species = SPECIES_SHARPEDO, }
};

static const struct TrainerMon sParty_Tisha[] = {
    { .lvl = 56, .species = SPECIES_CHINCHOU, },
    { .lvl = 56, .species = SPECIES_PINCURCHIN, }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    { .lvl = 24, .species = SPECIES_SPINDA, },
    { .lvl = 24, .species = SPECIES_SPINDA, }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    { .lvl = 53, .species = SPECIES_ALTARIA, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 56, .species = SPECIES_CAMERUPT, }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    { .lvl = 22, .species = SPECIES_ROSELIA,
      .moves =   {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED} },
    { .lvl = 25, .species = SPECIES_GRAVELER,
      .moves =   {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW} }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    { .lvl = 31, .species = SPECIES_DUSTOX,
      .moves =   {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT} },
    { .lvl = 31, .species = SPECIES_BEAUTIFLY,
      .moves =   {MOVE_AIR_CUTTER, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_SILVER_WIND} }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    { .lvl = 39, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT} },
    { .lvl = 39, .species = SPECIES_HARIYAMA, .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_FOCUS_PUNCH, MOVE_FEINT, MOVE_REST, MOVE_BELLY_DRUM} }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    { .lvl = 42, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_MEDIUM, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT} },
    { .lvl = 42, .species = SPECIES_HARIYAMA, .difficulty = TRAINER_MEDIUM,
      .moves =   {MOVE_FOCUS_PUNCH, MOVE_FEINT, MOVE_REST, MOVE_BELLY_DRUM} }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    { .lvl = 46, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT} },
    { .lvl = 46, .species = SPECIES_HARIYAMA, .difficulty = TRAINER_HARD,
      .moves =   {MOVE_FOCUS_PUNCH, MOVE_FEINT, MOVE_REST, MOVE_BELLY_DRUM} }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    { .lvl = 49, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT} },
    { .lvl = 49, .species = SPECIES_HARIYAMA, .difficulty = TRAINER_HARD,
      .moves =   {MOVE_CLOSE_COMBAT, MOVE_FEINT, MOVE_REST, MOVE_BELLY_DRUM} }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    { .lvl = 52, .species = SPECIES_MEDICHAM, .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT} },
    { .lvl = 52, .species = SPECIES_HARIYAMA, .difficulty = TRAINER_HARD,
      .moves =   {MOVE_CLOSE_COMBAT, MOVE_BULLET_PUNCH, MOVE_REST, MOVE_BELLY_DRUM} }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    { .lvl = 59, .species = SPECIES_AZUMARILL, .ability = ABILITY_SLOT_2, },
    { .lvl = 54, .species = SPECIES_PELIPPER, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    { .lvl = 52, .species = SPECIES_SHARPEDO, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 50, .species = SPECIES_CHINCHOU, }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    { .lvl = 55, .species = SPECIES_SHARPEDO, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 52, .species = SPECIES_CHINCHOU, }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    { .lvl = 57, .species = SPECIES_SHARPEDO, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 54, .species = SPECIES_LANTURN, }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    { .lvl = 60, .species = SPECIES_SHARPEDO, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 56, .species = SPECIES_LANTURN, }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    { .lvl = 62, .species = SPECIES_SHARPEDO, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 58, .species = SPECIES_LANTURN, }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    { .lvl = 34, .species = SPECIES_GOLDEEN, },
    { .lvl = 29, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Chris[] = {
    { .lvl = 29, .species = SPECIES_GYARADOS, },
    { .lvl = 30, .species = SPECIES_TENTACRUEL, },
    { .lvl = 31, .species = SPECIES_FEEBAS,
      .moves =   { MOVE_DRAGON_BREATH, MOVE_WATER_PULSE, MOVE_NONE, MOVE_NONE } },
    { .lvl = 32, .species = SPECIES_CARVANHA, }
};

static const struct TrainerMon sParty_Dawson[] = {
    { .lvl = 11, .species = SPECIES_ZIGZAGOON, .heldItem = ITEM_NUGGET },
    { .lvl = 11, .species = SPECIES_POOCHYENA}
};

static const struct TrainerMon sParty_Sarah[] = {
    { .lvl = 11, .species = SPECIES_LOTAD},
    { .lvl = 11, .species = SPECIES_ZIGZAGOON, .heldItem = ITEM_NUGGET }
};

static const struct TrainerMon sParty_Darian[] = {
    { .lvl = 9, .species = SPECIES_MAGIKARP, },
    { .lvl = 9, .species = SPECIES_SHELLOS, }
};

static const struct TrainerMon sParty_Hailey[] = {
    { .lvl = 13, .species = SPECIES_MARILL, },
    { .lvl = 13, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Chandler[] = {
    { .lvl = 12, .species = SPECIES_TENTACOOL, },
    { .lvl = 12, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Kaleb[] = {
    { .lvl = 14, .species = SPECIES_MINUN,  .heldItem = ITEM_ORAN_BERRY },
    { .lvl = 14, .species = SPECIES_PLUSLE, .heldItem = ITEM_ORAN_BERRY }
};

static const struct TrainerMon sParty_Joseph[] = {
    { .lvl = 14, .species = SPECIES_ELECTRIKE, },
    { .lvl = 14, .species = SPECIES_VOLTORB, }
};

static const struct TrainerMon sParty_Alyssa[] = {
    { .lvl = 15, .species = SPECIES_MAGNEMITE, },
    { .lvl = 15, .species = SPECIES_MAGNEMITE, }
};

static const struct TrainerMon sParty_Marcos[] = {
    { .iv = 100, .lvl = 15, .species = SPECIES_VOLTORB, },
    { .iv = 100, .lvl = 15, .species = SPECIES_VOLTORB, }
};

static const struct TrainerMon sParty_Rhett[] = {
    { .iv = 100, .lvl = 15, .species = SPECIES_MAKUHITA, },
    { .iv = 100, .lvl = 15, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Tyron[] = {
    { .lvl = 19, .species = SPECIES_SANDSHREW, },
    { .lvl = 19, .species = SPECIES_TRAPINCH,
      .moves =   {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_SAND_TOMB, MOVE_BITE}, }
};

static const struct TrainerMon sParty_Celina[] = {
    { .lvl = 18, .species = SPECIES_BUDEW, },
    { .lvl = 18, .species = SPECIES_HAPPINY, }
};

static const struct TrainerMon sParty_Bianca[] = {
    { .lvl = 18, .species = SPECIES_SHROOMISH, },
    { .lvl = 18, .species = SPECIES_MORELULL, }
};

static const struct TrainerMon sParty_Hayden[] = {
    { .lvl = 18, .species = SPECIES_NUMEL,    .difficulty = TRAINER_EASIEST, },
    { .lvl = 18, .species = SPECIES_SALANDIT, .difficulty = TRAINER_EASIEST,
      .moves =   {MOVE_EMBER, MOVE_SMOG, MOVE_SWEET_SCENT, MOVE_POISON_GAS}, }
};

static const struct TrainerMon sParty_Sophie[] = {
    { .lvl = 23, .species = SPECIES_MARILL, },
    { .lvl = 23, .species = SPECIES_LOMBRE, }
};

static const struct TrainerMon sParty_Coby[] = {
    { .lvl = 20, .species = SPECIES_SKARMORY, },
    { .lvl = 23, .species = SPECIES_SWELLOW, }
};

static const struct TrainerMon sParty_Lawrence[] = {
    { .lvl = 23, .species = SPECIES_BALTOY, },
    { .lvl = 23, .species = SPECIES_SANDSHREW, }
};

static const struct TrainerMon sParty_Wyatt[] = {
    { .lvl = 20, .species = SPECIES_SKARMORY, },
    { .lvl = 24, .species = SPECIES_ARON, }
};

static const struct TrainerMon sParty_Angelina[] = {
    { .lvl = 22, .species = SPECIES_LOMBRE, },
    { .lvl = 22, .species = SPECIES_MARILL, }
};

static const struct TrainerMon sParty_Kai[] = {
    { .lvl = 23, .species = SPECIES_BARBOACH, },
    { .lvl = 23, .species = SPECIES_BARBOACH, }
};

static const struct TrainerMon sParty_Charlotte[] = {
    { .lvl = 19, .species = SPECIES_NUZLEAF, },
    { .lvl = 19, .species = SPECIES_LOMBRE, }
};

static const struct TrainerMon sParty_Deandre[] = {
    { .lvl = 19, .species = SPECIES_ZIGZAGOON, },
    { .lvl = 19, .species = SPECIES_ARON, },
    { .lvl = 19, .species = SPECIES_ELECTRIKE, }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    { .lvl = 45, .species = SPECIES_GOLBAT, },
    { .lvl = 45, .species = SPECIES_KROKOROK, }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    { .lvl = 45, .species = SPECIES_MIGHTYENA, },
    { .lvl = 45, .species = SPECIES_ARCANINE, }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    { .lvl = 45, .species = SPECIES_CAMERUPT, },
    { .lvl = 45, .species = SPECIES_NINETALES, .ability = ABILITY_HIDDEN, }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    { .lvl = 46, .species = SPECIES_CLAYDOL, },
    { .lvl = 46, .species = SPECIES_CROBAT, }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    { .lvl = 46, .species = SPECIES_CLAYDOL, },
    { .lvl = 46, .species = SPECIES_CAMERUPT, }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    { .lvl = 46, .species = SPECIES_MIGHTYENA, },
    { .lvl = 46, .species = SPECIES_HOUNDOOM, }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    { .lvl = 47, .species = SPECIES_GOLBAT, },
    { .lvl = 47, .species = SPECIES_MIGHTYENA, }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    { .lvl = 47, .species = SPECIES_MIGHTYENA, },
    { .lvl = 47, .species = SPECIES_MAGMORTAR, }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    { .lvl = 47, .species = SPECIES_GOLBAT, },
    { .lvl = 47, .species = SPECIES_HONCHKROW, }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    { .lvl = 47, .species = SPECIES_MIGHTYENA, },
    { .lvl = 47, .species = SPECIES_FARFETCHD, .heldItem = ITEM_STICK, }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    { .lvl = 47, .species = SPECIES_CLAYDOL, },
    { .lvl = 47, .species = SPECIES_KROKOROK, }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    { .lvl = 48, .species = SPECIES_CAMERUPT, },
    { .lvl = 48, .species = SPECIES_KROOKODILE, }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    { .lvl = 48, .species = SPECIES_GOLBAT, },
    { .lvl = 48, .species = SPECIES_GOLURK, }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    { .lvl = 48, .species = SPECIES_MIGHTYENA, },
    { .lvl = 48, .species = SPECIES_MIGHTYENA, }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    { .lvl = 48, .species = SPECIES_MAGCARGO, },
    { .lvl = 48, .species = SPECIES_CAMERUPT, }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    { .lvl = 48, .species = SPECIES_CLAYDOL, },
    { .lvl = 48, .species = SPECIES_GOLURK, }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    { .lvl = 23, .species = SPECIES_VULPIX,   .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN, },
    { .lvl = 23, .species = SPECIES_MURKROW,  .difficulty = TRAINER_MEDIUM, .ability = ABILITY_HIDDEN, },
    { .lvl = 23, .species = SPECIES_HOUNDOUR, .difficulty = TRAINER_MEDIUM, .ability = ABILITY_SLOT_2, }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    { .lvl = 48, .species = SPECIES_NINETALES, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_EXTRASENSORY, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_SPITE } },
    { .lvl = 48, .species = SPECIES_HONCHKROW, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_SUCKER_PUNCH, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_PURSUIT } },
    { .lvl = 49, .species = SPECIES_HOUNDOOM,  .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_NASTY_PLOT, MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM } }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    { .lvl = 58, .species = SPECIES_NINETALES, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_EXTRASENSORY, MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_SPITE } },
    { .lvl = 58, .species = SPECIES_HONCHKROW, .difficulty = TRAINER_HARD, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_SUCKER_PUNCH, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_PURSUIT } },
    { .lvl = 59, .species = SPECIES_HOUNDOOM,  .difficulty = TRAINER_HARD, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_NASTY_PLOT, MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM } }
};

static const struct TrainerMon sParty_Darcy[] = {
    { .lvl = 56, .species = SPECIES_PELIPPER, },
    { .lvl = 56, .species = SPECIES_CAMERUPT, }
};

static const struct TrainerMon sParty_Pete[] = {
    { .lvl = 15, .species = SPECIES_TENTACOOL, },
    { .lvl = 15, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Isabelle[] = {
    { .lvl = 15, .species = SPECIES_MARILL, },
    { .lvl = 15, .species = SPECIES_MARILL, }
};

static const struct TrainerMon sParty_Josue[] = {
    { .iv = 50, .lvl = 30, .species = SPECIES_SWELLOW, },
    { .iv = 50, .lvl = 30, .species = SPECIES_PELIPPER, }
};

static const struct TrainerMon sParty_Camron[] = {
    { .lvl = 30, .species = SPECIES_STARYU, },
    { .lvl = 30, .species = SPECIES_WHIRLIPEDE, }
};

static const struct TrainerMon sParty_Carolina[] = {
    { .iv = 50, .lvl = 29, .species = SPECIES_MANECTRIC, },
    { .iv = 50, .lvl = 30, .species = SPECIES_SWELLOW, },
    { .iv = 50, .lvl = 31, .species = SPECIES_MANECTRIC, }
};

static const struct TrainerMon sParty_Elijah[] = {
    { .lvl = 30, .species = SPECIES_SKARMORY, },
    { .lvl = 30, .species = SPECIES_TROPIUS, }
};

static const struct TrainerMon sParty_Celia[] = {
    { .lvl = 27, .species = SPECIES_MARILL, },
    { .lvl = 27, .species = SPECIES_LOMBRE, }
};

static const struct TrainerMon sParty_Bryan[] = {
    { .lvl = 27, .species = SPECIES_SANDSHREW, },
    { .lvl = 27, .species = SPECIES_SANDSLASH, }
};

static const struct TrainerMon sParty_Branden[] = {
    { .lvl = 27, .species = SPECIES_SWELLOW, },
    { .lvl = 27, .species = SPECIES_NUZLEAF, }
};

static const struct TrainerMon sParty_Bryant[] = {
    { .lvl = 23, .species = SPECIES_NUMEL, },
    { .lvl = 23, .species = SPECIES_SLUGMA, }
};

static const struct TrainerMon sParty_Shayla[] = {
    { .lvl = 23, .species = SPECIES_SHROOMISH, },
    { .lvl = 23, .species = SPECIES_ROSELIA, }
};

static const struct TrainerMon sParty_Kyra[] = {
    { .lvl = 31, .species = SPECIES_DODUO, },
    { .lvl = 32, .species = SPECIES_DODRIO, }
};

static const struct TrainerMon sParty_Jaiden[] = {
    { .lvl = 31, .species = SPECIES_NINJASK, },
    { .lvl = 31, .species = SPECIES_GULPIN, }
};

static const struct TrainerMon sParty_Alix[] = {
    { .lvl = 31, .species = SPECIES_KADABRA, },
    { .lvl = 31, .species = SPECIES_KIRLIA, }
};

static const struct TrainerMon sParty_Helene[] = {
    { .lvl = 31, .species = SPECIES_MEDITITE, },
    { .lvl = 31, .species = SPECIES_MAKUHITA, }
};

static const struct TrainerMon sParty_Marlene[] = {
    { .lvl = 22, .species = SPECIES_MEDITITE, },
    { .lvl = 22, .species = SPECIES_SPOINK, }
};

static const struct TrainerMon sParty_Devan[] = {
    { .lvl = 10, .species = SPECIES_GEODUDE, },
    { .lvl = 10, .species = SPECIES_GEODUDE, }
};

static const struct TrainerMon sParty_Johnson[] = {
    { .lvl = 10, .species = SPECIES_SHROOMISH, },
    { .lvl = 10, .species = SPECIES_LOTAD, }
};

static const struct TrainerMon sParty_Melina[] = {
    { .lvl = 17, .species = SPECIES_DODUO, },
    { .lvl = 17, .species = SPECIES_DODUO, }
};

static const struct TrainerMon sParty_Brandi[] = {
    { .lvl = 17, .species = SPECIES_RALTS, },
    { .lvl = 17, .species = SPECIES_SOLOSIS, }
};

static const struct TrainerMon sParty_Aisha[] = {
    { .lvl = 17, .species = SPECIES_MEDITITE, },
    { .lvl = 17, .species = SPECIES_RIOLU, }
};

static const struct TrainerMon sParty_Makayla[] = {
    { .lvl = 57, .species = SPECIES_ROSERADE, },
    { .lvl = 57, .species = SPECIES_MEDICHAM, .heldItem = ITEM_MEGA_STONE, }
};

static const struct TrainerMon sParty_Fabian[] = {
    { .lvl = 34, .species = SPECIES_MANECTRIC,     .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 34, .species = SPECIES_RAICHU_ALOLAN, }
};

static const struct TrainerMon sParty_Dayton[] = {
    { .lvl = 25, .species = SPECIES_SLUGMA, },
    { .lvl = 25, .species = SPECIES_NUMEL, }
};

static const struct TrainerMon sParty_Rachel[] = {
    { .lvl = 32, .species = SPECIES_GOLDEEN, },
    { .lvl = 32, .species = SPECIES_SEAKING, }
};

static const struct TrainerMon sParty_Leonel[] = {
    { .iv = 100, .lvl = 35, .species = SPECIES_MANECTRIC, },
    { .iv = 100, .lvl = 35, .species = SPECIES_CUBONE,
      .ability = ABILITY_SLOT_2, .heldItem = ITEM_THICK_CLUB, }
};

static const struct TrainerMon sParty_Callie[] = {
    { .lvl = 35, .species = SPECIES_MEDITITE, },
    { .lvl = 35, .species = SPECIES_HARIYAMA, }
};

static const struct TrainerMon sParty_Cale[] = {
    { .lvl = 37, .species = SPECIES_DUSTOX, },
    { .lvl = 37, .species = SPECIES_BEAUTIFLY, }
};

static const struct TrainerMon sParty_Myles[] = {
    { .iv = 10, .lvl = 35, .species = SPECIES_HARIYAMA, },
    { .iv = 10, .lvl = 35, .species = SPECIES_PELIPPER, },
    { .iv = 10, .lvl = 35, .species = SPECIES_TROPIUS, },
    { .iv = 10, .lvl = 35, .species = SPECIES_LINOONE, },
    { .iv = 10, .lvl = 35, .species = SPECIES_CAMERUPT, .heldItem = ITEM_MEGA_STONE,
      .moves =   {MOVE_ERUPTION, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_EARTH_POWER} },
    { .iv = 10, .lvl = 35, .species = SPECIES_MANECTRIC, .heldItem = ITEM_MEGA_STONE, }
};

static const struct TrainerMon sParty_Pat[] = {
    { .iv = 10, .lvl = 35, .species = SPECIES_ARCANINE, },
    { .iv = 10, .lvl = 35, .species = SPECIES_BRELOOM, },
    { .iv = 10, .lvl = 35, .species = SPECIES_AZUMARILL, },
    { .iv = 10, .lvl = 35, .species = SPECIES_SANDSLASH, },
    { .iv = 10, .lvl = 35, .species = SPECIES_SWALOT, },
    { .iv = 10, .lvl = 35, .species = SPECIES_MANECTRIC, .heldItem = ITEM_MEGA_STONE, }
};

static const struct TrainerMon sParty_Cristin1[] = {
    { .iv = 100, .lvl = 38, .species = SPECIES_LOUDRED, },
    { .iv = 100, .lvl = 38, .species = SPECIES_VIGOROTH, }
};

static const struct TrainerMon sParty_Angelo[] = {
    { .iv = 100, .lvl = 20, .species = SPECIES_ILLUMISE, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_GROWTH} },
    { .iv = 100, .lvl = 20, .species = SPECIES_VOLBEAT, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_FLASH} }
};

static const struct TrainerMon sParty_Darius[] = {
    { .iv = 200, .lvl = 36, .species = SPECIES_TROPIUS, },
    { .iv = 200, .lvl = 36, .species = SPECIES_SWOOBAT, }
};

static const struct TrainerMon sParty_Steven[] = {
    { .lvl = 77, .species = SPECIES_SKARMORY,  .difficulty = TRAINER_HARDEST, .heldItem = ITEM_ROCKY_HELMET,
                 .build = TRAINER_MON_HP_DEF,  .nature = NATURE_IMPISH,       .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_TOXIC, MOVE_ROOST, MOVE_SPIKES, MOVE_BRAVE_BIRD} },
    { .lvl = 75, .species = SPECIES_BRONZONG,  .difficulty = TRAINER_HARDEST, .heldItem = ITEM_LIGHT_CLAY,
                 .build = TRAINER_MON_HP_DEF,  .nature = NATURE_BOLD,         .ability = ABILITY_SLOT_2,
      .moves =   {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_WEATHER_BALL, MOVE_TRICK_ROOM} },
    { .lvl = 76, .species = SPECIES_AGGRON,    .difficulty = TRAINER_HARDEST, .heldItem = ITEM_MEGA_STONE,
                 .build = TRAINER_MON_HP_DEF,  .nature = NATURE_ADAMANT,      .ball = ITEM_HEAVY_BALL,
      .moves =   {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_IRON_HEAD, MOVE_DRAGON_CLAW} },
    { .lvl = 76, .species = SPECIES_CRADILY,   .difficulty = TRAINER_HARDEST, .heldItem = ITEM_ROWAP_BERRY,
                 .nature = NATURE_CALM,        .build = TRAINER_MON_HP_SPDEF, .ability = ABILITY_HIDDEN,
      .moves =   {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY} },
    { .lvl = 76, .species = SPECIES_ARMALDO,   .difficulty = TRAINER_HARDEST, .heldItem = ITEM_JABOCA_BERRY,
                 .build = TRAINER_MON_PHYS,    .nature = NATURE_IMPISH,       .ball = ITEM_LURE_BALL,
      .moves =   {MOVE_X_SCISSOR, MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE} },
    { .lvl = 78, .species = SPECIES_METAGROSS, .difficulty = TRAINER_HARDEST, .heldItem = ITEM_LIFE_ORB,
                 .build = TRAINER_MON_HP_DEF,  .nature = NATURE_ADAMANT,      .shiny = TRUE,
      .moves =   {MOVE_THUNDER_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_METEOR_MASH, MOVE_BULLET_PUNCH} }
};

static const struct TrainerMon sParty_Anabel[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Tucker[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Spenser[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Greta[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Noland[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Lucy[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Brandon[] = {
    { .lvl = 5, .species = SPECIES_BELDUM, }
};

static const struct TrainerMon sParty_Andres1[] = {
    { .lvl = 30, .species = SPECIES_SANDYGAST, },
    { .lvl = 30, .species = SPECIES_SANDSLASH, }
};

static const struct TrainerMon sParty_Andres2[] = {
    { .iv = 10, .lvl = 34, .species = SPECIES_SANDYGAST, },
    { .iv = 10, .lvl = 34, .species = SPECIES_SANDSLASH, }
};

static const struct TrainerMon sParty_Andres3[] = {
    { .iv = 20, .lvl = 37, .species = SPECIES_NOSEPASS, },
    { .iv = 20, .lvl = 37, .species = SPECIES_SANDYGAST, },
    { .iv = 20, .lvl = 37, .species = SPECIES_SANDSLASH, }
};

static const struct TrainerMon sParty_Andres4[] = {
    { .iv = 30, .lvl = 39, .species = SPECIES_NOSEPASS, },
    { .iv = 30, .lvl = 39, .species = SPECIES_SANDSLASH, },
    { .iv = 30, .lvl = 39, .species = SPECIES_SANDYGAST, }
};

static const struct TrainerMon sParty_Andres5[] = {
    { .iv = 40, .lvl = 42, .species = SPECIES_PROBOPASS, },
    { .iv = 40, .lvl = 42, .species = SPECIES_SANDSLASH, },
    { .iv = 40, .lvl = 42, .species = SPECIES_PALOSSAND, }
};

static const struct TrainerMon sParty_Cory1[] = {
    { .lvl = 30, .species = SPECIES_WINGULL, },
    { .lvl = 30, .species = SPECIES_MACHOP, },
    { .lvl = 30, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Cory2[] = {
    { .iv = 10, .lvl = 33, .species = SPECIES_PELIPPER, },
    { .iv = 10, .lvl = 33, .species = SPECIES_MACHOP, },
    { .iv = 10, .lvl = 33, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Cory3[] = {
    { .iv = 20, .lvl = 35, .species = SPECIES_PELIPPER, },
    { .iv = 20, .lvl = 35, .species = SPECIES_MACHOKE, },
    { .iv = 20, .lvl = 35, .species = SPECIES_TENTACOOL, }
};

static const struct TrainerMon sParty_Cory4[] = {
    { .iv = 30, .lvl = 38, .species = SPECIES_PELIPPER, },
    { .iv = 30, .lvl = 38, .species = SPECIES_MACHOKE, },
    { .iv = 30, .lvl = 38, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Cory5[] = {
    { .iv = 40, .lvl = 40, .species = SPECIES_PELIPPER, },
    { .iv = 40, .lvl = 40, .species = SPECIES_MACHAMP, },
    { .iv = 40, .lvl = 40, .species = SPECIES_TENTACRUEL, }
};

static const struct TrainerMon sParty_Pablo1[] = {
    { .lvl = 55, .species = SPECIES_STARYU, },
    { .lvl = 55, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Pablo2[] = {
    { .iv = 10, .lvl = 57, .species = SPECIES_STARYU, },
    { .iv = 10, .lvl = 57, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Pablo3[] = {
    { .iv = 20, .lvl = 59, .species = SPECIES_WINGULL, },
    { .iv = 20, .lvl = 59, .species = SPECIES_STARYU, },
    { .iv = 20, .lvl = 59, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Pablo4[] = {
    { .iv = 30, .lvl = 61, .species = SPECIES_PELIPPER, },
    { .iv = 30, .lvl = 61, .species = SPECIES_STARYU, },
    { .iv = 30, .lvl = 61, .species = SPECIES_STARYU, }
};

static const struct TrainerMon sParty_Pablo5[] = {
    { .iv = 40, .lvl = 63, .species = SPECIES_PELIPPER, },
    { .iv = 40, .lvl = 63, .species = SPECIES_STARMIE, },
    { .iv = 40, .lvl = 63, .species = SPECIES_STARMIE, }
};

static const struct TrainerMon sParty_Koji1[] = {
    { .lvl = 56, .species = SPECIES_MACHOKE, },
    { .lvl = 56, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_Koji2[] = {
    { .iv = 10, .lvl = 58, .species = SPECIES_MACHOKE, },
    { .iv = 10, .lvl = 58, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_Koji3[] = {
    { .iv = 20, .lvl = 60, .species = SPECIES_MAKUHITA, },
    { .iv = 20, .lvl = 60, .species = SPECIES_MACHOKE, },
    { .iv = 20, .lvl = 60, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_Koji4[] = {
    { .iv = 30, .lvl = 62, .species = SPECIES_HARIYAMA, },
    { .iv = 30, .lvl = 62, .species = SPECIES_MACHOKE, },
    { .iv = 30, .lvl = 62, .species = SPECIES_GURDURR, }
};

static const struct TrainerMon sParty_Koji5[] = {
    { .iv = 40, .lvl = 64, .species = SPECIES_HARIYAMA, },
    { .iv = 40, .lvl = 64, .species = SPECIES_MACHAMP, },
    { .iv = 40, .lvl = 64, .species = SPECIES_CONKELDURR, }
};

static const struct TrainerMon sParty_Cristin2[] = {
    { .iv = 110, .lvl = 35, .species = SPECIES_LOUDRED, },
    { .iv = 110, .lvl = 35, .species = SPECIES_VIGOROTH, }
};

static const struct TrainerMon sParty_Cristin3[] = {
    { .iv = 120, .lvl = 37, .species = SPECIES_SPINDA, },
    { .iv = 120, .lvl = 37, .species = SPECIES_LOUDRED, },
    { .iv = 120, .lvl = 37, .species = SPECIES_VIGOROTH, }
};

static const struct TrainerMon sParty_Cristin4[] = {
    { .iv = 130, .lvl = 39, .species = SPECIES_SPINDA, },
    { .iv = 130, .lvl = 39, .species = SPECIES_LOUDRED, },
    { .iv = 100, .lvl = 39, .species = SPECIES_VIGOROTH, }
};

static const struct TrainerMon sParty_Cristin5[] = {
    { .iv = 140, .lvl = 41, .species = SPECIES_SPINDA, },
    { .iv = 140, .lvl = 41, .species = SPECIES_EXPLOUD, },
    { .iv = 140, .lvl = 41, .species = SPECIES_SLAKING, }
};

static const struct TrainerMon sParty_Thalia1[] = {
    { .lvl = 32, .species = SPECIES_WAILMER, },
    { .lvl = 32, .species = SPECIES_HORSEA, }
};

static const struct TrainerMon sParty_Thalia2[] = {
    { .iv = 10, .lvl = 35, .species = SPECIES_WAILMER, },
    { .iv = 10, .lvl = 35, .species = SPECIES_HORSEA, }
};

static const struct TrainerMon sParty_Thalia3[] = {
    { .iv = 20, .lvl = 38, .species = SPECIES_LUVDISC, },
    { .iv = 20, .lvl = 38, .species = SPECIES_WAILMER, },
    { .iv = 20, .lvl = 38, .species = SPECIES_SEADRA, }
};

static const struct TrainerMon sParty_Thalia4[] = {
    { .iv = 30, .lvl = 40, .species = SPECIES_LUVDISC, },
    { .iv = 30, .lvl = 40, .species = SPECIES_WAILMER, },
    { .iv = 30, .lvl = 40, .species = SPECIES_SEADRA, }
};

static const struct TrainerMon sParty_Thalia5[] = {
    { .iv = 40, .lvl = 43, .species = SPECIES_LUVDISC, },
    { .iv = 40, .lvl = 43, .species = SPECIES_WAILORD, },
    { .iv = 40, .lvl = 43, .species = SPECIES_KINGDRA, }
};

static const struct TrainerMon sParty_Mariela[] = {
    { .lvl = 41, .species = SPECIES_CHIMECHO, .heldItem = ITEM_SHELL_BELL, },
    { .lvl = 41, .species = SPECIES_AUDINO,   .heldItem = ITEM_MEGA_STONE, }
};

static const struct TrainerMon sParty_Alvaro[] = {
    { .lvl = 41, .species = SPECIES_BANETTE, .heldItem = ITEM_MEGA_STONE, },
    { .lvl = 41, .species = SPECIES_KADABRA, }
};

static const struct TrainerMon sParty_Everett[] = {
    { .lvl = 41, .species = SPECIES_WOBBUFFET, },
    { .lvl = 41, .species = SPECIES_PYUKUMUKU, }
};

static const struct TrainerMon sParty_Red[] = {
    { .lvl = 5, .species = SPECIES_CHARMANDER, }
};

static const struct TrainerMon sParty_Leaf[] = {
    { .lvl = 5, .species = SPECIES_BULBASAUR, }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    { .lvl = 5, .species = SPECIES_GROUDON, }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    { .lvl = 5, .species = SPECIES_KYOGRE, }
};
