.set LOCALID_MOVE_RELEARNER, 1
.set LOCALID_MOVE_DELETER, 2

FallarborTown_MoveRelearnersHouse_MapScripts:: @ 8201382
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_MoveDeleter:: 
	setvar VAR_0x800B, LOCALID_MOVE_DELETER
	setvar VAR_MOVE_MANAGER, MOVE_DELETER
	call Common_EventScript_MoveManager
	waitmessage
	waitbuttonpress
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner:: @ 8201383
	lockall
	setvar VAR_MOVE_MANAGER, MOVE_TUTOR_EGG_MOVES
	setvar VAR_0x800B, LOCALID_MOVE_RELEARNER
	call Common_EventScript_MoveManager
	waitmessage
	waitbuttonpress
	release
	end

