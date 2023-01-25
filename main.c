# include <stdio.h>
# include <stdbool.h>

#include "verb1.h"
#include "parser1.h"

#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"      //Bold Text Formula


static char input[100];

static bool getInput(void)
{
	printf("\n--> ");
	return fgets(input, sizeof input, stdin) != NULL;
}

void welcome()
{
    printf("You awaken coughing up mud from the back of your throat as you sit in the middle of a huge noxious bog, you're wearing some basic leather armor and a metallic necklace.\n"); 
    printf("As you stand up, your leg begins to painfully throb and you are bleeding heavily from your right thigh.\n\n");
}

int main()
{
    printf("--------------------------------------------\n\n");
    printf("\nWelcome to the Trial of the Medallion!\n\n");
    welcome();

    while ( parser(input) && getInput() );
    
    printf("\nSee you soon Vatt'ghern!\n\n");
    
}