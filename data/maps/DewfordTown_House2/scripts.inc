DewfordTown_House2_MapScripts:: @ 81FE22D
	.byte 0

DewfordTown_House2_EventScript_Man:: @ 81FE22E
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PIXIE_PLATE, DewfordTown_House2_EventScript_ExplainSilkScarf
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_PIXIE_PLATE
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_House2_EventScript_NoRoomForScarf
	setflag FLAG_RECEIVED_PIXIE_PLATE
	release
	end

DewfordTown_House2_EventScript_NoRoomForScarf:: @ 81FE25D
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_ExplainSilkScarf:: @ 81FE267
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_Boy:: @ 81FE271
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
	end

DewfordTown_House2_Text_WantYouToHaveSilkScarf: @ 81FE27A
	.string "Gorge your eyes on this!\p"
	.string "It's a Pixie Plate. It's connected\n"
	.string "to an infamous legendary Pokémon!\p"
	.string "Oh, I can see your eyes twinkling!\n"
	.string "You appreciate my dazzling taste!\p"
	.string "Oh, you're a delight!\n"
	.string "Here you go. I want you to have it!$"

DewfordTown_House2_Text_NoRoom: @ 81FE356
	.string "Oh, you don't have room?\p"
	.string "Now, listen tight, this Plate is super\n"
	.string "rare! Why, I'd sell all I have for it!$"

DewfordTown_House2_Text_ExplainSilkScarf: @ 81FE3D1
	.string "The Pixie Plate raises the power of\n"
	.string "Fairy-type moves.\p"
	.string "It'll help you defeat Brawly, if\n"
	.string "you're into that.$"

DewfordTown_House2_Text_BrawlySoCool: @ 81FE444
	.string "Wow, you bothered to cross the sea\n"
	.string "to visit Dewford?\p"
	.string "Did you maybe come here because you\n"
	.string "heard about Brawly?\p"
	.string "He's so cool…\n"
	.string "Everyone idolizes him.$"

