#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "entity1.h"

// ------------------ CLEARS ALL 'NOW' VISITED VALUES TO YES ----------------------

static ENTITY *clearVisitedNow()
{
    ENTITY *ent = NULL;
    for(ent = ents ; ent < endOfEnts ; ent++)
    {
        if (ent->location == player->location && ent->visited == "now")
        {
            //printf("%s is now clear", ent->name);
            ent->visited = "yes" ;
        }
    }
    
}
 
// ------------  CHECK ALL TAGS OF SPECIFIC ENT FOR MATCHES WITH NOUN --------------

static bool entHasTag(ENTITY *ent, const char *noun)
{
    if (noun != NULL && *noun != '\0')
    {
        const char **tag;
        for (tag = ent->tags; *tag != NULL; tag++)
        {
            if (strcmp(*tag, noun) == 0) return true;
        } 
    }
    return false;
}

// --------------- CHECK ALL ENTS FOR MATCHING TAGS AND RETURN MATCH ---------- 

static ENTITY *getEntity(const char *noun)
{
    ENTITY *ent = NULL;
    for (ent = ents; ent < endOfEnts ; ent++)
    {
        if (entHasTag(ent, noun) )
        {
            return ent;
        } 
    }
    return false;
}

// ---------------- CHECK IF ENT IS A VALID PASSAGE AND RETURN IT ----------------

static ENTITY *getPassage(const char *noun)
{
    ENTITY *ent, *res = NULL;
    for (ent = ents; ent < endOfEnts ; ent++)
    {
        if (entHasTag(ent, noun) && ent->location == player->location && ent->destination != NULL)
        {
            return res = ent->destination;
        }
    }
    return false;
}

// --------------- CHECK IF ENT IS A VALID OBJECT INSIDE A LOCATION AND CHANGE PLAYER->LOCATION TO ENT->LOCATION -----------------------

static ENTITY *moveToLocation(const char *noun)
{
            ENTITY *ent = NULL;
            clearVisitedNow();
            printf("You're walking to the %s.\n", noun);    
            player->location = getPassage(noun);
            //printf("location: %s\n", player->location->name);
            if (strcmp(player->location->visited, "no") == 0 )  printf("%s\n", player->location->desc[0]);
            else printf("You're back %s\n", player->location->desc[3]);
            player->location->visited = "yes"; 
            return ent;
}

// ----------------- CHECK IF ENT IS A VALID OBJECT INSIDE A LOCATION AND MARK VISITED NOW ----------------

static ENTITY *getToObject(const char *noun)
{
    ENTITY *ent = NULL;
    for (ent = ents; ent < endOfEnts ; ent++)
    {
        //if (ent->location == NULL || ent->destination != NULL) return false;
        if (entHasTag(ent, noun) && ent->location == player->location && ent->destination == NULL)
        {
            if (strcmp(ent->visited, "now" ) == 0)
            {
                printf("You can't get much closer than this.\n");
                return ent;
            }
            else 
            {
                printf("You're walking to the %s.\n", noun);
                if (strcmp(ent->visited, "no") == 0 || strcmp(ent->visited, "wall") == 0 )  printf("%s\n", ent->desc[0]);
                else if (strcmp(ent->visited, "wall_w") == 0) printf("%s\n", ent->desc[2]);
                else printf("You're back %s\n", ent->desc[3]);
                if (strcmp(ent->visited, "wall") == 0 ) ent->visited = "wall_w";
                clearVisitedNow();
                if (strcmp(ent->visited, "wall") != 0 && strcmp(ent->visited, "wall_w") != 0)
                {
                    ent->visited = "now";
                } 
                return ent;
            }
            
        } 
    }
    return false;
}

// -------------- PRINTING WHAT YOU SEE WHEN LOOKING N E S W ----------------

void *printNorth(const char *noun)                       
{
    if (player->location->dir[0] != NULL) printf("%s\n", player->location->dir[0]);
}

void *printEast(const char *noun)
{
    if (player->location->dir[1] != NULL) printf("%s\n", player->location->dir[1]);
}

void *printSouth(const char *noun)
{
    if (player->location->dir[2] != NULL) printf("%s\n", player->location->dir[2]);
}

void *printWest(const char *noun)
{
    if (player->location->dir[3] != NULL) printf("%s\n", player->location->dir[3]);
}

// -------------- CHECKING OBJECTS PRESENT IN PLAYERS LOCATION OFR DUPLICATE NAMES --------------------

static ENTITY *checkDuplicates()
{
    ENTITY *ent =  NULL;
    ENTITY *ent2 = NULL;
    int counter = 0;
    int choice = 0;

    for(ent = ents ; ent < endOfEnts ; ent++)
    {
        for (ent2 = ents; ent2 < endOfEnts ; ent2++)
        
        if (ent->location == ent2->location && ent->destination == NULL && ent2->destination == NULL && ent->desc[4] != ent2->desc[4])
        {   
            if (strcmp(ent->tags[0], ent2->tags[0]) == 0 && ent->location == player->location)
            {
                ent->capacity  = 666;
                ent2->capacity = 666;
                printf("\n\nDuplicate found <<<%s>>>", ent->tags[0]);
                printf("\n\nDupe assigned");
                //return ent;
            }
        }
    }
}

// ------------- ADDS ITEM TO PLAYER'S INVENTORY -------------

static ENTITY *pickUpObject(const char *noun)
{                                                                       
    ENTITY *ent = NULL;
    ENTITY *ent2 = NULL;
    ENTITY *host = NULL;
    ENTITY *chosen = NULL;
    int counter, choice, dupe_counter = 0;

    checkDuplicates();
    
    
    for(ent = ents ; ent < endOfEnts ; ent++)
        {
            if (ent->capacity == 666) 
            {
                if (dupe_counter == 0) printf("\nWhich %s did you have in mind?\n\n--> ", noun);
                printf("\n%d) %s\n", dupe_counter+1, ent->desc[4]);
                dupe_counter++;
                   
            }
        }
    if (dupe_counter > 0 ) scanf("%d", &choice);
    
    dupe_counter = 0;        
    counter = 0;
    for (ent = ents; ent < endOfEnts ; ent++)
    {
        if (entHasTag(ent, noun) )                                                                        // if chosen object matches tags of some entity 
        {
            if (ent->capacity == 111)                                                                      // if player tries to pick up a character
            {
                printf("You attempt to pick up a %s, you struggle for a bit but when you look up and see the %s's disgruntled face, you stop and step back", noun, noun);
                break;
            }
            else if (ent->visited == "now")                                                                // if standing next to object to pick up, *OBJECT GETS PICKED UP*
            {
                if (ent->weight > player->capacity )                                                    // if chosen object weighs more than player's available capacity
                {
                    printf("\nThis is too heavy for you to pick up!\n");                                
                    break;
                }

                host = ent;
                for (ent2 = ents; ent2 < endOfEnts ; ent2++)
                {
                    if (ent2->location == host)
                    {
                        ent2->location = player;
                        //printf("\n%s's current location is: %s\n", ent2->name, ent2->location->name);     // checking if object was succesfuly moved to inventory
                        player->capacity = player->capacity - ent2->weight;
                        if (counter == 0)
                        {
                            printf("\nYou search %s thoroughly before picking it up, you find %s", host->desc[4], ent2->desc[4]);
                            counter++;
                        }
                        else if (counter > 0)
                        {
                            printf(", %s", ent2->desc[4]);
                            counter++;
                        }
                    }
                }
                if (counter > 0)
                {
                    printf(".");
                    counter = 0;
                }

                ent->location = player;
                printf("\nYou pick up %s.", noun);
                //printf("\n%s's current location is: %s\n", noun, ent->location->name);  // checking if object was succesfuly moved to inventory
                player->capacity = player->capacity - ent->weight;
                printf("\nYou can carry: %d more kilograms.", player->capacity ); 
                break;  
            }
            else if (ent->weight == 99990)                                                                // if player tries to pick up a location
            {    
                printf("\nHow are you gonna pick up a %s dumbass?\n", noun);                               
                break;
            }
            else if (ent->visited == "no")                                                                // if player hasn't found a chosen object yet
            {
                printf("\nYou dont'see any %s here.ENT VISITED NO", noun);
            }
            else if (ent->visited == "yes" && ent->location == player->location)                          // if player has previously found the chosen object but is not standing next to it
            {
                printf("\nYou need to stand next to the %s in order to pick it up.", noun);     
            }
            else printf("\nYou cannot pick this up.ERROR");                                               // this code should not be reached
        }
    }
}

// ------------- REMOVES AN ITEM FROM PLAYER'S INVENTORY AND DROPS IN CURRENT LOCATION -------------

static ENTITY *dropObject(const char *noun)
{
    ENTITY *ent = NULL;

    if (checkDuplicates() )
    {
        printf("yes");
    }
    else printf("no");

    for (ent = ents; ent < endOfEnts ; ent++)
    {
        if (entHasTag(ent, noun) )                                                                         
        {
            if (ent->location == player)
            {
                ent->location = player->location;
                player->capacity = player->capacity + ent->weight;
                printf("\nYou drop %s, now you can carry %d kilograms.", noun, player->capacity);
                ent->visited = "now";
            } 
            else printf("\nYou do not have any %s", noun);
            break;
        }
    }
}


// ------------ CHECKS ITEMS LOCATED INSIDE GIVEN ENTITY ----------------
static ENTITY *whatsInside(const char *noun)
{
    ENTITY *ent = NULL;
    ENTITY *ent2 = NULL;
    int counter = 0;
    for (ent = ents; ent < endOfEnts ; ent++)
    {   
        if (entHasTag(ent, noun))
        {
            if (ent->location == player -> location && strcmp(ent->visited, "now") == 0) printf("\n%s\n", ent->desc[1]);
            else if (strcmp(ent->visited, "yes") == 0)  printf("\nYou cannot inspect the %s from here, get closer.", noun);
            else if (strcmp(ent->visited, "no") == 0)   printf("\nYou do not see any %s here.", noun); 

            for (ent2 = ents; ent2 < endOfEnts; ent2++)
            {
               /* if (ent->name == player->name && ent2->location == player )
                    printf("%s", ent2->desc[4]);    */

                if (ent->name == player->name && ent2->location == player && counter > 0)                  // I swapped the order of the if and else if statements so that the counter variable is checked first -Anthony
                   {                                                               
                        printf(", %s", ent2->desc[4]);
                        counter++;

                   }
                   else if (ent->name == player->name && ent2->location == player) // There was no logical way for the program to ever skip this statement, so I made it the else if statement -Anthony
                   { 
                        printf("\nUpon checking your inventory you see:\n\n%s", ent2->desc[4]); 
                        counter++;
                   }


                if (ent2->location != NULL && ent->location == player->location && strcmp(ent->visited, "now") == 0 /*|| ent == player*/)           // If standing next to entity to check *Checks entity*
                {
                   if(strcmp(ent2->location->name, ent->name) == 0 && counter > 0)                  // I swapped the order of the if and else if statements so that the counter variable is checked first -Anthony
                   {                                                               
                        printf(", %s", ent2->desc[0]);
                        counter++;

                   }
                   else if (strcmp(ent2->location->name, ent->name) == 0) // There was no logical way for the program to ever skip this statement, so I made it the else if statement -Anthony
                   { 
                        printf("\nUpon checking %s you see:\n\n%s", noun, ent2->desc[0]); 
                        counter++;
                   }

                }
                    

                else if (ent2->location != NULL && ent->location == player->location && strcmp(ent->visited, "yes") == 0 )      // If standing in the same location as the entity to check, but not close to it
                {
                    printf("\nYou need to get closer to %s if you want to check it out!", noun);
                    break;
                }
                else if (ent2->location != NULL && ent->location != player->location && strcmp(ent->visited, "yes") == 0 )      // if trying to check an entity previously visited but not present at current player's location
                {
                    printf("\n%s is not here! If you remember right %s is in the %s", noun, noun, ent->location->name);
                    break;
                }                              
            }
        }
    }  
                if (counter > 0) //puts a peroid at the end of item list -Anthony
                {
                    printf(".");
                    counter = 0;
                }
    //printf("\nYou don't see any %s around here.", noun);       
}



// -------------- LISTING OBJECTS PRESENT AT LOCATION --------------------

static ENTITY *listEntities()
{
    ENTITY *ent =  NULL;
    ENTITY *ent2 = NULL;
    int counter = 0;

    checkDuplicates();

    for(ent = ents ; ent < endOfEnts ; ent++)
    {
        if (ent->name != "player" && ent->hp != 9999 && ent->location == player->location && ent->visited != "no")
        {   
            if (counter == 0) printf("\n\nYou see: %s", ent->desc[4]);
            else printf(", %s", ent->desc[4]);
            counter++ ;
        }
    }
    if (counter > 0) printf(".");
    counter = 0;


    for(ent = ents ; ent < endOfEnts ; ent++)
    {
        if (ent->name != "player" && ent->hp != 9999 && ent->location == player->location && ent->visited == "no")
        {   
            if (counter == 0) printf("\n\n%s", ent->desc[4]);
            else printf("\n%s", ent->desc[4]);
            counter++ ;
        }
    }
    if (counter == 0) printf("\nYou thoroughly inspected this area, there is nothing else new you can find here."); 
    counter = 0;
}    

/*
printf("\nWhich %s do you have in mind?\n\n--> ", ent->tags[0]);

                for(ent = ents ; ent < endOfEnts ; ent++)
                {
                    if 
                }    

                scanf("%d", &choice);
                printf("\n%d\n", choice);
                
                */