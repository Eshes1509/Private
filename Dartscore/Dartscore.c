#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getName (char name[]);

int main(void){
    
    int start_score = 500, antal_spillere, point;

    printf("Velkommen til Thomas' Dart score program!\n Indtast hvor mange spillere i er: ");
    scanf("%d", antal_spillere);

    printf("\n\nFantastisk, i er %d spillere, indtast nu navn på hver spiller: ");
    getName(fullName[]);

    do
    {
        getName(fullName[])
    } while (fullName[] != antal_spillere);
    
    printf("\nHej %s, herlige navne. I kan nu begynde at spille!\n\n", fullName)

    for (i = 0; i < fullName[i]; i++)
    {
        printf("%s tur.\n\n", fullName[i]);

            printf("Indtast point for 1. kast: ");
            scanf("%d", score_for_første_kast_til_den_pågældende_spiller);

            point_til_den_pågældende_spiller = point_til_den_pågældende_spiller - score_for_første_kast_til_den_pågældende_spiller

            printf("\nIndtast point for 2. kast: ");
            scanf("%d", score_for_andet_kast_til_den_pågældende_spiller);

            point_til_den_pågældende_spiller = point_til_den_pågældende_spiller - score_for_første_kast_til_den_pågældende_spiller

            printf("\nIndtast point for 3. kast: ");
            scanf("%d", score_for_tredje_kast_til_den_pågældende_spiller);

            point_til_den_pågældende_spiller = point_til_den_pågældende_spiller - score_for_første_kast_til_den_pågældende_spiller

            printf("Scoren er indtil videre er:\n")

            for (i = 0; i < fullName[i]; i++)
            {
                printf("%s har %d point.\n", fullName[i], /* point variable */)
            }
            
               
    };
    
    /* Implementer at hvis man lander på 1 eller går i minus skal man tilbage til den score man startede på inden runden startede. */
    /* Print final scoreboard */

}

void getName (char name[]) {
    
    char *fullName = (char*) malloc(50);

    /*Checks if memory allocation was sucessfull*/
    if (fullName == NULL) {
        printf("Memory allocation failed");
        exit(0);
    }

    //Is able to obtain a string including spaces
    gets(fullName);
    
    strcpy(name, fullName);

    free(fullName);
}