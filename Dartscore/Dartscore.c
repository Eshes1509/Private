#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void getName(char navn[]);

struct Spiller
{
    char   navn[50];
    int    score;
    int    kaste_point;
};

int main(void)
{

    int antal_spillere, kaste_point, i = 0, k = 0, spiller_score_ligmed_0, runde = 0;
    char navne[50];
    struct Spiller Spiller[20];

    printf("\nVelkommen til Thomas' Dart score program!\nIndtast hvor mange spillere i er: ");
    scanf("%d", &antal_spillere);

    printf("\n\nFantastisk, i er %d spillere, indtast nu navn på hver spiller: ", antal_spillere);

    do
    {
        scanf("%s", &Spiller[i].navn);
        i++;
    } while (i != antal_spillere);

    printf("\n");

    for (i = 0; i < antal_spillere; i++)
    {
        printf("Spiller %d's navn er %s\n", i + 1, Spiller[i].navn);
    }

    printf("\nHerlige navne. I kan nu begynde at spille!\n");

    printf("--------------------------------------------------------------------\n");

    i = 0;

    for (i = 0; i < antal_spillere; i++)
    {
        Spiller[i].score = 501;
    }

    i = 0;

    do
    {
        runde = runde + 1;
        printf("\nRunde: %d", runde);

        for (i = 0; i < antal_spillere; i++)
        {
            printf("\n");
            Spiller[i].kaste_point = 0;

            printf("%s tur.\n\n", Spiller[i].navn);

            printf("Indtast point for 1. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

            printf("Din score er: %d\n", Spiller[i].score);

            printf("\nIndtast point for 2. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

            printf("Din score er: %d\n", Spiller[i].score);

            printf("\nIndtast point for 3. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

            printf("Din score er: %d\n", Spiller[i].score);

            printf("\n---------------------\n");

            printf("Scoren indtil videre er:\n\n");

            for (k = 0; k < antal_spillere; k++) 
            {
                printf("%s har %d point.\n", Spiller[k].navn, Spiller[k].score);
            }

            printf("---------------------\n");

            if (Spiller[i].score == 0)
            {
                spiller_score_ligmed_0 = 1;
                break;
            }
            
        }

    } while (spiller_score_ligmed_0 != 1);

    printf("Færdig\n");

    /* Implementer at hvis man lander på 1 eller går i minus skal man tilbage til den score man startede på inden runden startede. */
    /* Print final scoreboard */
}

