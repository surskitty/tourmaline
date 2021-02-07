Common_EventScript_MoveDeleter:: @ 821EA0B
    lockall
    applymovement VAR_0x800B, Common_Movement_FacePlayer
    waitmovement 0
    msgbox Common_MoveDeleter_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
    switch VAR_RESULT
    case YES, Common_EventScript_MoveDeleter_ChooseMonAndMoveToForget
    case NO, Common_EventScript_MoveDeleter_ComeAgain
    releaseall
    end

Common_EventScript_MoveDeleter_ChooseMonAndMoveToForget:: @ 821EA3B
    msgbox Common_MoveDeleter_Text_WhichMonShouldForget, MSGBOX_DEFAULT
    special ChoosePartyMon
    waitstate
    compare VAR_0x8004, 255
    goto_if_eq Common_EventScript_MoveDeleter_ComeAgain
    special IsSelectedMonEgg
    compare VAR_RESULT, TRUE
    goto_if_eq Common_EventScript_MoveDeleter_EggCantForgetMoves
    special GetNumMovesSelectedMonHas
    compare VAR_RESULT, 1
    goto_if_eq Common_EventScript_MoveDeleter_MonOnlyKnowsOneMove
    msgbox Common_MoveDeleter_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
    fadescreen FADE_TO_BLACK
    special MoveDeleterChooseMoveToForget
    fadescreen FADE_FROM_BLACK
    compare VAR_0x8005, MAX_MON_MOVES
    goto_if_eq Common_EventScript_MoveDeleter_ChooseMonAndMoveToForget
    special BufferMoveDeleterNicknameAndMove
    msgbox Common_MoveDeleter_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
    switch VAR_RESULT
    case YES, Common_EventScript_MoveDeleter_TryForgetMove
    case NO, Common_EventScript_MoveDeleter_ComeAgain
    releaseall
    end

Common_EventScript_MoveDeleter_TryForgetMove:: @ 821EAB0
    special IsLastMonThatKnowsSurf
    compare VAR_RESULT, TRUE
    goto_if_eq Common_EventScript_MoveDeleter_LastMonWithSurf
    special MoveDeleterForgetMove
    playfanfare MUS_MOVE_DELETED
    waitfanfare
    msgbox Common_MoveDeleter_Text_MonHasForgottenMove, MSGBOX_DEFAULT
    releaseall
    end

Common_EventScript_MoveDeleter_MonOnlyKnowsOneMove:: @ 821EACF
    special BufferMoveDeleterNicknameAndMove
    msgbox Common_MoveDeleter_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
    releaseall
    end

Common_EventScript_MoveDeleter_EggCantForgetMoves:: @ 821EADC
    msgbox Common_MoveDeleter_Text_EggCantForgetMoves, MSGBOX_DEFAULT
    releaseall
    end

Common_EventScript_MoveDeleter_ComeAgain:: @ 821EAE6
    msgbox Common_MoveDeleter_Text_ComeAgain, MSGBOX_DEFAULT
    releaseall
    end

Common_EventScript_MoveDeleter_LastMonWithSurf:: @ 821EAF0
    special BufferMoveDeleterNicknameAndMove
    msgbox Common_MoveDeleter_Text_CantForgetSurf, MSGBOX_DEFAULT
    releaseall
    end
