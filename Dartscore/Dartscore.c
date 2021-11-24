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
        printf("%s starter\n\n", fullName[i]);

        for (size_t i = 0; i < count; i++)
        {
            printf("Indtast point for 1. kast: ");
            scanf()
        };
               
    };
    

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