.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts:: @ 8201382
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner:: @ 8201383
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor,  MSGBOX_YESNO
	switch VAR_RESULT
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBack
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon:: @ 82013D6
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ComeBack
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove:: @ 820140C
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBack
	end

FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon:: @ 8201436
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg:: @ 8201444
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ComeBack:: @ 8201452
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBack, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor: @ 820145C
	.string "I'm the Move Tutor.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon\n"
	.string "of yours if you'd like.$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon: @ 82015A5
	.string "Which Pokémon needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove: @ 82015C3
	.string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon: @ 82015DE
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBack: @ 8201653
	.string "If your Pokémon need to learn a move,\n"
	.string "come back any time.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg: @ 8201697
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an Egg.$"

