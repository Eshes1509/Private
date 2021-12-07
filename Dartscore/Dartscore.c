#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

void getName (char navn[]);

struct Spiller {
    char navn[50];
    int  score;
    int  kaste_point;
};

int main(void){
    
    int start_score = 500, antal_spillere, kaste_point, i = 0, k = 0;
    char navne[50];
    struct Spiller Spiller[i];

    printf("\nVelkommen til Thomas' Dart score program!\nIndtast hvor mange spillere i er: ");
    scanf("%d", &antal_spillere);

    printf("\n\nFantastisk, i er %d spillere, indtast nu navn på hver spiller: ", antal_spillere);

    // for (i = 0; i != antal_spillere; i++)
    // {
    //     // fgets(Spiller[i].navn, 50, stdin);
    //     // getName(navne);
    //     // strcpy(Spiller[i].navn, navne);

    //     scanf("%s", &Spiller[i].navn);
    // }

    do
    {
        scanf("%s", &Spiller[i].navn);
        i++;
    } while (i != antal_spillere);
    
    printf("\n");

    for (i = 0; i < antal_spillere; i++)
    {
        printf("Spiller %d's navn er %s\n", i+1, Spiller[i].navn);
    }
    
    printf("\nHerlige navne. I kan nu begynde at spille!\n");

    printf("--------------------------------------------------------------------\n");

    i = 0;

    // while (i =! antal_spillere)
    // {
    //     Spiller[i].score = 500;
    //     i++;
    // }

    Spiller[0].score = 500;
    Spiller[1].score = 500;

    printf("%s har %d point", Spiller[1].navn, Spiller[1].score);
    
    // do
    // {
    //     Spiller[i].score = 500;
    //     i++;
    // } while (i != antal_spillere);

    // for (i = 0; i =! antal_spillere; i++)
    // {

    //     Spiller[i].kaste_point = 0;

    //     printf("%s tur.\n\n", Spiller[i].navn);

    //         printf("Indtast point for 1. kast: ");
    //         scanf("%d", &Spiller[i].kaste_point);

    //         printf("\nIndtast point for 2. kast: ");
    //         scanf("%d", &Spiller[i].kaste_point);

    //         printf("\nIndtast point for 3. kast: ");
    //         scanf("%d", &Spiller[i].kaste_point);
            
    //         Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

    //         printf("Scoren er indtil videre er:\n");

    //         for (k = 0; k < antal_spillere; k++)
    //         {
    //             printf("%s har %d point.\n", Spiller[k].navn, Spiller[k].score);
    //         }
            
               
    // };

    do
    {
        Spiller[i].kaste_point = 0;

        printf("%s tur.\n\n", Spiller[i].navn);

            printf("Indtast point for 1. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            printf("\nIndtast point for 2. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            printf("\nIndtast point for 3. kast: ");
            scanf("%d", &Spiller[i].kaste_point);
            
            Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

            printf("Scoren er indtil videre er:\n");

            do
            {
                printf("%s har %d point.\n", Spiller[k].navn, Spiller[k].score);
                k++;
            } while (k != antal_spillere);

            // for (k = 0; k < antal_spillere; k++)
            // {
            //     printf("%s har %d point.\n", Spiller[k].navn, Spiller[k].score);
            // }
        i++;
    } while (Spiller[i].score > 0);
    
    
    
    /* Implementer at hvis man lander på 1 eller går i minus skal man tilbage til den score man startede på inden runden startede. */
    /* Print final scoreboard */

}


// void getName (char navne[]) {
    
//     char *fullName = (char*) malloc(50);

//     /*Checks if memory allocation was sucessfull*/
//     if (fullName == NULL) {
//         printf("Memory allocation failed");
//         exit(0);
//     }

//     //Is able to obtain a string including spaces
//     gets(fullName);
    
//     strcpy(navne, fullName);

//     free(fullName);
// };
