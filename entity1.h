#ifndef entity1
#define entity1

//#include "entity1.c"

typedef struct entity {
    const char      *name;
    const char     **tags;
    const char     **dir;
    const char     **desc;
    const char      *visited;
    struct entity   *location;
    struct entity   *destination;
    int              hp;
    int              weight;
    int              capacity;    

} ENTITY;


extern ENTITY ents[];
// ---- Define -----

// Characters
#define player          (ents + 0  )
#define drowner         (ents + 1  )
#define leshy           (ents + 2  )
#define troll           (ents + 3  )
#define wolf            (ents + 4  )
#define witcher         (ents + 5  )
#define griffin         (ents + 6  )
#define cyclops         (ents + 7  )
#define ghoul           (ents + 8  )
// Locations
#define bog             (ents + 9  )
#define river           (ents + 10 )
#define forest          (ents + 11 )
#define totem           (ents + 12 )
#define cave            (ents + 13 )
#define tunnel          (ents + 14 )
#define cavern          (ents + 15 )
#define hill            (ents + 16 )
#define hut             (ents + 17 )
#define bridge          (ents + 18 )
#define tree            (ents + 19 )
#define treetop         (ents + 20 )
#define road            (ents + 21 )
#define castle          (ents + 22 )
// Passages
#define bogCave_N       (ents + 23 )
#define bogForest_E     (ents + 24 )
#define bogHut_S        (ents + 25 )
#define bogRiver_W      (ents + 26 )

#define riverBog_E      (ents + 27 )
#define riverWall_NSW   (ents + 28 )

#define forestCave_N    (ents + 29 )
#define forestTotem_E   (ents + 30 )
#define forestHut_S     (ents + 31 )
#define forestBog_W     (ents + 32 )

#define totemForest_W   (ents + 33 )
#define totemWall_NES   (ents + 34 )

#define caveCavern_N    (ents + 35 )
#define caveForest_E    (ents + 36 )
#define caveBog_S       (ents + 37 )
#define caveTunnel_W    (ents + 38 )

#define tunnelCave_E    (ents + 39 )
#define tunnelWall_NSW  (ents + 40 )

#define cavernHill_N    (ents + 41 )
#define cavern_Cave_S   (ents + 42 )
#define cavernWall_ESW  (ents + 43 )

#define hillRoad_E      (ents + 44 )
#define hillCavern_S    (ents + 45 )
#define hillWall_NW     (ents + 46 )

#define hutForest_N     (ents + 47 )
#define hutTree_E       (ents + 48 )
#define hutBridge_S     (ents + 49 )
#define hutBog_W        (ents + 50 )

#define bridgeHut_N     (ents + 51 )
#define bridgeWall_ESW  (ents + 52 )

#define treeTreetop_N   (ents + 53 )
#define treeHut_W       (ents + 54 )
#define treeWall_ES     (ents + 55 )

#define treetopRoad_N   (ents + 56 )
#define treetopTree_S   (ents + 57 )
#define treetopWall_EW  (ents + 58 )

#define roadCastle_NE   (ents + 59 )
#define roadTree_S      (ents + 60 )
#define roadHill_W      (ents + 61 )

#define castleRoad_SW   (ents + 62 )
#define castleWall_NE   (ents + 63 )


// Items
#define corpse          (ents + 64 )
#define shoes           (ents + 65 )
#define sickle          (ents + 66 )
#define celandine_1     (ents + 67 )
#define deer            (ents + 68 )
#define longsword       (ents + 69 )
#define skull           (ents + 70 )
#define mushroom        (ents + 71 )
#define dagger          (ents + 72 )
#define potion          (ents + 73 )
#define celandine_2     (ents + 74 )
#define carrot          (ents + 75 )
#define spear           (ents + 76 )
#define brain           (ents + 77 )
#define fish_1          (ents + 78 )
#define fish_2          (ents + 79 )
#define club            (ents + 80 )
#define peanuts         (ents + 81 )
#define hammer          (ents + 82 )
#define gloves          (ents + 83 )
#define alcohol         (ents + 84 )
#define steak           (ents + 85 )
#define pot             (ents + 86 )
#define meat            (ents + 87 )
#define mace            (ents + 88 )
#define greatclub       (ents + 89 )
#define chest           (ents + 90 )
#define bones           (ents + 91 )
#define nest            (ents + 92 )
#define chestplate      (ents + 93 )
#define roadsign        (ents + 94 )
#define cart            (ents + 95 )
#define sack            (ents + 96 )
#define pants           (ents + 97 )
#define celandine_3     (ents + 98 )
#define sling           (ents + 99 )
#define branch          (ents + 100)
#define letter          (ents + 101)
#define sack_2          (ents + 102)
#define medallion_1     (ents + 103)
#define medallion_2     (ents + 104)
#define medallion_3     (ents + 105)
#define medallion_4     (ents + 106)
#define medallion_5     (ents + 107)
#define medallion_6     (ents + 108)
#define medallion_7     (ents + 109)
#define dead_drowner    (ents + 110)
#define dead_leshy      (ents + 111)
#define dead_troll      (ents + 112)
#define dead_wolf       (ents + 113)
#define dead_witcher    (ents + 114)
#define dead_griffin    (ents + 115)
#define dead_cyclops    (ents + 116)
#define dead_ghoul      (ents + 117)
#define greatsword      (ents + 118)
#define armor           (ents + 119)
#define swallow         (ents + 120)
#define dummy           (ents + 121)

// end
#define endOfEnts       (ents + 122)





#endif