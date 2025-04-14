const u8 gEasyChatWord_Meet[] = _("Meet");
const u8 gEasyChatWord_Play[] = _("Play");
const u8 gEasyChatWord_Hurried[] = _("Hurried");
const u8 gEasyChatWord_Goes[] = _("Goes");
const u8 gEasyChatWord_Giddy[] = _("Giddy");
const u8 gEasyChatWord_Happy[] = _("Happy");
const u8 gEasyChatWord_Happiness[] = _("Happiness");
const u8 gEasyChatWord_Excite[] = _("Excite");
const u8 gEasyChatWord_Important[] = _("Important");
const u8 gEasyChatWord_Funny[] = _("Funny");
const u8 gEasyChatWord_Got[] = _("Got");
const u8 gEasyChatWord_GoHome[] = _("Go Home");
const u8 gEasyChatWord_Disappointed[] = _("Disappointed");
const u8 gEasyChatWord_Disappoints[] = _("Disappoints");
const u8 gEasyChatWord_Sad[] = _("Sad");
const u8 gEasyChatWord_Try[] = _("Try");
const u8 gEasyChatWord_Tries[] = _("Tries");
const u8 gEasyChatWord_Hears[] = _("Hears");
const u8 gEasyChatWord_Think[] = _("Think");
const u8 gEasyChatWord_Hear[] = _("Hear");
const u8 gEasyChatWord_Wants[] = _("Wants");
const u8 gEasyChatWord_Misheard[] = _("Misheard");
const u8 gEasyChatWord_Dislike[] = _("Dislike");
const u8 gEasyChatWord_Angry[] = _("Angry");
const u8 gEasyChatWord_Anger[] = _("Anger");
const u8 gEasyChatWord_Scary[] = _("Scary");
const u8 gEasyChatWord_Lonesome[] = _("Lonesome");
const u8 gEasyChatWord_Disappoint[] = _("Disappoint");
const u8 gEasyChatWord_Joy[] = _("Joy");
const u8 gEasyChatWord_Gets[] = _("Gets");
const u8 gEasyChatWord_Never[] = _("Never");
const u8 gEasyChatWord_Darn[] = _("Darn");
const u8 gEasyChatWord_Downcast[] = _("Downcast");
const u8 gEasyChatWord_Incredible[] = _("Incredible");
const u8 gEasyChatWord_Likes[] = _("Likes");
const u8 gEasyChatWord_Dislikes[] = _("Dislikes");
const u8 gEasyChatWord_Boring[] = _("Boring");
const u8 gEasyChatWord_Care[] = _("Care");
const u8 gEasyChatWord_Cares[] = _("Cares");
const u8 gEasyChatWord_AllRight[] = _("All Right");
const u8 gEasyChatWord_Adore[] = _("Adore");
const u8 gEasyChatWord_Disaster[] = _("Disaster");
const u8 gEasyChatWord_Enjoy[] = _("Enjoy");
const u8 gEasyChatWord_Enjoys[] = _("Enjoys");
const u8 gEasyChatWord_Eat[] = _("Eat");
const u8 gEasyChatWord_Lacking[] = _("Lacking");
const u8 gEasyChatWord_Bad[] = _("Bad");
const u8 gEasyChatWord_Hard[] = _("Hard");
const u8 gEasyChatWord_Terrible[] = _("Terrible");
const u8 gEasyChatWord_Should[] = _("Should");
const u8 gEasyChatWord_Nice[] = _("Nice");
const u8 gEasyChatWord_Drink[] = _("Drink");
const u8 gEasyChatWord_Surprise[] = _("Surprise");
const u8 gEasyChatWord_Fear[] = _("Fear");
const u8 gEasyChatWord_Want[] = _("Want");
const u8 gEasyChatWord_Wait[] = _("Wait");
const u8 gEasyChatWord_Satisfied[] = _("Satisfied");
const u8 gEasyChatWord_See[] = _("See");
const u8 gEasyChatWord_Rare[] = _("Rare");
const u8 gEasyChatWord_Negative[] = _("Negative");
const u8 gEasyChatWord_Done[] = _("Done");
const u8 gEasyChatWord_Danger[] = _("Danger");
const u8 gEasyChatWord_Defeated[] = _("Defeated");
const u8 gEasyChatWord_Beat[] = _("Beat");
const u8 gEasyChatWord_Great[] = _("Great");
const u8 gEasyChatWord_Romantic[] = _("Romantic");
const u8 gEasyChatWord_Question[] = _("Question");
const u8 gEasyChatWord_Understand[] = _("Understand");
const u8 gEasyChatWord_Understands[] = _("Understands");

const struct EasyChatWordInfo gEasyChatGroup_Feelings[] = {
    [EC_INDEX(EC_WORD_MEET)] =
    {
        .text = gEasyChatWord_Meet,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ADORE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLAY)] =
    {
        .text = gEasyChatWord_Play,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALL_RIGHT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HURRIED)] =
    {
        .text = gEasyChatWord_Hurried,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANGER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOES)] =
    {
        .text = gEasyChatWord_Goes,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANGRY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIDDY)] =
    {
        .text = gEasyChatWord_Giddy,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BAD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAPPY)] =
    {
        .text = gEasyChatWord_Happy,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEAT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAPPINESS)] =
    {
        .text = gEasyChatWord_Happiness,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BORING),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCITE)] =
    {
        .text = gEasyChatWord_Excite,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CARE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IMPORTANT)] =
    {
        .text = gEasyChatWord_Important,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CARES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FUNNY)] =
    {
        .text = gEasyChatWord_Funny,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DANGER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOT)] =
    {
        .text = gEasyChatWord_Got,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DARN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GO_HOME)] =
    {
        .text = gEasyChatWord_GoHome,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEFEATED),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISAPPOINTED)] =
    {
        .text = gEasyChatWord_Disappointed,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DISAPPOINT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISAPPOINTS)] =
    {
        .text = gEasyChatWord_Disappoints,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DISAPPOINTED),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SAD)] =
    {
        .text = gEasyChatWord_Sad,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DISAPPOINTS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRY)] =
    {
        .text = gEasyChatWord_Try,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DISASTER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRIES)] =
    {
        .text = gEasyChatWord_Tries,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DISLIKE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEARS)] =
    {
        .text = gEasyChatWord_Hears,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DISLIKES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THINK)] =
    {
        .text = gEasyChatWord_Think,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DONE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEAR)] =
    {
        .text = gEasyChatWord_Hear,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DOWNCAST),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WANTS)] =
    {
        .text = gEasyChatWord_Wants,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DRINK),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MISHEARD)] =
    {
        .text = gEasyChatWord_Misheard,
        .alphabeticalOrder = EC_INDEX(EC_WORD_EAT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISLIKE)] =
    {
        .text = gEasyChatWord_Dislike,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ENJOY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANGRY)] =
    {
        .text = gEasyChatWord_Angry,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ENJOYS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANGER)] =
    {
        .text = gEasyChatWord_Anger,
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCITE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SCARY)] =
    {
        .text = gEasyChatWord_Scary,
        .alphabeticalOrder = EC_INDEX(EC_WORD_FEAR),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LONESOME)] =
    {
        .text = gEasyChatWord_Lonesome,
        .alphabeticalOrder = EC_INDEX(EC_WORD_FUNNY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISAPPOINT)] =
    {
        .text = gEasyChatWord_Disappoint,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GETS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_JOY)] =
    {
        .text = gEasyChatWord_Joy,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIDDY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GETS)] =
    {
        .text = gEasyChatWord_Gets,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GO_HOME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEVER)] =
    {
        .text = gEasyChatWord_Never,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DARN)] =
    {
        .text = gEasyChatWord_Darn,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOWNCAST)] =
    {
        .text = gEasyChatWord_Downcast,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GREAT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INCREDIBLE)] =
    {
        .text = gEasyChatWord_Incredible,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAPPINESS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIKES)] =
    {
        .text = gEasyChatWord_Likes,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAPPY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISLIKES)] =
    {
        .text = gEasyChatWord_Dislikes,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HARD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BORING)] =
    {
        .text = gEasyChatWord_Boring,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEAR),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CARE)] =
    {
        .text = gEasyChatWord_Care,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEARS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CARES)] =
    {
        .text = gEasyChatWord_Cares,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HURRIED),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALL_RIGHT)] =
    {
        .text = gEasyChatWord_AllRight,
        .alphabeticalOrder = EC_INDEX(EC_WORD_IMPORTANT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ADORE)] =
    {
        .text = gEasyChatWord_Adore,
        .alphabeticalOrder = EC_INDEX(EC_WORD_INCREDIBLE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISASTER)] =
    {
        .text = gEasyChatWord_Disaster,
        .alphabeticalOrder = EC_INDEX(EC_WORD_JOY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ENJOY)] =
    {
        .text = gEasyChatWord_Enjoy,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LACKING),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ENJOYS)] =
    {
        .text = gEasyChatWord_Enjoys,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIKES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EAT)] =
    {
        .text = gEasyChatWord_Eat,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LONESOME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LACKING)] =
    {
        .text = gEasyChatWord_Lacking,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MEET),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BAD)] =
    {
        .text = gEasyChatWord_Bad,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MISHEARD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HARD)] =
    {
        .text = gEasyChatWord_Hard,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEGATIVE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TERRIBLE)] =
    {
        .text = gEasyChatWord_Terrible,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEVER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHOULD)] =
    {
        .text = gEasyChatWord_Should,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NICE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NICE)] =
    {
        .text = gEasyChatWord_Nice,
        .alphabeticalOrder = EC_INDEX(EC_WORD_PLAY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DRINK)] =
    {
        .text = gEasyChatWord_Drink,
        .alphabeticalOrder = EC_INDEX(EC_WORD_QUESTION),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SURPRISE)] =
    {
        .text = gEasyChatWord_Surprise,
        .alphabeticalOrder = EC_INDEX(EC_WORD_RARE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FEAR)] =
    {
        .text = gEasyChatWord_Fear,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ROMANTIC),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WANT)] =
    {
        .text = gEasyChatWord_Want,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SAD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAIT)] =
    {
        .text = gEasyChatWord_Wait,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SATISFIED),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SATISFIED)] =
    {
        .text = gEasyChatWord_Satisfied,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SCARY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEE)] =
    {
        .text = gEasyChatWord_See,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SEE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RARE)] =
    {
        .text = gEasyChatWord_Rare,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHOULD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEGATIVE)] =
    {
        .text = gEasyChatWord_Negative,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SURPRISE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DONE)] =
    {
        .text = gEasyChatWord_Done,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TERRIBLE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DANGER)] =
    {
        .text = gEasyChatWord_Danger,
        .alphabeticalOrder = EC_INDEX(EC_WORD_THINK),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DEFEATED)] =
    {
        .text = gEasyChatWord_Defeated,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRIES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEAT)] =
    {
        .text = gEasyChatWord_Beat,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GREAT)] =
    {
        .text = gEasyChatWord_Great,
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNDERSTAND),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ROMANTIC)] =
    {
        .text = gEasyChatWord_Romantic,
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNDERSTANDS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_QUESTION)] =
    {
        .text = gEasyChatWord_Question,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WAIT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNDERSTAND)] =
    {
        .text = gEasyChatWord_Understand,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WANT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNDERSTANDS)] =
    {
        .text = gEasyChatWord_Understands,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WANTS),
        .enabled = TRUE,
    },
};
