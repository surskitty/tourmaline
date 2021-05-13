LilycoveCity_DepartmentStore_4F_MapScripts:: @ 821FDEA
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman:: @ 821FDEB
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman:: @ 821FDF4
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster:: @ 821FDFD
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft:: @ 821FE06
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_TMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_TMs: @ 821FE20
	.2byte ITEM_TM38  @ Fire Blast
	.2byte ITEM_TM25  @ Thunder
	.2byte ITEM_TM14  @ Blizzard
	.2byte ITEM_TM15  @ Hyper Beam
	.2byte ITEM_TM17  @ Protect
	.2byte ITEM_TM20  @ Safeguard
	.2byte ITEM_TM33  @ Reflect
	.2byte ITEM_TM16  @ Light Screen
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight:: @ 821FE2C
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_PowerUp
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_PowerUp: @ 821FE44
	.2byte ITEM_MEGA_STONE
	.2byte ITEM_MEGA_STONE_X
	.2byte ITEM_MEGA_STONE_Y
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM: @ 821FE50
	.string "I hear a Stone Collector in Mossdeep\n"
	.string "is why we can buy Mega Stones here.\p"
	.string "In some regions, each Pokémon needs\n"
	.string "a separate stone for a Mega Ring.\p"
	.string "Can you imagine how much room that\n"
	.string "would take?$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs: @ 821FEC7
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves: @ 821FF2D
	.string "I'd like to get all the different TMs,\n"
	.string "but a Pokémon learns only four moves.$"

