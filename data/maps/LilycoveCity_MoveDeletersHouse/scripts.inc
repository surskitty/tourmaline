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

LilycoveCity_MoveDeletersHouse_EventScript_MoveRelearner:: 
	setvar VAR_0x800B, LOCALID_MOVE_RELEARNER
	call Common_EventScript_MoveRelearner
	waitmessage
	waitbuttonpress
	release
	end

