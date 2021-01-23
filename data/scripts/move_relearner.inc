Common_EventScript_MoveRelearner:: @ 827191E
    lockall
    applymovement VAR_0x800B, Common_Movement_FacePlayer
    waitmovement 0
    msgbox gText_MoveRelearner_Introduction, MSGBOX_YESNO
    switch VAR_RESULT
    case NO, EventScript_MoveRelearner_ComeBack
    goto EventScript_MoveRelearner_ChooseMon
    end

EventScript_MoveRelearner_ChooseMon:: @ 82013D6
    msgbox gText_MoveRelearner_TutorWhichMon, MSGBOX_DEFAULT
    special ChooseMonForMoveRelearner
    waitstate
    compare VAR_0x8004, 255
    goto_if_eq EventScript_MoveRelearner_ComeBack
    special IsSelectedMonEgg
    compare VAR_RESULT, TRUE
    goto_if_eq EventScript_MoveRelearner_CantTeachEgg
    compare VAR_0x8005, 0
    goto_if_eq EventScript_MoveRelearner_NoMoveToTeachMon
    goto EventScript_MoveRelearner_ChooseMove
    end

EventScript_MoveRelearner_ChooseMove:: @ 820140C
    msgbox gText_MoveRelearner_TeachWhichMove, MSGBOX_DEFAULT
    special TeachMoveRelearnerMove
    waitstate
    compare VAR_0x8004, 0
    goto_if_eq EventScript_MoveRelearner_ChooseMon
    goto EventScript_MoveRelearner_ComeBack
    end

EventScript_MoveRelearner_NoMoveToTeachMon:: @ 8201436
    msgbox gText_MoveRelearner_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
    goto EventScript_MoveRelearner_ChooseMon
    end

EventScript_MoveRelearner_CantTeachEgg:: @ 8201444
   msgbox gText_MoveRelearner_CantTeachEgg, MSGBOX_DEFAULT
   goto EventScript_MoveRelearner_ChooseMon
   end

EventScript_MoveRelearner_ComeBack:: @ 8201452
   msgbox gText_MoveRelearner_ComeBack, MSGBOX_DEFAULT
   setvar VAR_0x8002, 0
   releaseall
   end
