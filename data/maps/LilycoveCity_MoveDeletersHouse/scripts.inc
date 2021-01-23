.set LOCALID_MOVE_DELETER, 1
.set LOCALID_MOVE_RELEARNER, 2

LilycoveCity_MoveDeletersHouse_MapScripts:: @ 821EA0A
	.byte 0

LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter:: 
	setvar VAR_0x800B, LOCALID_MOVE_DELETER
	call Common_EventScript_MoveDeleter
	waitmessage
	waitbuttonpress
	release
	end

LilycoveCity_MoveDeletersHouse_EventScript_MoveRelearner:: @ 8201383
	lockall
	setvar VAR_0x8002, FLAG_LEARN_ALL_MOVES | FLAG_LEARN_EGG_MOVES
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, LilycoveCity_MoveDeletersHouse_EventScript_AskTeachMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto LilycoveCity_MoveDeletersHouse_EventScript_AskTeachMove
	end

LilycoveCity_MoveDeletersHouse_EventScript_AskTeachMove:: @ 82013A8
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ComeBackWithHeartScale
	msgbox LilycoveCity_MoveDeletersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeBackWithHeartScale
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMon
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMon:: @ 82013D6
	msgbox LilycoveCity_MoveDeletersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_NoMoveToTeachMon
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMove
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMove:: @ 820140C
	msgbox LilycoveCity_MoveDeletersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMon
	msgbox LilycoveCity_MoveDeletersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeBackWithHeartScale
	end

LilycoveCity_MoveDeletersHouse_EventScript_NoMoveToTeachMon:: @ 8201436
	msgbox LilycoveCity_MoveDeletersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMon
	end

LilycoveCity_MoveDeletersHouse_EventScript_CantTeachEgg:: @ 8201444
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMon
	end

LilycoveCity_MoveDeletersHouse_EventScript_ComeBackWithHeartScale:: @ 8201452
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	setvar VAR_0x8002, 0
	releaseall
	end

LilycoveCity_MoveDeletersHouse_Text_ImTheMoveTutor: @ 820145C
	.string "I'm the Move Tutor.\p"
	.string "I know how to teach Pokémon moves\n"
	.string "that they could have hatched with,\l"
	.string "or even have yet to learn.\p"
	.string "I can teach a move to a Pokémon\n"
	.string "of yours, but you'll have to pay.$"

LilycoveCity_MoveDeletersHouse_Text_ThatsAHeartScaleWantMeToTeachMove: @ 8201541
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness Heart Scale!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

LilycoveCity_MoveDeletersHouse_Text_TutorWhichMon: @ 82015A5
	.string "Which Pokémon needs tutoring?$"

LilycoveCity_MoveDeletersHouse_Text_TeachWhichMove: @ 82015C3
	.string "Which move should I teach?$"

LilycoveCity_MoveDeletersHouse_Text_DontHaveMoveToTeachPokemon: @ 82015DE
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

LilycoveCity_MoveDeletersHouse_Text_HandedOverHeartScale: @ 8201627
	.string "{PLAYER} handed over one Heart Scale\n"
	.string "in exchange.$"

LilycoveCity_MoveDeletersHouse_Text_ComeBackWithHeartScale: @ 8201653
	.string "If your Pokémon need to learn a move,\n"
	.string "come back with a Heart Scale.$"

LilycoveCity_MoveDeletersHouse_Text_CantTeachEgg: @ 8201697
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an Egg.$"

