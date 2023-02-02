#include <stdio.h>

#include "entity1.h"

// -------- TAGS -----------
// Characters
static const char *tags0  []  =  {"yourself", "player", "myself", "me", "inventory", NULL};
static const char *tags1  []  =  {"drowner", "drowned", NULL};
static const char *tags2  []  =  {"leshy", "leshen", "spirit", NULL};
static const char *tags3  []  =  {"troll", "dumbass", "rocky", NULL};
static const char *tags4  []  =  {"wolf", "beast", NULL};
static const char *tags5  []  =  {"witcher", "human", "brother", NULL};
static const char *tags6  []  =  {"griffin", "beast", NULL};
static const char *tags7  []  =  {"cyclops", "giant", NULL};
static const char *tags8  []  =  {"ghoul", "necrophage", NULL};
// Locations
static const char *tags9  []  =  {"bog", "swamp", "marsh", "marshland", "wetland", NULL};
static const char *tags10 []  =  {"river", "stream", "water", NULL};
static const char *tags11 []  =  {"forest", "woods", "trees", NULL};
static const char *tags12 []  =  {"totem", "bones", "statue", "figure", NULL};
static const char *tags13 []  =  {"cave", "opening", NULL};
static const char *tags14 []  =  {"tunnel", "pit", "shaft", NULL};
static const char *tags15 []  =  {"cavern", "room", "pothole", NULL};
static const char *tags16 []  =  {"hill", "hillside", "hilltop", "slope", NULL};
static const char *tags17 []  =  {"hut", "house", "cabin", "shack", NULL};
static const char *tags18 []  =  {"bridge", "crossing", "catwalk", "platform", NULL};
static const char *tags19 []  =  {"tree", "treegrounds", NULL};
static const char *tags20 []  =  {"treetop", "crown", "leaves", NULL};
static const char *tags21 []  =  {"road", "path", "trail", "pathways", NULL};
static const char *tags22 []  =  {"castle", "fortress", "kaer", "morhen", "stronghold", "fort",   NULL};
// Passages
static const char *tags23 [] =   {"cave", "opening", "north", NULL};
static const char *tags24 [] =   {"forest", "woods", "trees", "east", NULL};
static const char *tags25 [] =   {"hut", "house", "cabin", "shack", "south", NULL};
static const char *tags26 []  =  {"river", "stream", "water", "west", NULL};

static const char *tags27 []  =  {"bog", "swamp", "marsh", "marshland", "wetland", "east", NULL};
static const char *tags28 []  =  {"north", "south", "west", "further", "through", NULL};

static const char *tags29 [] =   {"cave", "opening","north", NULL};
static const char *tags30 []  =  {"totem", "bones", "statue", "figure", "east", NULL};
static const char *tags31 [] =   {"hut", "house", "cabin", "shack", "south", NULL};
static const char *tags32 [] =   {"bog", "swamp", "marsh", "marshland", "wetland", "west", NULL};

static const char *tags33 [] =   {"forest", "woods", "trees", "west", NULL};
static const char *tags34 []  =  {"north", "east", "south", "further", NULL};

static const char *tags35 []  =  {"cavern", "room", "pothole", "north", NULL};
static const char *tags36 [] =   {"forest", "woods", "trees", "east", NULL};
static const char *tags37 [] =   {"bog", "swamp", "marsh", "marshland", "wetland", "south", NULL};
static const char *tags38 []  =  {"tunnel", "pit", "shaft", "west", NULL};

static const char *tags39 [] =   {"cave", "opening", "east", NULL};
static const char *tags40 []  =  {"north", "west", "south", "further", NULL};

static const char *tags41 []  =  {"hill", "hillside", "hilltop", "slope", "north", NULL};
static const char *tags42 []  =  {"cave", "south", "back", NULL};
static const char *tags43 []  =  {"wall", "east", "south", "west", NULL};

static const char *tags44 []  =  {"road", "path", "trail", "pathways", "east", NULL};
static const char *tags45 []  =  {"cavern", "room", "pothole", "south", NULL};
static const char *tags46 []  =  {"mountains", "highlands", "north", "west", NULL};

static const char *tags47 [] =   {"forest", "woods", "trees", "north", NULL};
static const char *tags48 [] =   {"tree", "treegrounds", "east", NULL};
static const char *tags49 []  =  {"bridge", "crossing", "catwalk", "platform", "south", NULL};
static const char *tags50 [] =   {"bog", "swamp", "marsh", "marshland", "wetland", "west", NULL};

static const char *tags51 [] =   {"hut", "house", "cabin", "shack", "north", NULL};
static const char *tags52 []  =  {"west", "east", "south", "further", "through", NULL};

static const char *tags53 []  =  {"treetop", "crown", "leaves", "up", NULL};
static const char *tags54 [] =   {"hut", "house", "cabin", "shack", "west", NULL};
static const char *tags55 [] =   {"east", "north", "south", NULL};

static const char *tags56 []  =  {"road", "path", "trail", "pathways", "north", NULL};
static const char *tags57 [] =   {"tree", "treegrounds", "down", NULL};
static const char *tags58 [] =   {"east", "south", "west", NULL};

static const char *tags59 []  =  {"castle", "fortress", "kaer", "morhen", "stronghold", "fort", "north", "east",   NULL};
static const char *tags60 [] =   {"tree", "treegrounds", "south", NULL};
static const char *tags61 []  =  {"hill", "hillside", "hilltop", "slope", "west", NULL};

static const char *tags62 []  =  {"road", "path", "trail", "pathways", "south", "west", NULL};
static const char *tags63 []  =  {"east", "north", NULL};

// Items
static const char *tags64 []  =  {"corpse", "body", "carcass", "remains", "stiff", "bulrush", NULL};
static const char *tags65 [] =   {"shoes", "boots", NULL};
static const char *tags66 [] =   {"sickle", NULL};
static const char *tags67 [] =   {"celandine", "swallowwort", "flower", NULL};
static const char *tags68 [] =   {"deer", "animal", NULL};
static const char *tags69 [] =   {"longsword", "sword", NULL};
static const char *tags70 [] =   {"skull", "head", NULL};
static const char *tags71 [] =   {"mushroom", "shroom", NULL};
static const char *tags72 [] =   {"dagger", "blade", NULL};
static const char *tags73 [] =   {"potion", "elixir", "brew", NULL};
static const char *tags74 [] =   {"celandine", "swallowwort", "flower", NULL};
static const char *tags75 [] =   {"carrot", "vegetable", NULL};
static const char *tags76 [] =   {"spear", NULL};
static const char *tags77 [] =   {"brain", "organ", NULL};
static const char *tags78 [] =   {"fish", "fishes", "fishing", NULL};
static const char *tags79 [] =   {"fish", "fishes", "fishing", NULL};
static const char *tags80 [] =   {"club", "bludgeon", NULL};
static const char *tags81 [] =   {"nuts", "peanuts", NULL};
static const char *tags82 [] =   {"hammer", NULL};
static const char *tags83 [] =   {"gloves", "gauntlets", "glove", "gauntlet", "mitts", "mitt", NULL};
static const char *tags84 [] =   {"alcohol", "dwarven", "spirit", "bottle", NULL};
static const char *tags85 [] =   {"steak", "ribeye", NULL};
static const char *tags86 [] =   {"pot", "soup", NULL};
static const char *tags87 [] =   {"meat", "pleesnow", NULL};
static const char *tags88 [] =   {"mace", NULL};
static const char *tags89 [] =   {"greatclub", NULL};
static const char *tags90 [] =   {"chest", "treasure", NULL};
static const char *tags91 [] =   {"bones", "remains", NULL};
static const char *tags92 [] =   {"nest", "den", NULL};
static const char *tags93 [] =   {"chestplate", NULL};
static const char *tags94 [] =   {"roadsign", NULL};
static const char *tags95 [] =   {"cart", "horsecart", "trailer", NULL};
static const char *tags96 [] =   {"sack", "gold", NULL};
static const char *tags97 [] =   {"pants", "trousers", "slacks", NULL};
static const char *tags98 [] =   {"celandine", "swallowwort", "flower", NULL};
static const char *tags99 [] =   {"sling", NULL};
static const char *tags100[] =   {"branch", "twig", NULL};
static const char *tags101[] =   {"letter", "paper", "note", NULL};
static const char *tags102[] =   {"sack", "gold", NULL};
static const char *tags103[] =   {"medallion", "bogneck", "shiny", NULL};
static const char *tags104[] =   {"medallion", "totemneck", "rusty", NULL};
static const char *tags105[] =   {"medallion", "necklace", NULL};
static const char *tags106[] =   {"medallion", "necklace", NULL};
static const char *tags107[] =   {"medallion", "necklace", NULL};
static const char *tags108[] =   {"medallion", "necklace", NULL};
static const char *tags109[] =   {"medallion", "necklace", NULL};
static const char *tags110[] =   {"drowner", "carcass", "dead", NULL};
static const char *tags111[] =   {"leshy", "twigs", NULL};
static const char *tags112[] =   {"troll", "rocks", NULL};
static const char *tags113[] =   {"wolf", "pup", "dog", NULL};
static const char *tags114[] =   {"witcher", "human", NULL};
static const char *tags115[] =   {"griffin", NULL};
static const char *tags116[] =   {"cyclops", "giant", NULL};
static const char *tags117[] =   {"ghoul", "necrophage", NULL};
static const char *tags118[] =   {"greatsword", "witchersword", NULL};
static const char *tags119[] =   {"armor", "witcherarmor", NULL};
static const char *tags120[] =   {"swallow", "witcherpotion", NULL};
static const char *tags121[] =   {"dummy", "checker", NULL};


// ----------- DIR ----------
// 0 - North
// 1 - East
// 2 - South
// 3 - West
static const char *dirBog[] = {   
"There seems to be a small cave opening on the north.",
"You can see a very dense forest to the east.",
"You can see an outline of a small hut by the bank on the south.",
"The smelly bog stretches until the horizon where it disappears behind the fog, there seems to be some humanoid silhouettes moving around in the distance." };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirRiver[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirForest[] = {
"You notice a faintly dented grass path leading north.",
"Looking deep to the east in the forest you hear distant quawking of many many crows, you have a feeling in your gut telling you to stay away.",
"You spot a bloody handprint on a nearby tree, and another on the tree behind it, further blood marks seem to go to the south.",
"You see some fog in the distance when looking west, a wretched smell appears to be coming from that direction." };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirTotem[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirCave[] = {
"Looking north you see a luminescent glow coming from around the corner of a stone ledge, you should be able to climb it.\nThere is some bones scattered under the rocky ridge.",
"To the east you see one of the cave walls curling around all the way outside, there's a path leading down to the forest from here.\nYou also see a makeshift campfire, it appears to have been lit not too long ago.",
"When you look south, the bright sunlight blinds you as you overlook the entrance to the cave.\nYou can see the fog hovering over the swamp from here.",
"Westward, there is a tunnel curving down deep into the cave, you hear grumbling voices and a flickering source of light.\nThe smell of cooking meat wafts through the air as you get closer." };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirTunnel[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirCavern[] = {
"north.",
"east.",
"south.",
"west." } ;
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirHill[] = {
"Looking north you see a majestic mountain range, some of the peaks covered in snow dissapear in a cold thicket of clouds\nThere is a small rabbit jumping around in the grass.",
"Far in the distance you spot a path leading out of the woods going to Kaer Morhen sitting on a grim hill.\nThe fortress appears to be in a way worse shape than you remembered it.",
"When you look south, the beatiful view of the valley stretches in fron of your eyes.\nYou see the foggy bog in the distance next to the deep forest that appears to be even larger now that you're up here.\nThere's an enormous tree towering over the area in the middle of the forest.",
"Eastward you see highlands and mountains stretching far into the horizon.\nSlightly down the hill there appears to be a huge nest, there is no sign of life anywhere around it, just bones..." };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirHut[] = {
"Looking north, there appears to be a small structure made out of bones sitting on the table under the window overlooking the deep forest.",
"When you look east, you see a mural of a tree painted in such a way that it perfectly blends in with the huge tree you see in the distance through the window.",
"On the south you see a rusty bloody dagger sticking out of the flimsy wooden door leading outside.\n Behind the door you see an eerily quiet river, there's blood stains leading towards it.",
"Westward you find a potion sitting on a small metal stand, it's bright red and smells like very strong alcohol.\nYou're able to see fog somberly hanging over the bog through many cracks in the old wooden wall"} ;
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirBridge[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirTree[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirTreetop[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirRoad[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *dirCastle[] = {
"north.",
"east.",
"south.",
"west" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// --------- DESC -----------
// 0 - First time
// 1 - look around overview
// 2 - distant unknown / wall warning
// 3 - Coming back
// 4 - Basic Name

// ===== Characters
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descPlayer[] = {
"player 1",
"You're wearing dirty leather armor and a silver wolf-head medallion around your neck.",
"player 3",
"player 4",
"yourself" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descDrowner[] = {
"Drowner 1",
"its's a drowner",
"You see a drowner lurking around the bridge.",
"Drowner 4",
"Drowner" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descLeshy[] = {
"Leshy 1",
"Leshy.",
"The vast amount of crows in the area sometimes fly behind a tree and dissapear, there is defineitely a Leshy nearby.",
"Leshy 4",
"Leshy" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTroll[] = {
"Troll 1",
"Troll",
"There is a Rock Troll mixing a huge pot of what appears to be a soup.",
"Troll 4",
"Troll" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descWolf[] = {
"Wolf 1",
"Wolf",
"There is a wolf anxiously walking around and barking up the tree.",
"Wolf 4",
"Wolf" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descWitcher[] = {
"Witcher 1",
"Witcher",
"A man who appears to be stranded and completely out of it, you see a shiny medallion around his neck, he looks familiar.",
"Witcher 4",
"Dead Witcher" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGriffin[] = {
"Griffin 1",
"Griffin",
"You hear loud flaps of wings every now and then but you cannot locate where the sound comes from as it's cloudy, there is a flying creature nearby for sure.",
"Griffin 4",
"Griffin" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCyclops[] = {
"Cyclops 1",
"Cyclops",
"Tucked away in the corner of the cavern you see a gigantic cyclops, he appears to be asleep hugging something close to him.",
"Cyclops 4",
"Cyclops" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGhoul[] = {
"Ghoul 1",
"Ghoul",
"There is a ghoul eating something on the side of the road that, as you judge by the smell, died many days ago.",
"Ghoul 4",
"Ghoul" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ===== Locations and Walls
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descBog[] = {
"You wake up coughing up mud from the back of your throat as you sit in the middle of a huge stinky bog, you're wearing some basic leather armor and a metallic necklace.\nAs you stand up a sharp pain starts pulsating in your leg, You're bleeding heavily from your right thigh.\n\n",
"a huge shallow bog with a few small bits of land covered in sedges and moss.\nIt stinks like a rotting corpse and water feels unpleasantly warm.\nThere is a thick fog hovering over the surface of the dirty water limiting the visibility.",
"BOG_DESC_[2]",
"at the bog, it still stinks as if you never left.",
"Bog" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descRiver[] = {
"welcome river",
"detailed river",
"[2]",
"back at river",
"River" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descForest[] = {
"You arrive in the depths of this mysterious forest, it smells like pinecones and you feel relatively safe in here.",
"The forest seems to be infinite and in some areas the leaves are so dense it feels like evening.\nIt seems very calm and relaxing apart from the constant screaming crows in the distance.",
"[2]",
"at the forest, you feel a nice cold breeze as the wind passes through the trees.",
"Forest" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTotem[] = {
"welcome totem",
"detailed totem",
"[2]",
"back at totem",
"Totem" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCave[] = {
"As you walk in the dimly lit cave you see a tunnel going down and a ledge going up, both of them have a radiating light coming from around the corner.\n",
"You see a bunch of bones scattered all around the floor and what appears to be an old fireplace\nYou hear distant voices emanating from the tunnel going down, they sound deep and menacing. ",
"[2]",
"at the cave, the meat smell coming from the tunnel seems to only get stronger.",
"Cave" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTunnel[] = {
"welcome tunnel",
"detailed tunnel",
"[2]",
"back at",
"Tunnel" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCavern[] = {
"welcome cavern",
"detailed cavern",
"[2]",
"back at cavern",
"Cavern" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descHill[] = {
"As you walk up the hill, it's eerily quiet.\nThe local wildlife seems reluctant to venture anywhere near the hilltop.",
"The view from here is stunning, you can see the entire valley from where you came from, as well as beautiful mountain ranges on the other side and your home, Kaer Morhen far in the distance to the east.\n",
"[2]",
"back at the hilltop, you keep glancing at Kaer Morhen wondering what happened that made it look so weathered down.",
"Hill" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descHut[] = {
"As you arrive at the hut, you notice a blood trail leading southward from the hut door, when you walk inside a nasty stench hits your nose.",
"There is a rusty dagger covered in blood sticking out of the door, a vibrant red potion sitting on a table and a mysterious structure made out of what looks like to be human bones",
"[2]",
"at the hut, you're wondering how the wood used to make it hasn't completely rotted yet just like whoever lives here.",
"Hut" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descBridge[] = {
"welcome bridge",
"detailed bridge",
"[2]",
"back at bridge",
"Bridge" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTree[] = {
"welcome tree",
"detailed tree",
"[2]",
"back at tree",
"Tree" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTreetop[] = {
"welcome treetop",
"detailed treetop",
"[2]",
"back at treeetop",
"Treetop" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descRoad[] = {
"welcome road",
"detailed road",
"[2]",
"back at road",
"Road" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCastle[] = {
"welcome castle",
"detailed castle",
"[2]",
"back at castle",
"Castle" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descRiver_W[] = {
"welcome river wall",
"detailed river wall",
"You cant go there!",
"back at river wall",
"River Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTotem_W[] = {
"welcome totem wall",
"detailed totem wall",
"[2]",
"back at totem wall",
"Totem Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTunnel_W[] = {
"welcome tunnel wall",
"detailed tunnel wall",
"[2]",
"back at tunnel wall",
"Tunnel Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCavern_W[] = {
"welcome cavern wall",
"detailed caver wall",
"[2]",
"back at cavern wall",
"Cavern Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descHill_W[] = {
"welcome hill wall",
"detailed hill wall",
"[2]",
"back at hill wall",
"Hill Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descBridge_W[] = {
"welcome bridge wall",
"detailed bridge wall",
"[2]",
"back at bridge wall",
"Bridge Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTree_W[] = {
"welcome tree wall",
"detailed tree wall",
"[2]",
"back at tree wall",
"Tree Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTreetop_W[] = {
"welcome treetop wall",
"detailed treetop wall",
"[2]",
"back at treetop wall",
"Treetop Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCastle_W[] = {
"welcome castle wall",
"detailed castle wall",
"[2]",
"back at castle wall",
"Castle Wall" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// ===== Objects
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCorpse[] = {
"The closer you come the worse the smell gets, unfortunately your gut feeling was right, It's a human corpse... Or more like what's left of it.",
"Upon closer inspection, the poor guy has been violently decapitated, claw and bite marks all around, whatever got him was vicious and very strong.\nEven though the body is massacred, his pants stayed intact and the material would make for a good bandage.",
"There seems to be something laying in the nearby bulrush.",
"next to the bloody corpse, you're beggining to wonder if it isn't the body making the entire bog reek.",
"Corpse" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descShoes[] = {
"Dirty Shoes",
"shoes2 ",
"shoes3 ",
"shoes4",
"Shoes" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSickle[] = {
"sickle1 ",
"sickle2 ",
"sickle3 ",
"sickle4 ",
"Sickle" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCelandine[] = {
"celandine1",
" celandine2",
" celandine3",
"celandine4 ",
"Celandine" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descDeer[] = {
" deer1",
" deer2",
" deer3",
" deer4",
"Deer" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descLongsword[] = {
" Longsword1",
" Longsword2",
"Longsword3 ",
"Longsword4 ",
"Longsword" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSkull[] = {
"skull1 ",
" skull2",
" skull3",
" skull4",
"Skull" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descMushroom[] = {
" Mushroom1",
" Mushroom2",
" Mushroom3",
" Mushroom4",
"Mushroom" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descDagger[] = {
" Dagger1",
" Dagger2",
" Dagger3",
" Dagger4",
"Dagger" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descPotion[] = {
" potion1",
" potion2",
" potion3",
" potion4",
"Potion" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCarrot[] = {
"carrot1 ",
"carrot2 ",
" carrot3",
" carrot4",
"Carrot" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSpear[] = {
" Spear1",
" Spear2",
" Spear3",
" Spear4",
"Spear" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descBrain[] = {
" brain1",
" brain2",
" brain3",
" brain4",
"Brain" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descFish[] = {
"fish1 ",
" fish2",
" fish3",
" fish4",
"Fish" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descClub[] = {
"club1",
"club2",
"club3",
"club4",
"Club" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descPeanuts[] = {
"peanuts1",
"peanuts2",
"peanuts3",
"peanuts4",
"Peanuts" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descHammer[] = {
"hammer1",
"hammer2",
"hammer3",
"hammer4",
"Hammer" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGloves[] = {
"gloves1",
"gloves2",
"gloves3",
"gloves4",
"Gloves" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descAlcohol[] = {
"alc1",
"alc2",
"alc3",
"alc4",
"Alcohol" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSteak[] = {
"steak1",
"steak2",
"steak3",
"steak4",
"Steak" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descPot[] = {
"pot1",
"pot2",
"pot3",
"pot4",
"Pot" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descMeat[] = {
"meat1",
"meat2",
"meat3",
"meat4",
"Meat" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descMace[] = {
"mace1",
"mace2",
"mace3",
"mace4",
"Mace" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGreatclub[] = {
"greatclub1",
"greatclub2",
"greatclub3",
"greatclub4",
"Greatclub" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descChest[] = {
"chest1",
"chest2",
"chest3",
"chest4",
"Chest" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descBones[] = {
"bones1",
"bones2",
"bones3",
"bones4",
"Bones" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descNest[] = {
"nest1",
"nest2",
"nest3",
"nest4",
"Nest" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descChestplate[] = {
"chestplate1",
"chestplate2",
"chjestplate3",
"chestplate4",
"Chestplate" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descRoadsign[] = {
"Roadsign1",
"Roadsign2",
"Roadsign3",
"Roadsign4",
"Roadsign" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCart[] = {
"cart1",
"cart2",
"cart3",
"cart4",
"Cart" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSack[] = {
"sack1",
"sack2",
"sack3",
"sack4",
"Sack" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descPants[] = {
"pants1",
"pants2",
"pants3",
"pants4",
"Pants" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSling[] = {
"sling1",
"sling2",
"sling3",
"sling4",
"Sling" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descBranch[] = {
"branch1",
"branch2",
"branch3",
"branch4",
"Branch" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descLetter[] = {
"letter1",
"letter2",
"letter3",
"letter4",
"Letter" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descMedallion_1[] = {
"Shiny Medallion",
"MEdallion2",
"MEdallion3",
"Medallion4",
"Shiny Medallion" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descMedallion_2[] = {
"Rusty Medallion",
"MEdallion2",
"MEdallion3",
"Medallion4",
"Rusty Medallion" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descDrowner_D[] = {
"dead drowner1",
"dead drowner2",
"dead drowner3",
"dead drowner4",
"Dead Drowner" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descLeshy_D[] = {
"dead Leshy 1",
"dead Leshy 2",
"dead Leshy 3",
"dead Leshy 4",
"Dead Leshy" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descTroll_D[] = {
"dead Troll 1",
"dead Troll 2",
"dead Troll 3",
"dead Troll 4",
"Dead Troll" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descWolf_D[] = {
"dead wolf 1",
"dead wolf 2",
"dead wolf 3",
"dead wolf 4",
"Dead  Wolf" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descWitcher_D[] = {
"dead witcher 1",
"dead witcher 2",
"dead witcher 3",
"dead witcher 4",
"Dead Witcher" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGriffin_D[] = {
"dead griffin 1",
"dead griffin 2",
"dead griffin 3",
"dead griffin 4",
"Dead Griffin" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descCyclops_D[] = {
"dead cyclops 1",
"dead cyclops 2",
"dead cyclops 3",
"dead cyclops 4",
"Dead Cyclops" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGhoul_D[] = {
"dead ghoul 1",
"dead ghoul 2",
"dead ghoul 3",
"dead ghoul 4",
"Dead Ghoul" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descGreatsword[] = {
"greatsword 1",
"greatsword 2",
"greatsword 3",
"greatsword 4",
"Greatsword" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descArmor[] = {
"armor 1",
"armor 2",
"armor 3",
"armor 4",
"Armor" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descSwallow[] = {
"swallow 1 ",
"swallow 2",
"swallow 3",
"swallow 4",
"Swallow" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static const char *descDummy[] = {
"Dummy 1 ",
"Dummy 2",
"Dummy 3",
"Dummy 4",
"Dummy" };
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ENTITY ents[] = {

// ---------- ENTITY ---------
/*  typedef struct entity {
    const char      *name;
    const char     **tags;
    const char     **dir;
    const char     **desc;
    const char      *visited;
    struct entity   *location;
    struct entity   *destination;
    int              hp;
    int              weight;
    int              capacity;   */                                                                         
                                                                                                    //weight = AC for characters
    // Characters -------tags----------dir-----------desc--------visited---location---destination-----hp------weight-----capacity---
    {  "player",          tags0,      NULL      ,  descPlayer ,     "player",  bog,       NULL,      50  ,    15  ,       100, },
    {  "drowner",         tags1,      NULL      ,  descDrowner ,    "no",      bridge,    NULL,      25  ,    11  ,       111, },
    {  "leshy",           tags2,      NULL      ,  descLeshy ,      "no",      totem,     NULL,      40  ,    12  ,       111, },
    {  "troll",           tags3,      NULL      ,  descTroll ,      "no",      tunnel,    NULL,      50  ,    16  ,       111, },
    {  "wolf",            tags4,      NULL      ,  descWolf ,       "no",      tree,      NULL,      20  ,    8   ,       111, },
    {  "witcher",         tags5,      NULL      ,  descWitcher ,    "no",      treetop,   NULL,      50  ,    15  ,       111, },
    {  "griffin",         tags6,      NULL      ,  descGriffin ,    "no",      hill,      NULL,      50  ,    12  ,       111, },
    {  "cyclops",         tags7,      NULL      ,  descCyclops ,    "no",      cavern,    NULL,      80  ,    10  ,       111, },
    {  "ghoul",           tags8,      NULL      ,  descGhoul ,      "no",      road,      NULL,      25  ,    11  ,       111, },
    // Locations --------tags----------dir-----------desc--------visited---location---destination------hp------weight-----capacity---
    {  "bog",             tags9 ,     dirBog    ,  descBog    ,     "yes",      NULL,      NULL,      9999,    99990,     9999,},
    {  "river",           tags10,     dirRiver  ,  descRiver  ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "forest",          tags11,     dirForest ,  descForest ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "totem",           tags12,     dirTotem  ,  descTotem  ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "cave",            tags13,     dirCave   ,  descCave   ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "tunnel",          tags14,     dirTunnel ,  descTunnel ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "cavern",          tags15,     dirCavern ,  descCavern ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "hill",            tags16,     dirHill   ,  descHill   ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "hut",             tags17,     dirHut    ,  descHut    ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "bridge",          tags18,     dirBridge ,  descBridge ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "tree",            tags19,     dirTree   ,  descTree   ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "treetop",         tags20,     dirTreetop,  descTreetop,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "road",            tags21,     dirRoad   ,  descRoad   ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    {  "castle",          tags22,     dirCastle ,  descCastle ,     "no",       NULL,      NULL,      9999,    99990,     9999,},
    // Passages ----------tags----------dir-----------desc--------visited---location---destination-----hp-----weight-----capacity---
    {  "bogCave_N",       tags23,     NULL,        NULL,            "no",       bog,       cave,      9999,    9999,      9999,},
    {  "bogForest_E",     tags24,     NULL,        NULL,            "no",       bog,       forest,    9999,    9999,      9999,},
    {  "bogHut_S",        tags25,     NULL,        NULL,            "no",       bog,       hut,       9999,    9999,      9999,},
    {  "bogRiver_W",      tags26,     NULL,        NULL,            "no",       bog,       river,     9999,    9999,      9999,},

    {  "riverBog_E",      tags27,     NULL,        NULL,            "no",       river,     bog,       9999,    9999,      9999,},
    {  "riverWall_NSW",   tags28,     NULL,        descRiver_W,     "wall",     river,     NULL,      9999,    9999,      9999,},

    {  "forestCave_N",    tags29,     NULL,        NULL,            "no",       forest,    cave,      9999,    9999,      9999,},
    {  "forestTotem_E",   tags30,     NULL,        NULL,            "no",       forest,    totem,     9999,    9999,      9999,},
    {  "forestHut_S",     tags31,     NULL,        NULL,            "no",       forest,    hut,       9999,    9999,      9999,},
    {  "forestBog_W",     tags32,     NULL,        NULL,            "no",       forest,    bog,       9999,    9999,      9999,},

    {  "totemForest_W",   tags33,     NULL,        NULL,            "no",       totem,     forest,    9999,    9999,      9999,},
    {  "totemWall_NES",   tags34,     NULL,        descTotem_W,     "wall",     totem,     NULL,      9999,    9999,      9999,},
    
    {  "caveCavern_N",    tags35,     NULL,        NULL,            "no",       cave,      cavern,    9999,    9999,      9999,},
    {  "caveForest_E",    tags36,     NULL,        NULL,            "no",       cave,      forest,    9999,    9999,      9999,},
    {  "caveBog_S",       tags37,     NULL,        NULL,            "no",       cave,      bog,       9999,    9999,      9999,},
    {  "caveTunnel_W",    tags38,     NULL,        NULL,            "no",       cave,      tunnel,    9999,    9999,      9999,},

    {  "tunnelCave_E",    tags39,     NULL,        NULL,            "no",       tunnel,    cave,      9999,    9999,      9999,},
    {  "tunnelWall_NSW",  tags40,     NULL,        descTunnel_W,    "wall",     tunnel,    NULL,      9999,    9999,      9999,},

    {  "cavernHill_N",    tags41,     NULL,        NULL,            "no",       cavern,    hill,      9999,    9999,      9999,},
    {  "cavernCave_S",    tags42,     NULL,        NULL,            "no",       cavern,    hill,      9999,    9999,      9999,},
    {  "cavernWall_EW",   tags43,     NULL,        descCavern_W,    "wall",     cavern,    NULL,      9999,    9999,      9999,},

    {  "hillRoad_E",      tags44,     NULL,        NULL,            "no",       hill,      road,      9999,    9999,      9999,},
    {  "hillCavern_S",    tags45,     NULL,        NULL,            "no",       hill,      cavern,    9999,    9999,      9999,},
    {  "hillWall_NW",     tags46,     NULL,        descHill_W,      "wall",     hill,      NULL,      9999,    9999,      9999,},

    {  "hutForest_N",     tags47,     NULL,        NULL,            "no",       hut,       forest,    9999,    9999,      9999,},
    {  "hutTree_E",       tags48,     NULL,        NULL,            "no",       hut,       tree,      9999,    9999,      9999,},
    {  "hutBridge_S",     tags49,     NULL,        NULL,            "no",       hut,       bridge,    9999,    9999,      9999,},
    {  "hutBog_W",        tags50,     NULL,        NULL,            "no",       hut,       bog,       9999,    9999,      9999,},

    {  "bridgeHut_N",     tags51,     NULL,        NULL,            "no",       bridge,    hut,       9999,    9999,      9999,},
    {  "bridgeWall_ESW",  tags52,     NULL,        descBridge_W,    "wall",     bridge,    NULL,      9999,    9999,      9999,},

    {  "treeTreetop_N",   tags53,     NULL,        NULL,            "no",       tree,      treetop,   9999,    9999,      9999,},
    {  "treeHut_W",       tags54,     NULL,        NULL,            "no",       tree,      hut,       9999,    9999,      9999,},
    {  "treeWall_ES",     tags55,     NULL,        descTree_W,      "wall",     tree,      NULL,      9999,    9999,      9999,},
 
    {  "treetopRoad_N",   tags56,     NULL,        NULL,            "no",       treetop,   road,      9999,    9999,      9999,},
    {  "treetopTree_S",   tags57,     NULL,        NULL,            "no",       treetop,   tree,      9999,    9999,      9999,},
    {  "treetopWall_EW",  tags58,     NULL,        descTreetop_W,   "wall",     treetop,   NULL,      9999,    9999,      9999,},

    {  "roadCastle_NE",   tags59,     NULL,        NULL,            "no",       road,      castle,    9999,    9999,      9999,},
    {  "roadTree_S",      tags69,     NULL,        NULL,            "no",       road,      tree,      9999,    9999,      9999,},
    {  "roadHill_W",      tags61,     NULL,        NULL,            "no",       road,      hill,      9999,    9999,      9999,},

    {  "castleRoad_SW",   tags62,     NULL,        NULL,            "no",       castle,    road,      9999,    9999,      9999,},
    {  "castleWall_NE",   tags63,     NULL,        descCastle_W,    "wall",     castle,    NULL,      9999,    9999,      9999,}, 

    // Items  -----------tags----------dir-----------desc--------visited----location----destination----hp-----weight-----capacity---
    {  "corpse",          tags64,     NULL,        descCorpse,      "no",       bog,       NULL,       0   ,   60 ,        60 , },
    {  "shoes",           tags65,     NULL,        descShoes,       "no",       corpse,    NULL,       0   ,   2  ,        2  , },
    {  "sickle",          tags66,     NULL,        descSickle,      "no",       forest,    NULL,       4   ,   2  ,        2  , },
    {  "celandine_1",     tags67,     NULL,        descCelandine,   "no",       forest,    NULL,       5   ,   1  ,        1  , },
    {  "deer",            tags68,     NULL,        descDeer,        "no",       forest,    NULL,       3   ,   25 ,        25 , },
    {  "longsword",       tags69,     NULL,        descLongsword,   "no",       leshy,     NULL,       8   ,   2  ,        2  , },
    {  "skull",           tags70,     NULL,        descSkull,       "no",       totem,     NULL,       0   ,   1  ,        1  , },
    {  "mushroom",        tags71,     NULL,        descMushroom,    "no",       totem,     NULL,       0   ,   1  ,        1  , },
    {  "dagger",          tags72,     NULL,        descDagger,      "no",       hut,       NULL,       4   ,   1  ,        1  , },
    {  "potion",          tags73,     NULL,        descPotion,      "no",       hut,       NULL,       30  ,   1  ,        1  , },
    {  "celandine_2",     tags74,     NULL,        descCelandine,   "no",       hut,       NULL,       5   ,   1  ,        1  , },
    {  "carrot",          tags75,     NULL,        descCarrot,      "no",       hut,       NULL,       5   ,   1  ,        1  , },
    {  "spear",           tags76,     NULL,        descSpear,       "no",       bridge,    NULL,       6   ,   2  ,        2  , },
    {  "brain",           tags77,     NULL,        descBrain,       "no",       drowner,   NULL,       10  ,   1  ,        1  , },
    {  "fish_1",          tags78,     NULL,        descFish,        "no",       bridge,    NULL,       3   ,   1  ,        1  , },
    {  "fish_2",          tags79,     NULL,        descFish,        "no",       river,     NULL,       3   ,   1  ,        1  , },
    {  "club",            tags80,     NULL,        descClub,        "no",       river,     NULL,       4   ,   2  ,        2  , },
    {  "peanuts",         tags81,     NULL,        descPeanuts,     "no",       river,     NULL,       5   ,   1  ,        1  , },
    {  "hammer",          tags82,     NULL,        descHammer,      "no",       cave,      NULL,       4   ,   2  ,        2  , },
    {  "gloves",          tags83,     NULL,        descGloves,      "no",       cave,      NULL,       1   ,   1  ,        1  , },
    {  "alcohol",         tags84,     NULL,        descAlcohol,     "no",       cave,      NULL,       5   ,   1  ,        1  , },
    {  "steak",           tags85,     NULL,        descSteak,       "no",       cave,      NULL,       5   ,   1  ,        1  , },
    {  "pot",             tags86,     NULL,        descPot,         "no",       tunnel,    NULL,       10  ,   400,        400, },
    {  "meat",            tags87,     NULL,        descMeat,        "no",       tunnel,    NULL,       10  ,   1  ,        1  , },
    {  "mace",            tags88,     NULL,        descMace,        "no",       troll,     NULL,       6   ,   3  ,        3  , },
    {  "greatclub",       tags89,     NULL,        descGreatclub,   "no",       cyclops,   NULL,       8   ,   5  ,        5  , },
    {  "chest",           tags90,     NULL,        descChest,       "no",       cavern,    NULL,       250 ,   10 ,        100, },
    {  "bones",           tags91,     NULL,        descBones,       "no",       cavern,    NULL,       0   ,   2  ,        2  , },
    {  "nest",            tags92,     NULL,        descNest,        "no",       hill,      NULL,       0   ,   200,        200, },
    {  "chestplate",      tags93,     NULL,        descChestplate,  "no",       hill,      NULL,       2   ,   8  ,        8  , },
    {  "roadsign",        tags94,     NULL,        descRoadsign,    "no",       road,      NULL,       0   ,   5  ,        5  , },
    {  "cart",            tags95,     NULL,        descCart,        "no",       road,      NULL,       0   ,   120,        120, },
    {  "sack_1",          tags96,     NULL,        descSack,        "no",       cart,      NULL,       50  ,   1  ,        5  , },
    {  "pants",           tags97,     NULL,        descPants,       "no",       tree,      NULL,       1   ,   2  ,        2  , },
    {  "celandine_3",     tags98,     NULL,        descCelandine,   "no",       tree,      NULL,       5   ,   1  ,        1  , },
    {  "sling",           tags99,     NULL,        descSling,       "no",       treetop,   NULL,       4   ,   1  ,        10 , },
    {  "branch",          tags100,    NULL,        descBranch,      "no",       treetop,   NULL,       0   ,   4  ,        4  , },
    {  "letter",          tags101,    NULL,        descLetter,      "no",       treetop,   NULL,       0   ,   1  ,        1  , },
    {  "sack_2",          tags102,    NULL,        descSack,        "no",       treetop,   NULL,       50  ,   1  ,        5  , },
    {  "medallion_1",     tags103,    NULL,        descMedallion_1, "no",       corpse,    NULL,       0   ,   1  ,        1  , },
    {  "medallion_2",     tags104,    NULL,        descMedallion_2, "no",       bog,     NULL,       0   ,   1  ,        1  , },
    {  "medallion_3",     tags105,    NULL,        descMedallion_1, "no",       pot,       NULL,       0   ,   1  ,        1  , },
    {  "medallion_4",     tags106,    NULL,        descMedallion_1, "no",       drowner,   NULL,       0   ,   1  ,        1  , },
    {  "medallion_5",     tags107,    NULL,        descMedallion_1, "no",       cave,      NULL,       0   ,   1  ,        1  , },
    {  "medallion_6",     tags108,    NULL,        descMedallion_1, "no",       nest,      NULL,       0   ,   1  ,        1  , },
    {  "medallion_7",     tags109,    NULL,        descMedallion_1, "no",       branch,    NULL,       0   ,   1  ,        1  , },
    {  "dead drowner",    tags110,    NULL,        descDrowner_D ,  "no",       bridge,    NULL,       10  ,   70 ,        70 , },
    {  "dead leshy",      tags111,    NULL,        descLeshy_D ,    "no",       leshy,     NULL,       5   ,   100,        100, },
    {  "dead troll",      tags112,    NULL,        descTroll_D ,    "no",       troll,     NULL,       5   ,   600,        600, },
    {  "dead wolf",       tags113,    NULL,        descWolf_D ,     "no",       wolf,      NULL,       10  ,   30 ,        30 , },
    {  "dead witcher",    tags114,    NULL,        descWitcher_D ,  "no",       witcher,   NULL,       2   ,   70 ,        70 , },
    {  "dead griffin",    tags115,    NULL,        descGriffin_D ,  "no",       griffin,   NULL,       15  ,   900,        900, },
    {  "dead cyclops",    tags116,    NULL,        descCyclops_D ,  "no",       cyclops,   NULL,       3   ,   999,        999, },
    {  "dead ghoul",      tags117,    NULL,        descGhoul_D ,    "no",       ghoul,     NULL,       15  ,   60 ,        60 , },
    {  "greatsword",      tags118,    NULL,        descGreatsword,  "no",       NULL,      NULL,       12  ,   2  ,        2  , },
    {  "armor",           tags119,    NULL,        descArmor,       "no",       NULL,      NULL,       3   ,   10 ,        10 , },
    {  "swallow",         tags120,    NULL,        descSwallow,     "no",       NULL,      NULL,       50  ,   1  ,        1  , },
    {  "dummy",           tags121,    NULL,        descDummy,       "no",       NULL,      NULL,       0   ,   0  ,        0  , },
    
    

};
