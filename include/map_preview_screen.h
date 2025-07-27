#ifndef GUARD_MAP_PREVIEW_SCREEN_H
#define GUARD_MAP_PREVIEW_SCREEN_H

enum MapPreviewScreenId
{
    MPS_VIRIDIAN_FOREST,
    MPS_MT_MOON,
    MPS_DIGLETTS_CAVE,
    MPS_ROCK_TUNNEL,
    MPS_POKEMON_TOWER,
    MPS_SAFARI_ZONE,
    MPS_SEAFOAM_ISLANDS,
    MPS_POKEMON_MANSION,
    MPS_ROCKET_HIDEOUT,
    MPS_SILPH_CO,
    MPS_VICTORY_ROAD,
    MPS_CERULEAN_CAVE,
    MPS_POWER_PLANT,
    MPS_MT_EMBER,
    MPS_ROCKET_WAREHOUSE,
    MPS_MONEAN_CHAMBER,
    MPS_DOTTED_HOLE,
    MPS_BERRY_FOREST,
    MPS_ICEFALL_CAVE,
    MPS_LOST_CAVE,
    MPS_ALTERING_CAVE,
    MPS_PATTERN_BUSH,
    MPS_LIPTOO_CHAMBER,
    MPS_WEEPTH_CHAMBER,
    MPS_TDILFORD_CHAMBER,
    MPS_SCUFIB_CHAMBER,
    MPS_RIXY_CHAMBER,
    MPS_VIAPOIS_CHAMBER,
    MPS_COUNT
};

enum PreviewImageId
{
    IMG_VIRIDIAN_FOREST,
    IMG_MT_MOON,
    IMG_DIGLETTS_CAVE,
    IMG_ROCK_TUNNEL,
    IMG_POKEMON_TOWER,
    IMG_SAFARI_ZONE,
    IMG_SEAFOAM_ISLANDS,
    IMG_POKEMON_MANSION,
    IMG_ROCKET_HIDEOUT,
    IMG_SILPH_CO,
    IMG_VICTORY_ROAD,
    IMG_CERULEAN_CAVE,
    IMG_POWER_PLANT,
    IMG_MT_EMBER,
    IMG_ROCKET_WAREHOUSE,
    IMG_MONEAN_CHAMBER,
    IMG_DOTTED_HOLE,
    IMG_BERRY_FOREST,
    IMG_ICEFALL_CAVE,
    IMG_LOST_CAVE,
    IMG_ALTERING_CAVE,
    IMG_COUNT
};

// These are the number of frames the map preview will be on screen. Increase or decrease them as you like.
#define DURATION_LONG       120 // This is the number of frames the map preview will last when the player enters the map for the first time.

#define DURATION_SHORT      40  // This is the number of frames the map preview will last if the player has visited the map before.

#define DURATION_NO_FLAG    40  // This is the number of frames the map preview will last if the map's flagId is FLAG_NULL.

#define DURATION_ALWAYS     0   // If this number is not 0, DURATION_ALWAYS will override all other duration values.
                                // For example, if you set DURATION_ALWAYS to 100, the map preview will always
                                // have a duration of 100 frames every time, regardless of the flag state.


#define MPS_TYPE_CAVE       0
#define MPS_TYPE_NON_CAVE   1
#define MPS_TYPE_ANY        2

#define FLAG_NULL           0

struct MapPreviewScreen
{
    u8 mapsec;
    u8 type;
    u16 flagId;
    u8 image;
};

struct ImageData
{
    const void *tilesptr;
    const void *tilemapptr;
    const void *palptr;
};

u16 MapPreview_CreateMapNameWindow(u8 id);
u16 MapPreview_GetDuration(u8 id);
bool8 MapHasPreviewScreen(u8 mapsec, u8 type);
bool32 ForestMapPreviewScreenIsRunning(void);
const struct MapPreviewScreen * GetDungeonMapPreviewScreenInfo(u8 mapsec);
bool32 MapHasPreviewScreen_HandleQLState2(u8 mapsec, u8 type);
void MapPreview_InitBgs(void);
void MapPreview_LoadGfx(u8 mapsec);
bool32 MapPreview_IsGfxLoadFinished(void);
void MapPreview_Unload(s32 windowId);
void MapPreview_StartForestTransition(u8 mapsec);

#endif //GUARD_MAP_PREVIEW_SCREEN_H
