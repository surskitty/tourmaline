#ifndef GUARD_CONFIG_SPECIES_ENABLED_H
#define GUARD_CONFIG_SPECIES_ENABLED_H

// WARNING: For some reason, using 1/0 instead of TRUE/FALSE causes cry IDs to be shifted.
// Please use TRUE/FALSE when using the family toggles.

// Modifying the latest generation WILL change the saveblock due to Dex flags and will require a new save file.
// Generations of Pokémon are defined by the first member introduced,
// so Pikachu depends on the Gen 1 setting despite Pichu being the lowest member of the evolution tree.
// Eg: If P_GEN_2_POKEMON is set to FALSE, all members of the Sneasel Family will be disabled
// (Sneasel + Hisuian, Weavile and Sneasler).
#define P_GEN_1_POKEMON                  TRUE  // Generation 1 Pokémon (RGBY)
#define P_GEN_2_POKEMON                  TRUE  // Generation 2 Pokémon (GSC)
#define P_GEN_3_POKEMON                  TRUE  // Generation 3 Pokémon (RSE, FRLG)
#define P_GEN_4_POKEMON                  TRUE  // Generation 4 Pokémon (DPPt, HGSS)
#define P_GEN_5_POKEMON                  TRUE  // Generation 5 Pokémon (BW, B2W2)
#define P_GEN_6_POKEMON                  TRUE  // Generation 6 Pokémon (XY, ORAS)
#define P_GEN_7_POKEMON                  TRUE  // Generation 7 Pokémon (SM, USUM, LGPE)
#define P_GEN_8_POKEMON                  TRUE  // Generation 8 Pokémon (SwSh, BDSP, LA)
#define P_GEN_9_POKEMON                  TRUE  // Generation 9 Pokémon (SV)
#define P_INTERDIMENSIONAL               FALSE // interdimensional pokemon I will probably never get to adding but just in case

// Setting this to TRUE will add the new evolutions to the Regional Dex.
#define P_NEW_EVOS_IN_REGIONAL_DEX       TRUE

// Battle gimmick specific Forms.
#define P_MEGA_EVOLUTIONS                TRUE
#define P_PRIMAL_REVERSIONS              TRUE // Groudon and Kyogre only.
#define P_ULTRA_BURST_FORMS              FALSE // Ultra Necrozma only.
#define P_GIGANTAMAX_FORMS               FALSE
#define P_TERA_FORMS                     FALSE

// Fusion forms
#define P_FUSION_FORMS                   FALSE

// Regional Forms. Includes Regional Form evolutions, like Sirfetch'd.
#define P_REGIONAL_FORMS                 TRUE
#define P_ALOLAN_FORMS                   P_REGIONAL_FORMS
#define P_GALARIAN_FORMS                 P_REGIONAL_FORMS
#define P_HISUIAN_FORMS                  P_REGIONAL_FORMS
#define P_PALDEAN_FORMS                  P_REGIONAL_FORMS

// Big groups of forms that aren't always desired when choosing families.
#define P_PIKACHU_EXTRA_FORMS            FALSE
#define P_COSPLAY_PIKACHU_FORMS          P_PIKACHU_EXTRA_FORMS
#define P_CAP_PIKACHU_FORMS              P_PIKACHU_EXTRA_FORMS

// Cross-generation evolutions. Includes pre-evolutions.
#define P_CROSS_GENERATION_EVOS          TRUE
#define P_GEN_2_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_3_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_4_CROSS_EVOS               P_CROSS_GENERATION_EVOS
//#define P_GEN_5_CROSS_EVOS             // Gen 5 didn't introduce any cross-gen evos.
#define P_GEN_6_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Just Sylveon.
//#define P_GEN_7_CROSS_EVOS             // Alolan evolutions handled by P_ALOLAN_FORMS.
#define P_GEN_8_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Regional evolutions handled by P_GALARIAN_FORMS and P_HISUIAN_FORMS.
#define P_GEN_9_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Clodsire handled by P_PALDEAN_FORMS.

// To disable specific families, replace P_GEN_x_POKEMON with FALSE.
#define P_FAMILY_BULBASAUR               FALSE
#define P_FAMILY_CHARMANDER              FALSE
#define P_FAMILY_SQUIRTLE                FALSE
#define P_FAMILY_CATERPIE                P_GEN_1_POKEMON
#define P_FAMILY_WEEDLE                  P_GEN_1_POKEMON
#define P_FAMILY_PIDGEY                  P_GEN_1_POKEMON
#define P_FAMILY_RATTATA                 P_GEN_1_POKEMON
#define P_FAMILY_SPEAROW                 P_GEN_1_POKEMON
#define P_FAMILY_EKANS                   P_GEN_1_POKEMON
#define P_FAMILY_PIKACHU                 P_GEN_1_POKEMON
#define P_FAMILY_SANDSHREW               P_GEN_1_POKEMON
#define P_FAMILY_NIDORAN                 P_GEN_1_POKEMON
#define P_FAMILY_CLEFAIRY                P_GEN_1_POKEMON
#define P_FAMILY_VULPIX                  P_GEN_1_POKEMON
#define P_FAMILY_JIGGLYPUFF              P_GEN_1_POKEMON
#define P_FAMILY_ZUBAT                   P_GEN_1_POKEMON
#define P_FAMILY_ODDISH                  P_GEN_1_POKEMON
#define P_FAMILY_PARAS                   FALSE
#define P_FAMILY_VENONAT                 P_GEN_1_POKEMON
#define P_FAMILY_DIGLETT                 P_GEN_1_POKEMON // fiery path ALOLAN FORM
#define P_FAMILY_MEOWTH                  P_GEN_1_POKEMON
#define P_FAMILY_PSYDUCK                 P_GEN_1_POKEMON
#define P_FAMILY_MANKEY                  P_GEN_1_POKEMON
#define P_FAMILY_GROWLITHE               P_GEN_1_POKEMON
#define P_FAMILY_POLIWAG                 P_GEN_1_POKEMON
#define P_FAMILY_ABRA                    P_GEN_1_POKEMON
#define P_FAMILY_MACHOP                  P_GEN_1_POKEMON
#define P_FAMILY_BELLSPROUT              P_GEN_1_POKEMON
#define P_FAMILY_TENTACOOL               P_GEN_1_POKEMON
#define P_FAMILY_GEODUDE                 P_GEN_1_POKEMON
#define P_FAMILY_PONYTA                  P_GEN_1_POKEMON
#define P_FAMILY_SLOWPOKE                P_GEN_1_POKEMON
#define P_FAMILY_MAGNEMITE               P_GEN_1_POKEMON
#define P_FAMILY_FARFETCHD               P_GEN_1_POKEMON
#define P_FAMILY_DODUO                   P_GEN_1_POKEMON
#define P_FAMILY_SEEL                    P_GEN_1_POKEMON
#define P_FAMILY_GRIMER                  P_GEN_1_POKEMON
#define P_FAMILY_SHELLDER                P_GEN_1_POKEMON
#define P_FAMILY_GASTLY                  P_GEN_1_POKEMON
#define P_FAMILY_ONIX                    P_GEN_1_POKEMON
#define P_FAMILY_DROWZEE                 P_GEN_1_POKEMON
#define P_FAMILY_KRABBY                  P_GEN_1_POKEMON
#define P_FAMILY_VOLTORB                 P_GEN_1_POKEMON
#define P_FAMILY_EXEGGCUTE               P_GEN_1_POKEMON
#define P_FAMILY_CUBONE                  P_GEN_1_POKEMON
#define P_FAMILY_HITMONS                 P_GEN_1_POKEMON // fiery path
#define P_FAMILY_LICKITUNG               P_GEN_1_POKEMON
#define P_FAMILY_KOFFING                 P_GEN_1_POKEMON
#define P_FAMILY_RHYHORN                 P_GEN_1_POKEMON
#define P_FAMILY_CHANSEY                 P_GEN_1_POKEMON
#define P_FAMILY_TANGELA                 P_GEN_1_POKEMON
#define P_FAMILY_KANGASKHAN              P_GEN_1_POKEMON
#define P_FAMILY_HORSEA                  P_GEN_1_POKEMON
#define P_FAMILY_GOLDEEN                 P_GEN_1_POKEMON
#define P_FAMILY_STARYU                  P_GEN_1_POKEMON
#define P_FAMILY_MR_MIME                 P_GEN_1_POKEMON
#define P_FAMILY_SCYTHER                 P_GEN_1_POKEMON
#define P_FAMILY_JYNX                    P_GEN_1_POKEMON
#define P_FAMILY_ELECTABUZZ              P_GEN_1_POKEMON
#define P_FAMILY_MAGMAR                  P_GEN_1_POKEMON
#define P_FAMILY_PINSIR                  P_GEN_1_POKEMON
#define P_FAMILY_TAUROS                  P_GEN_1_POKEMON
#define P_FAMILY_MAGIKARP                P_GEN_1_POKEMON
#define P_FAMILY_LAPRAS                  P_GEN_1_POKEMON
#define P_FAMILY_DITTO                   P_GEN_1_POKEMON
#define P_FAMILY_EEVEE                   P_GEN_1_POKEMON
#define P_FAMILY_PORYGON                 P_GEN_1_POKEMON
#define P_FAMILY_OMANYTE                 P_GEN_1_POKEMON
#define P_FAMILY_KABUTO                  P_GEN_1_POKEMON
#define P_FAMILY_AERODACTYL              P_GEN_1_POKEMON
#define P_FAMILY_SNORLAX                 P_GEN_1_POKEMON
#define P_FAMILY_ARTICUNO                P_GEN_1_POKEMON
#define P_FAMILY_ZAPDOS                  P_GEN_1_POKEMON
#define P_FAMILY_MOLTRES                 P_GEN_1_POKEMON
#define P_FAMILY_DRATINI                 P_GEN_1_POKEMON
#define P_FAMILY_MEWTWO                  FALSE
#define P_FAMILY_MEW                     P_GEN_1_POKEMON

#define P_FAMILY_CHIKORITA               FALSE
#define P_FAMILY_CYNDAQUIL               FALSE
#define P_FAMILY_TOTODILE                FALSE
#define P_FAMILY_SENTRET                 P_GEN_2_POKEMON
#define P_FAMILY_HOOTHOOT                P_GEN_2_POKEMON
#define P_FAMILY_LEDYBA                  P_GEN_2_POKEMON
#define P_FAMILY_SPINARAK                P_GEN_2_POKEMON
#define P_FAMILY_CHINCHOU                P_GEN_2_POKEMON // underwater
#define P_FAMILY_TOGEPI                  P_GEN_2_POKEMON
#define P_FAMILY_NATU                    P_GEN_2_POKEMON
#define P_FAMILY_MAREEP                  P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_MARILL                  P_GEN_2_POKEMON
#define P_FAMILY_SUDOWOODO               P_GEN_2_POKEMON
#define P_FAMILY_HOPPIP                  P_GEN_2_POKEMON
#define P_FAMILY_AIPOM                   P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_SUNKERN                 P_GEN_2_POKEMON
#define P_FAMILY_YANMA                   P_GEN_2_POKEMON
#define P_FAMILY_WOOPER                  P_GEN_2_POKEMON
#define P_FAMILY_MURKROW                 P_GEN_2_POKEMON
#define P_FAMILY_MISDREAVUS              P_GEN_2_POKEMON
#define P_FAMILY_UNOWN                   P_GEN_2_POKEMON
#define P_FAMILY_WOBBUFFET               P_GEN_2_POKEMON
#define P_FAMILY_GIRAFARIG               P_GEN_2_POKEMON // safari zone
#define P_FAMILY_PINECO                  P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_DUNSPARCE               P_GEN_2_POKEMON
#define P_FAMILY_GLIGAR                  P_GEN_2_POKEMON
#define P_FAMILY_SNUBBULL                P_GEN_2_POKEMON
#define P_FAMILY_QWILFISH                P_GEN_2_POKEMON
#define P_FAMILY_SHUCKLE                 P_GEN_2_POKEMON // early
#define P_FAMILY_HERACROSS               P_GEN_2_POKEMON
#define P_FAMILY_SNEASEL                 P_GEN_2_POKEMON
#define P_FAMILY_TEDDIURSA               P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_SLUGMA                  P_GEN_2_POKEMON
#define P_FAMILY_SWINUB                  P_GEN_2_POKEMON
#define P_FAMILY_CORSOLA                 P_GEN_2_POKEMON // pacifidlog
#define P_FAMILY_REMORAID                P_GEN_2_POKEMON
#define P_FAMILY_DELIBIRD                P_GEN_2_POKEMON
#define P_FAMILY_MANTINE                 P_GEN_2_POKEMON
#define P_FAMILY_SKARMORY                P_GEN_2_POKEMON
#define P_FAMILY_HOUNDOUR                P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_PHANPY                  P_GEN_2_POKEMON
#define P_FAMILY_STANTLER                P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_SMEARGLE                P_GEN_2_POKEMON // altering cave/safari zone
#define P_FAMILY_MILTANK                 P_GEN_2_POKEMON
#define P_FAMILY_RAIKOU                  P_GEN_2_POKEMON
#define P_FAMILY_ENTEI                   P_GEN_2_POKEMON
#define P_FAMILY_SUICUNE                 P_GEN_2_POKEMON
#define P_FAMILY_LARVITAR                P_GEN_2_POKEMON
#define P_FAMILY_LUGIA                   P_GEN_2_POKEMON
#define P_FAMILY_HO_OH                   P_GEN_2_POKEMON
#define P_FAMILY_CELEBI                  P_GEN_2_POKEMON

#define P_FAMILY_TREECKO                 P_GEN_3_POKEMON
#define P_FAMILY_TORCHIC                 P_GEN_3_POKEMON
#define P_FAMILY_MUDKIP                  P_GEN_3_POKEMON
#define P_FAMILY_POOCHYENA               P_GEN_3_POKEMON
#define P_FAMILY_ZIGZAGOON               P_GEN_3_POKEMON
#define P_FAMILY_WURMPLE                 P_GEN_3_POKEMON
#define P_FAMILY_LOTAD                   P_GEN_3_POKEMON
#define P_FAMILY_SEEDOT                  P_GEN_3_POKEMON
#define P_FAMILY_TAILLOW                 P_GEN_3_POKEMON
#define P_FAMILY_WINGULL                 P_GEN_3_POKEMON
#define P_FAMILY_RALTS                   P_GEN_3_POKEMON
#define P_FAMILY_SURSKIT                 P_GEN_3_POKEMON
#define P_FAMILY_SHROOMISH               P_GEN_3_POKEMON
#define P_FAMILY_SLAKOTH                 P_GEN_3_POKEMON
#define P_FAMILY_NINCADA                 P_GEN_3_POKEMON
#define P_FAMILY_WHISMUR                 P_GEN_3_POKEMON
#define P_FAMILY_MAKUHITA                P_GEN_3_POKEMON
#define P_FAMILY_NOSEPASS                P_GEN_3_POKEMON
#define P_FAMILY_SKITTY                  P_GEN_3_POKEMON
#define P_FAMILY_SABLEYE                 P_GEN_3_POKEMON
#define P_FAMILY_MAWILE                  P_GEN_3_POKEMON
#define P_FAMILY_ARON                    P_GEN_3_POKEMON
#define P_FAMILY_MEDITITE                P_GEN_3_POKEMON
#define P_FAMILY_ELECTRIKE               P_GEN_3_POKEMON
#define P_FAMILY_PLUSLE                  P_GEN_3_POKEMON
#define P_FAMILY_MINUN                   P_GEN_3_POKEMON
#define P_FAMILY_VOLBEAT_ILLUMISE        P_GEN_3_POKEMON
#define P_FAMILY_ROSELIA                 P_GEN_3_POKEMON
#define P_FAMILY_GULPIN                  P_GEN_3_POKEMON
#define P_FAMILY_CARVANHA                P_GEN_3_POKEMON
#define P_FAMILY_WAILMER                 P_GEN_3_POKEMON
#define P_FAMILY_NUMEL                   P_GEN_3_POKEMON
#define P_FAMILY_TORKOAL                 P_GEN_3_POKEMON
#define P_FAMILY_SPOINK                  P_GEN_3_POKEMON
#define P_FAMILY_SPINDA                  P_GEN_3_POKEMON
#define P_FAMILY_TRAPINCH                P_GEN_3_POKEMON
#define P_FAMILY_CACNEA                  P_GEN_3_POKEMON
#define P_FAMILY_SWABLU                  P_GEN_3_POKEMON
#define P_FAMILY_ZANGOOSE                P_GEN_3_POKEMON
#define P_FAMILY_SEVIPER                 P_GEN_3_POKEMON
#define P_FAMILY_LUNATONE                P_GEN_3_POKEMON
#define P_FAMILY_SOLROCK                 P_GEN_3_POKEMON
#define P_FAMILY_BARBOACH                P_GEN_3_POKEMON
#define P_FAMILY_CORPHISH                P_GEN_3_POKEMON
#define P_FAMILY_BALTOY                  P_GEN_3_POKEMON
#define P_FAMILY_LILEEP                  P_GEN_3_POKEMON
#define P_FAMILY_ANORITH                 P_GEN_3_POKEMON
#define P_FAMILY_FEEBAS                  P_GEN_3_POKEMON
#define P_FAMILY_CASTFORM                P_GEN_3_POKEMON
#define P_FAMILY_KECLEON                 P_GEN_3_POKEMON
#define P_FAMILY_SHUPPET                 P_GEN_3_POKEMON
#define P_FAMILY_DUSKULL                 P_GEN_3_POKEMON
#define P_FAMILY_TROPIUS                 P_GEN_3_POKEMON
#define P_FAMILY_CHIMECHO                P_GEN_3_POKEMON
#define P_FAMILY_ABSOL                   P_GEN_3_POKEMON
#define P_FAMILY_SNORUNT                 P_GEN_3_POKEMON
#define P_FAMILY_SPHEAL                  P_GEN_3_POKEMON
#define P_FAMILY_CLAMPERL                P_GEN_3_POKEMON
#define P_FAMILY_RELICANTH               P_GEN_3_POKEMON
#define P_FAMILY_LUVDISC                 P_GEN_3_POKEMON
#define P_FAMILY_BAGON                   P_GEN_3_POKEMON
#define P_FAMILY_BELDUM                  P_GEN_3_POKEMON
#define P_FAMILY_REGIROCK                P_GEN_3_POKEMON
#define P_FAMILY_REGICE                  P_GEN_3_POKEMON
#define P_FAMILY_REGISTEEL               P_GEN_3_POKEMON
#define P_FAMILY_LATIAS                  P_GEN_3_POKEMON
#define P_FAMILY_LATIOS                  P_GEN_3_POKEMON
#define P_FAMILY_KYOGRE                  P_GEN_3_POKEMON
#define P_FAMILY_GROUDON                 P_GEN_3_POKEMON
#define P_FAMILY_RAYQUAZA                P_GEN_3_POKEMON
#define P_FAMILY_JIRACHI                 P_GEN_3_POKEMON
#define P_FAMILY_DEOXYS                  P_GEN_3_POKEMON

#define P_FAMILY_TURTWIG                 FALSE
#define P_FAMILY_CHIMCHAR                FALSE
#define P_FAMILY_PIPLUP                  FALSE
#define P_FAMILY_STARLY                  FALSE
#define P_FAMILY_BIDOOF                  FALSE
#define P_FAMILY_KRICKETOT               P_GEN_4_POKEMON
#define P_FAMILY_SHINX                   P_GEN_4_POKEMON
#define P_FAMILY_CRANIDOS                FALSE
#define P_FAMILY_SHIELDON                FALSE
#define P_FAMILY_BURMY                   P_GEN_4_POKEMON
#define P_FAMILY_COMBEE                  FALSE
#define P_FAMILY_PACHIRISU               FALSE
#define P_FAMILY_BUIZEL                  P_GEN_4_POKEMON
#define P_FAMILY_CHERUBI                 P_GEN_4_POKEMON
#define P_FAMILY_SHELLOS                 P_GEN_4_POKEMON // route 103
#define P_FAMILY_DRIFLOON                P_GEN_4_POKEMON
#define P_FAMILY_BUNEARY                 P_GEN_4_POKEMON
#define P_FAMILY_GLAMEOW                 P_GEN_4_POKEMON
#define P_FAMILY_STUNKY                  P_GEN_4_POKEMON
#define P_FAMILY_BRONZOR                 P_GEN_4_POKEMON
#define P_FAMILY_CHATOT                  P_GEN_4_POKEMON // route 103
#define P_FAMILY_SPIRITOMB               FALSE
#define P_FAMILY_GIBLE                   P_GEN_4_POKEMON
#define P_FAMILY_RIOLU                   FALSE
#define P_FAMILY_HIPPOPOTAS              P_GEN_4_POKEMON
#define P_FAMILY_SKORUPI                 P_GEN_4_POKEMON
#define P_FAMILY_CROAGUNK                P_GEN_4_POKEMON
#define P_FAMILY_CARNIVINE               P_GEN_4_POKEMON
#define P_FAMILY_FINNEON                 P_GEN_4_POKEMON
#define P_FAMILY_SNOVER                  P_GEN_4_POKEMON
#define P_FAMILY_ROTOM                   P_GEN_4_POKEMON // new mauville
#define P_FAMILY_UXIE                    FALSE
#define P_FAMILY_MESPRIT                 FALSE
#define P_FAMILY_AZELF                   FALSE
#define P_FAMILY_DIALGA                  FALSE
#define P_FAMILY_PALKIA                  FALSE
#define P_FAMILY_HEATRAN                 FALSE
#define P_FAMILY_REGIGIGAS               P_GEN_4_POKEMON
#define P_FAMILY_GIRATINA                FALSE
#define P_FAMILY_CRESSELIA               FALSE
#define P_FAMILY_MANAPHY                 FALSE
#define P_FAMILY_DARKRAI                 FALSE
#define P_FAMILY_SHAYMIN                 FALSE
#define P_FAMILY_ARCEUS                  FALSE

#define P_FAMILY_VICTINI                 FALSE
#define P_FAMILY_SNIVY                   FALSE
#define P_FAMILY_TEPIG                   FALSE
#define P_FAMILY_OSHAWOTT                FALSE
#define P_FAMILY_PATRAT                  FALSE
#define P_FAMILY_LILLIPUP                P_GEN_5_POKEMON // route 101
#define P_FAMILY_PURRLOIN                P_GEN_5_POKEMON
#define P_FAMILY_PANSAGE                 P_GEN_5_POKEMON
#define P_FAMILY_PANSEAR                 P_GEN_5_POKEMON
#define P_FAMILY_PANPOUR                 P_GEN_5_POKEMON
#define P_FAMILY_MUNNA                   P_GEN_5_POKEMON
#define P_FAMILY_PIDOVE                  P_GEN_5_POKEMON // route 104
#define P_FAMILY_BLITZLE                 P_GEN_5_POKEMON
#define P_FAMILY_ROGGENROLA              P_GEN_5_POKEMON // fiery path
#define P_FAMILY_WOOBAT                  P_GEN_5_POKEMON
#define P_FAMILY_DRILBUR                 P_GEN_5_POKEMON
#define P_FAMILY_AUDINO                  P_GEN_5_POKEMON // rusturf
#define P_FAMILY_TIMBURR                 FALSE
#define P_FAMILY_TYMPOLE                 P_GEN_5_POKEMON // route 102
#define P_FAMILY_THROH                   P_GEN_5_POKEMON // route 112
#define P_FAMILY_SAWK                    P_GEN_5_POKEMON // route 112
#define P_FAMILY_SEWADDLE                P_GEN_5_POKEMON // route 101
#define P_FAMILY_VENIPEDE                P_GEN_5_POKEMON
#define P_FAMILY_COTTONEE                P_GEN_5_POKEMON
#define P_FAMILY_PETILIL                 P_GEN_5_POKEMON
#define P_FAMILY_BASCULIN                P_GEN_5_POKEMON
#define P_FAMILY_SANDILE                 P_GEN_5_POKEMON
#define P_FAMILY_DARUMAKA                P_GEN_5_POKEMON // route 112
#define P_FAMILY_MARACTUS                P_GEN_5_POKEMON
#define P_FAMILY_DWEBBLE                 P_GEN_5_POKEMON
#define P_FAMILY_SCRAGGY                 P_GEN_5_POKEMON
#define P_FAMILY_SIGILYPH                P_GEN_5_POKEMON
#define P_FAMILY_YAMASK                  P_GEN_5_POKEMON
#define P_FAMILY_TIRTOUGA                P_GEN_5_POKEMON
#define P_FAMILY_ARCHEN                  P_GEN_5_POKEMON
#define P_FAMILY_TRUBBISH                P_GEN_5_POKEMON // south of mauville
#define P_FAMILY_ZORUA                   P_GEN_5_POKEMON // route 101
#define P_FAMILY_MINCCINO                P_GEN_5_POKEMON
#define P_FAMILY_GOTHITA                 P_GEN_5_POKEMON // route 102
#define P_FAMILY_SOLOSIS                 P_GEN_5_POKEMON
#define P_FAMILY_DUCKLETT                P_GEN_5_POKEMON
#define P_FAMILY_VANILLITE               P_GEN_5_POKEMON
#define P_FAMILY_DEERLING                P_GEN_5_POKEMON
#define P_FAMILY_EMOLGA                  P_GEN_5_POKEMON
#define P_FAMILY_KARRABLAST              P_GEN_5_POKEMON
#define P_FAMILY_FOONGUS                 P_GEN_5_POKEMON
#define P_FAMILY_FRILLISH                P_GEN_5_POKEMON
#define P_FAMILY_ALOMOMOLA               P_GEN_5_POKEMON
#define P_FAMILY_JOLTIK                  P_GEN_5_POKEMON // near rusturf
#define P_FAMILY_FERROSEED               P_GEN_5_POKEMON
#define P_FAMILY_KLINK                   P_GEN_5_POKEMON
#define P_FAMILY_TYNAMO                  P_GEN_5_POKEMON
#define P_FAMILY_ELGYEM                  P_GEN_5_POKEMON
#define P_FAMILY_LITWICK                 P_GEN_5_POKEMON
#define P_FAMILY_AXEW                    P_GEN_5_POKEMON // granite cave
#define P_FAMILY_CUBCHOO                 P_GEN_5_POKEMON
#define P_FAMILY_CRYOGONAL               P_GEN_5_POKEMON
#define P_FAMILY_SHELMET                 FALSE
#define P_FAMILY_STUNFISK                P_GEN_5_POKEMON
#define P_FAMILY_MIENFOO                 P_GEN_5_POKEMON
#define P_FAMILY_DRUDDIGON               P_GEN_5_POKEMON
#define P_FAMILY_GOLETT                  P_GEN_5_POKEMON
#define P_FAMILY_PAWNIARD                P_GEN_5_POKEMON
#define P_FAMILY_BOUFFALANT              P_GEN_5_POKEMON
#define P_FAMILY_RUFFLET                 P_GEN_5_POKEMON
#define P_FAMILY_VULLABY                 P_GEN_5_POKEMON
#define P_FAMILY_HEATMOR                 P_GEN_5_POKEMON
#define P_FAMILY_DURANT                  P_GEN_5_POKEMON
#define P_FAMILY_DEINO                   P_GEN_5_POKEMON
#define P_FAMILY_LARVESTA                P_GEN_5_POKEMON
#define P_FAMILY_COBALION                FALSE
#define P_FAMILY_TERRAKION               FALSE
#define P_FAMILY_VIRIZION                FALSE
#define P_FAMILY_TORNADUS                FALSE
#define P_FAMILY_THUNDURUS               FALSE
#define P_FAMILY_RESHIRAM                FALSE
#define P_FAMILY_ZEKROM                  FALSE
#define P_FAMILY_LANDORUS                FALSE
#define P_FAMILY_KYUREM                  FALSE
#define P_FAMILY_KELDEO                  FALSE
#define P_FAMILY_MELOETTA                FALSE
#define P_FAMILY_GENESECT                FALSE

#define P_FAMILY_CHESPIN                 FALSE
#define P_FAMILY_FENNEKIN                FALSE
#define P_FAMILY_FROAKIE                 FALSE
#define P_FAMILY_BUNNELBY                P_GEN_6_POKEMON
#define P_FAMILY_FLETCHLING              P_GEN_6_POKEMON
#define P_FAMILY_SCATTERBUG              P_GEN_6_POKEMON
#define P_FAMILY_LITLEO                  FALSE
#define P_FAMILY_FLABEBE                 P_GEN_6_POKEMON
#define P_FAMILY_SKIDDO                  P_GEN_6_POKEMON
#define P_FAMILY_PANCHAM                 P_GEN_6_POKEMON
#define P_FAMILY_FURFROU                 P_GEN_6_POKEMON
#define P_FAMILY_ESPURR                  P_GEN_6_POKEMON
#define P_FAMILY_HONEDGE                 P_GEN_6_POKEMON
#define P_FAMILY_SPRITZEE                P_GEN_6_POKEMON //
#define P_FAMILY_SWIRLIX                 P_GEN_6_POKEMON
#define P_FAMILY_INKAY                   P_GEN_6_POKEMON
#define P_FAMILY_BINACLE                 P_GEN_6_POKEMON
#define P_FAMILY_SKRELP                  P_GEN_6_POKEMON
#define P_FAMILY_CLAUNCHER               P_GEN_6_POKEMON
#define P_FAMILY_HELIOPTILE              P_GEN_6_POKEMON
#define P_FAMILY_TYRUNT                  FALSE
#define P_FAMILY_AMAURA                  FALSE
#define P_FAMILY_HAWLUCHA                FALSE
#define P_FAMILY_DEDENNE                 P_GEN_6_POKEMON
#define P_FAMILY_CARBINK                 P_GEN_6_POKEMON
#define P_FAMILY_GOOMY                   P_GEN_6_POKEMON
#define P_FAMILY_KLEFKI                  P_GEN_6_POKEMON
#define P_FAMILY_PHANTUMP                P_GEN_6_POKEMON // petalburg woods
#define P_FAMILY_PUMPKABOO               FALSE
#define P_FAMILY_BERGMITE                P_GEN_6_POKEMON
#define P_FAMILY_NOIBAT                  P_GEN_6_POKEMON
#define P_FAMILY_XERNEAS                 FALSE
#define P_FAMILY_YVELTAL                 FALSE
#define P_FAMILY_ZYGARDE                 FALSE
#define P_FAMILY_DIANCIE                 P_GEN_6_POKEMON
#define P_FAMILY_HOOPA                   FALSE
#define P_FAMILY_VOLCANION               FALSE

#define P_FAMILY_ROWLET                  FALSE
#define P_FAMILY_LITTEN                  FALSE
#define P_FAMILY_POPPLIO                 FALSE
#define P_FAMILY_PIKIPEK                 FALSE
#define P_FAMILY_YUNGOOS                 FALSE
#define P_FAMILY_GRUBBIN                 FALSE
#define P_FAMILY_CRABRAWLER              P_GEN_7_POKEMON
#define P_FAMILY_ORICORIO                FALSE
#define P_FAMILY_CUTIEFLY                P_GEN_7_POKEMON
#define P_FAMILY_ROCKRUFF                P_GEN_7_POKEMON
#define P_FAMILY_WISHIWASHI              P_GEN_7_POKEMON
#define P_FAMILY_MAREANIE                P_GEN_7_POKEMON
#define P_FAMILY_MUDBRAY                 P_GEN_7_POKEMON
#define P_FAMILY_DEWPIDER                P_GEN_7_POKEMON
#define P_FAMILY_FOMANTIS                P_GEN_7_POKEMON
#define P_FAMILY_MORELULL                P_GEN_7_POKEMON // petalburg woods
#define P_FAMILY_SALANDIT                P_GEN_7_POKEMON // fiery path
#define P_FAMILY_STUFFUL                 P_GEN_7_POKEMON
#define P_FAMILY_BOUNSWEET               P_GEN_7_POKEMON
#define P_FAMILY_COMFEY                  P_GEN_7_POKEMON
#define P_FAMILY_ORANGURU                P_GEN_7_POKEMON
#define P_FAMILY_PASSIMIAN               P_GEN_7_POKEMON
#define P_FAMILY_WIMPOD                  P_GEN_7_POKEMON
#define P_FAMILY_SANDYGAST               P_GEN_7_POKEMON
#define P_FAMILY_PYUKUMUKU               P_GEN_7_POKEMON
#define P_FAMILY_TYPE_NULL               FALSE
#define P_FAMILY_MINIOR                  P_GEN_7_POKEMON
#define P_FAMILY_KOMALA                  P_GEN_7_POKEMON
#define P_FAMILY_TURTONATOR              P_GEN_7_POKEMON
#define P_FAMILY_TOGEDEMARU              P_GEN_7_POKEMON
#define P_FAMILY_MIMIKYU                 P_GEN_7_POKEMON
#define P_FAMILY_BRUXISH                 P_GEN_7_POKEMON
#define P_FAMILY_DRAMPA                  P_GEN_7_POKEMON
#define P_FAMILY_DHELMISE                P_GEN_7_POKEMON // abandoned ship
#define P_FAMILY_JANGMO_O                P_GEN_7_POKEMON
#define P_FAMILY_TAPU_KOKO               FALSE
#define P_FAMILY_TAPU_LELE               FALSE
#define P_FAMILY_TAPU_BULU               FALSE
#define P_FAMILY_TAPU_FINI               FALSE
#define P_FAMILY_COSMOG                  FALSE
#define P_FAMILY_NIHILEGO                P_INTERDIMENSIONAL
#define P_FAMILY_BUZZWOLE                P_INTERDIMENSIONAL
#define P_FAMILY_PHEROMOSA               P_INTERDIMENSIONAL
#define P_FAMILY_XURKITREE               P_INTERDIMENSIONAL
#define P_FAMILY_CELESTEELA              P_INTERDIMENSIONAL
#define P_FAMILY_KARTANA                 P_INTERDIMENSIONAL
#define P_FAMILY_GUZZLORD                P_INTERDIMENSIONAL
#define P_FAMILY_NECROZMA                FALSE
#define P_FAMILY_MAGEARNA                FALSE
#define P_FAMILY_MARSHADOW               FALSE
#define P_FAMILY_POIPOLE                 P_INTERDIMENSIONAL
#define P_FAMILY_STAKATAKA               P_INTERDIMENSIONAL
#define P_FAMILY_BLACEPHALON             P_INTERDIMENSIONAL
#define P_FAMILY_ZERAORA                 FALSE
#define P_FAMILY_MELTAN                  FALSE

#define P_FAMILY_GROOKEY                 FALSE
#define P_FAMILY_SCORBUNNY               FALSE
#define P_FAMILY_SOBBLE                  FALSE
#define P_FAMILY_SKWOVET                 P_GEN_8_POKEMON
#define P_FAMILY_ROOKIDEE                P_GEN_8_POKEMON
#define P_FAMILY_BLIPBUG                 P_GEN_8_POKEMON // route 101
#define P_FAMILY_NICKIT                  P_GEN_8_POKEMON
#define P_FAMILY_GOSSIFLEUR              P_GEN_8_POKEMON
#define P_FAMILY_WOOLOO                  P_GEN_8_POKEMON
#define P_FAMILY_CHEWTLE                 P_GEN_8_POKEMON // route 103
#define P_FAMILY_YAMPER                  P_GEN_8_POKEMON
#define P_FAMILY_ROLYCOLY                FALSE
#define P_FAMILY_APPLIN                  FALSE
#define P_FAMILY_SILICOBRA               P_GEN_8_POKEMON
#define P_FAMILY_CRAMORANT               P_GEN_8_POKEMON
#define P_FAMILY_ARROKUDA                P_GEN_8_POKEMON
#define P_FAMILY_TOXEL                   P_GEN_8_POKEMON
#define P_FAMILY_SIZZLIPEDE              P_GEN_8_POKEMON
#define P_FAMILY_CLOBBOPUS               P_GEN_8_POKEMON
#define P_FAMILY_SINISTEA                FALSE
#define P_FAMILY_HATENNA                 P_GEN_8_POKEMON
#define P_FAMILY_IMPIDIMP                P_GEN_8_POKEMON
#define P_FAMILY_MILCERY                 FALSE
#define P_FAMILY_FALINKS                 P_GEN_8_POKEMON
#define P_FAMILY_PINCURCHIN              P_GEN_8_POKEMON
#define P_FAMILY_SNOM                    P_GEN_8_POKEMON
#define P_FAMILY_STONJOURNER             FALSE
#define P_FAMILY_EISCUE                  FALSE
#define P_FAMILY_INDEEDEE                FALSE
#define P_FAMILY_MORPEKO                 FALSE
#define P_FAMILY_CUFANT                  FALSE
#define P_FAMILY_DRACOZOLT               FALSE
#define P_FAMILY_ARCTOZOLT               FALSE
#define P_FAMILY_DRACOVISH               FALSE
#define P_FAMILY_ARCTOVISH               FALSE
#define P_FAMILY_DURALUDON               P_GEN_8_POKEMON
#define P_FAMILY_DREEPY                  P_GEN_8_POKEMON
#define P_FAMILY_ZACIAN                  FALSE
#define P_FAMILY_ZAMAZENTA               FALSE
#define P_FAMILY_ETERNATUS               FALSE
#define P_FAMILY_KUBFU                   FALSE
#define P_FAMILY_ZARUDE                  FALSE
#define P_FAMILY_REGIELEKI               P_GEN_8_POKEMON
#define P_FAMILY_REGIDRAGO               P_GEN_8_POKEMON
#define P_FAMILY_GLASTRIER               FALSE
#define P_FAMILY_SPECTRIER               FALSE
#define P_FAMILY_CALYREX                 FALSE
#define P_FAMILY_ENAMORUS                FALSE

#define P_FAMILY_SPRIGATITO              FALSE
#define P_FAMILY_FUECOCO                 FALSE
#define P_FAMILY_QUAXLY                  FALSE
#define P_FAMILY_LECHONK                 FALSE
#define P_FAMILY_TAROUNTULA              P_GEN_9_POKEMON // route 101
#define P_FAMILY_NYMBLE                  P_GEN_9_POKEMON
#define P_FAMILY_PAWMI                   FALSE
#define P_FAMILY_TANDEMAUS               P_GEN_9_POKEMON
#define P_FAMILY_FIDOUGH                 P_GEN_9_POKEMON // route 112
#define P_FAMILY_SMOLIV                  P_GEN_9_POKEMON
#define P_FAMILY_SQUAWKABILLY            FALSE
#define P_FAMILY_NACLI                   P_GEN_9_POKEMON // dewford
#define P_FAMILY_CHARCADET               P_GEN_9_POKEMON // lavaridge town
#define P_FAMILY_TADBULB                 P_GEN_9_POKEMON
#define P_FAMILY_WATTREL                 P_GEN_9_POKEMON // mossdeep area
#define P_FAMILY_MASCHIFF                FALSE
#define P_FAMILY_SHROODLE                P_GEN_9_POKEMON // altering cave
#define P_FAMILY_BRAMBLIN                P_GEN_9_POKEMON
#define P_FAMILY_TOEDSCOOL               FALSE
#define P_FAMILY_KLAWF                   P_GEN_9_POKEMON
#define P_FAMILY_CAPSAKID                FALSE
#define P_FAMILY_RELLOR                  FALSE
#define P_FAMILY_FLITTLE                 FALSE
#define P_FAMILY_TINKATINK               P_GEN_9_POKEMON
#define P_FAMILY_WIGLETT                 P_GEN_9_POKEMON // slateport
#define P_FAMILY_BOMBIRDIER              FALSE
#define P_FAMILY_FINIZEN                 FALSE
#define P_FAMILY_VAROOM                  FALSE
#define P_FAMILY_CYCLIZAR                FALSE
#define P_FAMILY_ORTHWORM                FALSE
#define P_FAMILY_GLIMMET                 P_GEN_9_POKEMON
#define P_FAMILY_GREAVARD                P_GEN_9_POKEMON
#define P_FAMILY_FLAMIGO                 FALSE
#define P_FAMILY_CETODDLE                P_GEN_9_POKEMON // shoal cave
#define P_FAMILY_VELUZA                  FALSE
#define P_FAMILY_DONDOZO                 P_GEN_9_POKEMON // sootopolis
#define P_FAMILY_TATSUGIRI               P_GEN_9_POKEMON // sootopolis
#define P_FAMILY_GREAT_TUSK              P_INTERDIMENSIONAL
#define P_FAMILY_SCREAM_TAIL             P_INTERDIMENSIONAL
#define P_FAMILY_BRUTE_BONNET            FALSE
#define P_FAMILY_FLUTTER_MANE            P_INTERDIMENSIONAL
#define P_FAMILY_SLITHER_WING            FALSE
#define P_FAMILY_SANDY_SHOCKS            P_INTERDIMENSIONAL
#define P_FAMILY_IRON_TREADS             P_INTERDIMENSIONAL
#define P_FAMILY_IRON_BUNDLE             FALSE
#define P_FAMILY_IRON_HANDS              P_INTERDIMENSIONAL
#define P_FAMILY_IRON_JUGULIS            FALSE
#define P_FAMILY_IRON_MOTH               FALSE
#define P_FAMILY_IRON_THORNS             FALSE
#define P_FAMILY_FRIGIBAX                P_GEN_9_POKEMON // shoal cave
#define P_FAMILY_GIMMIGHOUL              FALSE
#define P_FAMILY_WO_CHIEN                FALSE
#define P_FAMILY_CHIEN_PAO               FALSE
#define P_FAMILY_TING_LU                 FALSE
#define P_FAMILY_CHI_YU                  FALSE
#define P_FAMILY_ROARING_MOON            P_INTERDIMENSIONAL
#define P_FAMILY_IRON_VALIANT            P_INTERDIMENSIONAL
#define P_FAMILY_KORAIDON                FALSE
#define P_FAMILY_MIRAIDON                FALSE
#define P_FAMILY_WALKING_WAKE            FALSE
#define P_FAMILY_IRON_LEAVES             FALSE
#define P_FAMILY_POLTCHAGEIST            FALSE
#define P_FAMILY_SINISTCHA               FALSE
#define P_FAMILY_OKIDOGI                 FALSE
#define P_FAMILY_MUNKIDORI               FALSE
#define P_FAMILY_FEZANDIPITI             FALSE
#define P_FAMILY_OGERPON                 FALSE
#define P_FAMILY_GOUGING_FIRE            FALSE
#define P_FAMILY_RAGING_BOLT             FALSE
#define P_FAMILY_IRON_BOULDER            FALSE
#define P_FAMILY_IRON_CROWN              FALSE
#define P_FAMILY_TERAPAGOS               FALSE
#define P_FAMILY_PECHARUNT               FALSE

#endif // GUARD_CONFIG_SPECIES_ENABLED_H
