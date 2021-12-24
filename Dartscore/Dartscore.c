#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Spiller
{
    char navn[50];
    int score;
    int kaste_point;
} player;

compare_score(const void *v1, const void *v2);

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

            while (Spiller[i].kaste_point > 60)
            {
                printf("Maksimalt point pr. skud er 60, indtast skud igen: ");
                scanf("%d", &Spiller[i].kaste_point);
            }

            Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

            printf("Din score er: %d\n", Spiller[i].score);

            printf("\nIndtast point for 2. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            while (Spiller[i].kaste_point > 60)
            {
                printf("Maksimalt point pr. skud er 60, indtast skud igen: ");
                scanf("%d", &Spiller[i].kaste_point);
            }

            Spiller[i].score = Spiller[i].score - Spiller[i].kaste_point;

            printf("Din score er: %d\n", Spiller[i].score);

            printf("\nIndtast point for 3. kast: ");
            scanf("%d", &Spiller[i].kaste_point);

            while (Spiller[i].kaste_point > 60)
            {
                printf("Maksimalt point pr. skud er 60, indtast skud igen: ");
                scanf("%d", &Spiller[i].kaste_point);
            }

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

    printf("Spillet er færdig.\n\n");

    qsort(Spiller, antal_spillere, sizeof(player), compare_score);

    printf("-----SCOREBOARD-----\n");

    for (k = 0; k < antal_spillere; k++)
    {
        printf("%s har %d point.\n", Spiller[k].navn, Spiller[k].score);
    }

    printf("--------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("Vinderen er: %s. WUHUUUUU!!!!\n", Spiller[0].navn);
    }

    printf("\nAntal runder spillet: %d\n", runde);

    /* Implementer at hvis man lander på 1 eller går i minus skal man tilbage til den score man startede på inden runden startede. */
    /* Print final scoreboard */
    /* Scoreboard skal sorteres efter point */
}

int compare_score(const void *v1, const void *v2)
{
    const player *p1 = (player *)v1;
    const player *p2 = (player *)v2;

    if (p1->score < p2->score)
    {
        return -1;
    }
    else if (p1->score > p2->score)
    {
        return 1;
    }
    else
        return 0;
}
