#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "entity1.h"
#include "noun1.h"


// LOOK
void executeLook(const char *noun)
{
    if (noun != NULL && *noun != '\0')
    {
        if (noun != NULL && *noun != '\0' && strcmp(noun, "around") == 0)
        {
            printf("You are in %s\n", player->location->desc[1]);                   // look around
            listEntities();
        }
        else if (strcmp(noun, player->location->name) == 0)
        {
            printf("You are in %s\n", player->location->desc[1]);           // look *current location*
            listEntities();                                         
        } 
        else if (noun != NULL && *noun != '\0' && strcmp(noun, "north") == 0)                   
        {
            printNorth(noun);
        }
        else if (noun != NULL && *noun != '\0' && strcmp(noun, "east") == 0)
        {
            printEast(noun);
        }
        else if (noun != NULL && *noun != '\0' && strcmp(noun, "south") == 0)
        {
            printSouth(noun);
        }
        else if (noun != NULL && *noun != '\0' && strcmp(noun, "west") == 0)
        {
            printWest(noun);
        }
        else printf("I don't understand what you want to see.\n");    // if noun != tag
        }
    else printf("Where would you want to look? Try to 'look around' or choose a direction like north or east.\n");        // if noun == NULL

}
// GO
void executeGo(const char *noun)
{
    
    if (noun != NULL && *noun != '\0' && strcmp(noun, "check") == 0)
    {
        printf("location: %s\n", player->location->name);
        if (player->location->hp == 9999) printf("it's dead");
        else printf("this is alive");
    }
    if (noun != NULL && *noun != '\0')
    {
        if (strcmp(noun, player->location->name) == 0) printf("You can't get much closer than this.\n") ; // if trying to go to current location

        else if (getToObject(noun)) printf("");

        else if (getPassage(noun)) moveToLocation(noun);
        
        else printf("I don't see any %s here.\n", noun) ;                                               // if it's != to the tag
    }  
    else printf("Where would you want to go? Try to 'look around' for ideas or choose a direction like north or east.\n") ;     // if it's null
}
 // GET
 void executeGet(const char *noun)
 {
    if (noun != NULL && *noun != '\0')
    {
        if (getEntity(noun)) pickUpObject(noun);
        else printf("\nYou don't see any %s here.", noun);
    }
    else printf("\nWhat would you like to pick up? try using \"look around\" to check what objects you can find in your current location.");
 }
 // DROP
 void executeDrop(const char *noun)
 {
    if (noun != NULL && *noun != '\0')
    {
        if (getEntity(noun)) dropObject(noun);
        else printf("\nYou don't have any %s on you.", noun);
    }
    else printf("\nWhat would you like to drop? try using \"look inventory\" or \"check inventory\" to check what objects you currently have.");
 }
 // CHECK
void executeCheck(const char *noun)
{
    if (noun != NULL && *noun != '\0')
    {
        whatsInside(noun);
    }
    else printf("\nThere is nothing there");
}