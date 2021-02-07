.set LOCALID_WALDAS_DAD, 6

RustboroCity_Flat1_2F_MapScripts:: @ 8215139
	.byte 0

RustboroCity_Flat1_2F_EventScript_WaldasDad:: @ 821513A
	msgbox RustboroCity_Flat1_2F_Text_WaldasDad
	end

RustboroCity_Flat1_2F_EventScript_WaldasMom:: @ 821523D
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
	end

RustboroCity_Flat1_2F_EventScript_PokeDoll:: @ 8215246
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
	end

RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard: @ 821524F
	.string "Oh, it's so hard every day…\p"
	.string "What's hard?\n"
	.string "You need to ask?\p"
	.string "It's trying to figure out what to\n"
	.string "make for meals every day.\p"
	.string "It really isn't easy coming up with\n"
	.string "meals every day.$"

RustboroCity_Flat1_2F_Text_WaldasDad: @ 82152FA
	.string "Oh, hello!\n"
	.string "Welcome to the Pepper household.\p"
	.string "I have a question for you.\n"
	.string "Have you ever baby-sat?\p"
	.string "My wife and I are having a hard\n"
	.string "time with our daughter Walda.\p"
	.string "What? Trade her for a Pokémon?\n"
	.string "No, I won't do that.$"

RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll: @ 8215923
	.string "It's a Pokémon plush doll!$"

