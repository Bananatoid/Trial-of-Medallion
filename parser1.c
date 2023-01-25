#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "entity1.c"

bool parser(char *input)
{
    char d[] = " \n";    // DELIMETER

    char *verb = strtok(input, d);      // first word
    char *noun = strtok(NULL, d);       // second word

    if (verb != NULL)
    {
        if      (strcmp(verb, "quit") == 0 || strcmp(verb, "q") == 0)        { return false; }

        else if (strcmp(verb, "help") == 0)        {printf("\n-------------------------\nThe main commands are:\nquit - to leave the game.\nlook - to inspect objects or characters visually.\nlook around - to get a brief overview of your current location and list all the items you found already and description of items still to be found.\ngo - to travel to a new location or to walk closer to objects found in the current location.\nget - to pick up objects you found.\ndrop - to drop objects in your inventory.\n-check - to check if there is any items hidden inside an object\ncheck player OR check inventory - to, well, see all the items you have.\nquit OR q - to exit the game\n-----------------------");}

        else if (strcmp(verb, "look") == 0)        { executeLook(noun); }
        
        else if (strcmp(verb, "go") == 0)          { executeGo(noun); }  
        
        else if (strcmp(verb, "get") == 0)         { executeGet(noun); }
        
        else if (strcmp(verb, "drop") == 0)        { executeDrop(noun); }
        
        else if (strcmp(verb, "check") == 0)       { executeCheck(noun); }
/*
        else if (strcmp(verb, "inventory") == 0)   { executeInventory(noun); }

        else if (strcmp(verb, "kill") == 0)        { executeKill(noun); }
    */
        else    { printf("I don't know how to '%s'.\n", verb); }      
    }
    return true;
    //printf("%s\n%s", verb, noun);
}