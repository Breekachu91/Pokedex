#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

struct pokedex
{
	int kdex;
	char pokeName[20];
	char type1[15];
	char type2[15];
	bool encounter;

};
    

// void function for user to search pokedex by pokemon name
void searchPokeName(struct pokedex arr[], int size);

//function for user to search through pokedex by type
void searchPokeType(struct pokedex arr[], int size);

//function to display all results in pokedex
void displayAll(struct pokedex arr[], int size); 

//function to display by encountered or not 
void encountered(struct pokedex arr[], int size); 

//Save and Exit

int main()
{
	printf("                                 ,'\\ \n");
	printf("     _.----.     ____          ,'  _\\ ___    ___     ____ \n");
	printf(" _,-'       `.  |    |  /`.   \\,-'    |  \\  /   |    |   \\  |`. \n");
	printf("\\      __    \\  '-.  | /   `.   ___   |   \\/    |    '-.  \\ |  | \n");
	printf(" \\.   \\\\     | __ |  |/    ,',  _  `. |         | __   |   \\|  | \n");
	printf("  \\    \\/   /,'_`.|      ,' /   /  /  |         , '_`. |    |  | \n");
	printf("   \\     ,-'/ / \\ \\    ,'  |  \\/  /,`.|       /  / \\   |       | \n");
	printf("    \\   \\  |  \\_/  |   `-.  \\    `'  /|      ||  \\_/   |   \\   | \n");
	printf("     \\   \\ \\       /       `-.`.___,-'|  \\  /|\\       /   | |  | \n");
	printf("      \\   \\  `.__,'|  |`-._    `|     |__|\\/ |  `.__,' |  | |  | \n");
	printf("       \\_.-'       |__|    `-._ |             '-.|     '-.| |  | \n");
	printf("                               `'                           '-.| \n");
	printf("															Version: 0.7b\n");
	printf("=========================================================================\n");
	printf("====================== WELCOME TO THE POKEDEX ===========================\n");
	printf("=========================================================================\n");

	//create a pokedex containing pokemon name, type, kdex #


	struct pokedex bulbasaur = { 1, "Bulbasaur", "Grass", "Poison", 0 };
	struct pokedex ivybasaur = { 2, "Ivysaur", "Grass", "Poison", 0 };
	struct pokedex venasaur = { 3, "Venasaur", "Grass", "Poison", 0 };
	struct pokedex charmander = { 4, "Charmander", "Fire", 0 };
	struct pokedex charmeleon = { 5, "Charmeleon", "Fire", 0 };
	struct pokedex charizard = { 6, "Charizard", "Fire", "Flying", 0 };
	struct pokedex squirtle = { 7, "Squirtle", "Water", 0 };
	struct pokedex wartorle = { 8, "Wartortle", "Water", 0 };
	struct pokedex blastoise = { 9, "Blastoise", "Water", 0 };
	struct pokedex caterpie = { 10, "Caterpie", "Bug", 0 };
	struct pokedex metapod = { 11, "Metapod", "Bug", 0 };
	struct pokedex butterfree = { 12, "Butterfree", "Bug","Flying", 0 };
	struct pokedex weedle = { 13, "Weedle", "Bug","Poison", 0 };
	struct pokedex kakuna = { 14, "Kakuna", "Bug","Poison", 0 };
	struct pokedex beedrill = { 15, "Beedrill", "Bug","Poison", 0 };
	struct pokedex pidgey = { 16, "Pidgey", "Flying", "Normal", 0 };
	struct pokedex pidgeotto = { 17, "Pidgeotto", "Flying", "Normal", 0 };
	struct pokedex pidgeot = { 18, "Pidgeot", "Flying", "Normal", 0 };
	struct pokedex rattata = { 19, "Rattata", "Normal", 0 };
	struct pokedex raticate = { 20, "Raticate", "Normal", 0 };
	struct pokedex spearow = { 21, "Spearow", "Normal", "Flying", 0 };
	struct pokedex fearow = { 22, "Fearow", "Normal","Flying", 0 };
	struct pokedex ekans = { 23, "Ekans", "Poison", 0 };
	struct pokedex arbok = { 24, "Arbok", "Poison", 0 };
	struct pokedex pikachu = { 25, "Pikachu", "Electric", 0 };
	struct pokedex raichu = { 26, "Raichu", "Electric", 0 };
	struct pokedex sandshrew = { 27, "Sandshrew", "Ground", 0 };
	struct pokedex sandslash = { 28, "Sandslash", "Ground", 0 };
	struct pokedex nidoranf = { 29, "Nidoran Female", "Poison", 0 };
	struct pokedex nidorina = { 30, "Nidorina", "Poison", 0 };
	struct pokedex nidoqueen = { 31, "Nidoqueen", "Poison","Ground", 0 };
	struct pokedex nidoranm = { 32, "Nidoran Male", "Poison", 0 };
	struct pokedex nidorino = { 33, "Nidorino", "Poison", 0 };
	struct pokedex nidoking = { 34, "Nidoking", "Poison", "Ground", 0 };
	struct pokedex clefairy = { 35, "Clefairy", "Fairy", 0 };
	struct pokedex clefable = { 36, "Clefable", "FAiry", 0 };
	struct pokedex vulpix = { 37, "Vulpix", "Fire", 0 };
	struct pokedex ninetales = { 38, "Ninetales", "Fire", 0 };
	struct pokedex jigglypuff = { 39, "Jigglypuff", "Normal", "Fairy", 0 };
	struct pokedex wigglytuff = { 40, "Wigglytuff", "Normal", "Fairy", 0 };

	struct pokedex pokeDeck[151] = { bulbasaur, ivybasaur, venasaur, charmander, charmeleon, charizard, squirtle, wartorle, blastoise, metapod, butterfree, caterpie, pidgey, pidgeotto, pidgeot,
		rattata, raticate, spearow, fearow, pikachu, raichu, sandshrew, sandslash, nidoranf, nidorina, nidoqueen, nidoranm, nidorino, nidoking, clefairy, clefable, vulpix, ninetales, jigglypuff,
		wigglytuff };

	     
	int size = sizeof(pokeDeck) / sizeof(pokeDeck[0]);
	int uInput = 0;
	printf("Navigate your pokedex by entering one of the following:\n");
	printf("[1]To display all pokemon entries\n[2] for Name\n[3] for type\n[4] for pokedex number\n[5] for encounter status\nEnter here:");
	scanf_s("%1d", &uInput);


	switch (uInput)
	{
		case 1:		//searching pokedex for name
		{
			displayAll(pokeDeck, size);
			break; 
		}
		case 2:		//searching pokedex by name
		{
			searchPokeName(pokeDeck, size);
			break;
		}
		case 3:		//searching pokedex by type
		{
			searchPokeType(pokeDeck, size);
			break;
		}
		case 4:		//searching pokedex by pokedex number
		{

		}
		case 5:		// searching by encountered status
		{
			encountered(pokeDeck, size);
			break; 
		}
		default:
		{
			printf("Invalid option, please try again\n");
			break; 
		}
	}

	return 0;
}

void searchPokeName(struct pokedex arr[], int size)
{
	int check = 0;
	char userPokemon[20] = { 0 };										//variable to store user input (pokemon name) 
	printf("Enter the name of the pokemon you are searching for: ");
	scanf_s(" %s", &userPokemon, 20);									// user input
	for (int i = 0; i < size; i++)										// loop to scan through struct 
	{
		if (strcmp(userPokemon, arr[i].pokeName) == 0)					// string compare: if user input matches pokemon name in the pokedex is true
		{
			check = 1;
			char yesNo[4] = "Yes";										// variable to store string for output purposes of the encounter value
			if (arr[i].encounter == 0)									// if encounter value is false: yesNo = "No". When encounter value is output, will display as No, rather than 0. 
			{
				strcpy_s(yesNo, 4, "No");
				printf("\n-------------------------------------");
				printf("\nDex #: %d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
			}
			else														// if encounter value is false: yesNo = "Yes". When encounter value is output, will display as Yes, rather than 1. 
			{
				strcpy_s(yesNo, 4, "Yes");
				printf("\n-------------------------------------");
				printf("\nDex #: %d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
			}
		}
	}
	if (check != 1)
	{
		printf("Sorry, no matches were found. Please try again.");
	}
}

void searchPokeType(struct pokedex arr[], int size)
{
	char pokeType1[15] = { 0 };
	char pokeType2[15] = { 0 };
	int check = 0;
	int checkType2 = 0;																						// check value
	int userType1, userType2;																				// variable to store user input
	printf("Select which type of pokemon you are looking for:\n");
	printf("[1] - Normal \t\[2] - Fire \t[3] - Water \t[4] - Grass \t[5] - Electric \t[6] - Ice \n");
	printf("[7] - Fighting \t[8] - Poison \t[9] - Ground \t[10] - Flying \t[11] - Psychic \t[12] - Bug \n");
	printf("[13] - Rock \t[14] - Ghost \t[15] - Dark \t[16] - Dragon \t[17] - Steel \t[18] - Fairy \n");
	printf("[0] - No Type\n");
	printf("First Type: ");
	scanf_s("%2d", &userType1);


	switch (userType1)
	{
	case 1: //Normal
	{
		strcpy_s(pokeType1, 15, "Normal");
		break;
	}
	case 2: //Normal
	{
		strcpy_s(pokeType1, 15, "Fire");
		break;
	}
	case 3: //Normal
	{
		strcpy_s(pokeType1, 15, "Water");
		break;
	}
	case 4: //Normal
	{
		strcpy_s(pokeType1, 15, "Grass");
		break;
	}
	case 5: //Normal
	{
		strcpy_s(pokeType1, 15, "Electric");
		break;
	}
	case 6: //Normal
	{
		strcpy_s(pokeType1, 15, "Ice");
		break;
	}
	case 7: //Normal
	{
		strcpy_s(pokeType1, 15, "Fighting");
		break;
	}
	case 8: //Normal
	{
		strcpy_s(pokeType1, 15, "Poison");
		break;
	}
	case 9: //Normal
	{
		strcpy_s(pokeType1, 15, "Ground");
		break;
	}
	case 10: //Normal
	{
		strcpy_s(pokeType1, 15, "Flying");
		break;
	}
	case 11: //Normal
	{
		strcpy_s(pokeType1, 15, "Psychic");
		break;
	}
	case 12: //Normal
	{
		strcpy_s(pokeType1, 15, "Bug");
		break;
	}
	case 13: //Normal
	{
		strcpy_s(pokeType1, 15, "Rock");
		break;
	}
	case 14: //Normal
	{
		strcpy_s(pokeType1, 15, "Ghost");
		break;
	}
	case 15: //Normal
	{
		strcpy_s(pokeType1, 15, "Dark");
		break;
	}
	case 16: //Normal
	{
		strcpy_s(pokeType1, 15, "Dragon");
		break;
	}
	case 17: //Normal
	{
		strcpy_s(pokeType1, 15, "Steel");
		break;
	}
	case 18: //Normal
	{
		strcpy_s(pokeType1, 15, "Fairy");
		break;
	}
	}//end of switch statement

	printf("Second Type: ");			// user input
	scanf_s("%2d", &userType2);

	switch (userType2)
	{
	case 0:
	{
		checkType2 = 1;
	}
	case 1: //Normal
	{
		strcpy_s(pokeType2, 15, "Normal");
		break;
	}
	case 2: //Normal
	{
		strcpy_s(pokeType2, 15, "Fire");
		break;
	}
	case 3: //Normal
	{
		strcpy_s(pokeType2, 15, "Water");
		break;
	}
	case 4: //Normal
	{
		strcpy_s(pokeType2, 15, "Grass");
		break;
	}
	case 5: //Normal
	{
		strcpy_s(pokeType2, 15, "Electric");
		break;
	}
	case 6: //Normal
	{
		strcpy_s(pokeType2, 15, "Ice");
		break;
	}
	case 7: //Normal
	{
		strcpy_s(pokeType2, 15, "Fighting");
		break;
	}
	case 8: //Normal
	{
		strcpy_s(pokeType2, 15, "Poison");
		break;
	}
	case 9: //Normal
	{
		strcpy_s(pokeType2, 15, "Ground");
		break;
	}
	case 10: //Normal
	{
		strcpy_s(pokeType2, 15, "Flying");
		break;
	}
	case 11: //Normal
	{
		strcpy_s(pokeType2, 15, "Psychic");
		break;
	}
	case 12: //Normal
	{
		strcpy_s(pokeType2, 15, "Bug");
		break;
	}
	case 13: //Normal
	{
		strcpy_s(pokeType2, 15, "Rock");
		break;
	}
	case 14: //Normal
	{
		strcpy_s(pokeType2, 15, "Ghost");
		break;
	}
	case 15: //Normal
	{
		strcpy_s(pokeType2, 15, "Dark");
		break;
	}
	case 16: //Normal
	{
		strcpy_s(pokeType2, 15, "Dragon");
		break;
	}
	case 17: //Normal
	{
		strcpy_s(pokeType2, 15, "Steel");
		break;
	}
	case 18: //Normal
	{
		strcpy_s(pokeType2, 15, "Fairy");
		break;
	}
	default:
	{
		printf("Invalid Option");
		break;
	}
	}//end of switch statement

	if (checkType2 == 1)
	{
		for (int i = 0; i < size; i++)										// loop to scan through struct 
		{
			if ((strcmp(arr[i].type1, pokeType1) == 0) || (strcmp(arr[i].type2, pokeType1) == 0))  // string compare: if user input matches pokemon name in the pokedex is true
			{
				check = 1;
				char yesNo[4] = "Yes";										// variable to store string for output purposes of the encounter value
				if (arr[i].encounter == 0)									// if encounter value is false: yesNo = "No". When encounter value is output, will display as No, rather than 0. 
				{
					strcpy_s(yesNo, 4, "No");
					printf("\n-------------------------------------");
					printf("\nDex #: %03d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
				}
				else														// if encounter value is false: yesNo = "Yes". When encounter value is output, will display as Yes, rather than 1. 
				{
					strcpy_s(yesNo, 4, "Yes");
					printf("\n-------------------------------------");
					printf("\nDex #: %03d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < size; i++)										// loop to scan through struct 
		{
			if ((strcmp(arr[i].type1, pokeType1) == 0 && strcmp(arr[i].type2, pokeType2) == 0) || (strcmp(arr[i].type1, pokeType2) == 0 && strcmp(arr[i].type2, pokeType1) == 0))  // string compare: if user input matches pokemon name in the pokedex is true
			{
				check = 1;
				char yesNo[4] = "Yes";										// variable to store string for output purposes of the encounter value
				if (arr[i].encounter == 0)									// if encounter value is false: yesNo = "No". When encounter value is output, will display as No, rather than 0. 
				{
					strcpy_s(yesNo, 4, "No");
					printf("\n-------------------------------------");
					printf("\nDex #: %03d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
				}
				else														// if encounter value is false: yesNo = "Yes". When encounter value is output, will display as Yes, rather than 1. 
				{
					strcpy_s(yesNo, 4, "Yes");
					printf("\n-------------------------------------");
					printf("\nDex #: %03d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
				}
			}
		}
	}
	if (check != 1)
	{
		printf("\nSorry, There are no Pokemon that match those criteria.\n");
	}

	return 0;
}

void displayAll(struct pokedex arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		char yesNo[4] = "Yes";										// variable to store string for output purposes of the encounter value
		if (arr[i].encounter == 0)									// if encounter value is false: yesNo = "No". When encounter value is output, will display as No, rather than 0. 
		{
			strcpy_s(yesNo, 4, "No");
			printf("\n-------------------------------------");
			printf("\nDex #: %d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
		}
		else														// if encounter value is false: yesNo = "Yes". When encounter value is output, will display as Yes, rather than 1. 
		{
			strcpy_s(yesNo, 4, "Yes");
			printf("\n-------------------------------------");
			printf("\nDex #: %d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: %s\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2, yesNo);
		}
	}
}

void encountered(struct pokedex arr[], int size)
{
	char ui = 'N'; 
	char temp = 'Y'; 
	do
	{
		printf("Would you like to see pokemon you have encountered or have not encountered?\n[1] encountered \n[2] not ecountered\nEnter here: ");
		int userInput = 0;
		scanf_s("%d", &userInput);

		switch (userInput)
		{
			case 1: // encountered 
			{
				for (size_t i = 0; i < size; i++)
				{
					if (arr[i].encounter == 1)	// if encounter status is yes (1) then print off
					{
					printf("\n-------------------------------------");
					printf("\nDex #: %d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: Yes\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2);
					}
				}
				break;
			}
			case 2: // not encountered
			{
				for (size_t i = 0; i < size; i++)
				{
					if (arr[i].encounter == 0)	// if the encounter status is no (0) then print off 							
					{
						printf("\n-------------------------------------");
						printf("\nDex #: %d	Name: %s\nType 1: %s	\nType 2: %s	\nEncountered: No\n", arr[i].kdex, arr[i].pokeName, arr[i].type1, arr[i].type2);
					}
				}
				break;
			}
			default:
			{
				printf("Invalid option, please enter 1 or 2\n");
			}
		}
		printf("Press [Y] to search again or [N] to return to main menu: "); 
		scanf_s(" %c",&ui, 1);
		temp = toupper(ui); 

	} while (temp == 'Y'); 
}
