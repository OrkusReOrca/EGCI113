#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char smain[3][30];
    int i;
    for(i=0;i<3;i++){
        printf("Input your string %d : ",i);
        scanf("%s",&smain[i]);
    }

    printf("\nYour strings are: ");
    for(i=0;i<3;i++){
        printf("%s ",smain[i]);
    }
    puts("");

    char first[30],last[30];

    //dictionary alphabetically sort
    puts("\nIN DICTIONARY:");
    printf("First = ");
    strcpy(first,smain[0]);
    if(strcmp(first,smain[1])>0 ) strcpy(first,smain[1]);
    if(strcmp(first,smain[2])>0 ) strcpy(first,smain[2]);
    printf("%s\n",first);

    printf("Last = ");
    strcpy(last,smain[0]);
    if(strcmp(last,smain[1])<0 ) strcpy(last,smain[1]);
    if(strcmp(last,smain[2])<0 ) strcpy(last,smain[2]);
    printf("%s\n",last);

    //Concatenate (combine)
    strcat(first,last);
    printf("\nCombined = %s\n",first);

    //Capitalized vowels
    printf("\nCapitalized vowels all: ");
    int z;
    for(i=0;i<3;i++){
        for(z=0;z<strlen(smain[i]);z++){
            if(smain[i][z]=='a') printf("A");
            else if(smain[i][z]=='e') printf("E");
            else if(smain[i][z]=='i') printf("I");
            else if(smain[i][z]=='o') printf("O");
            else if(smain[i][z]=='u') printf("U");
            else printf("%c",smain[i][z]);
        }
        printf(" ");
    }
    printf("\nCapitalized vowels combined: ");
    for(i=0;i<strlen(first);i++){
        if(first[i]=='a') printf("A");
        else if(first[i]=='e') printf("E");
        else if(first[i]=='i') printf("I");
        else if(first[i]=='o') printf("O");
        else if(first[i]=='u') printf("U");
        else printf("%c",first[i]);
    }
    puts("");

    //Print backwards
    printf("Capitalized vowels combined and Reversed: ");
    for(i=strlen(first)-1;i>=0;i--){
        if(first[i]=='a') printf("A");
        else if(first[i]=='e') printf("E");
        else if(first[i]=='i') printf("I");
        else if(first[i]=='o') printf("O");
        else if(first[i]=='u') printf("U");
        else printf("%c",first[i]);
    }
    puts("\n");
    return 0;
}//by Kunanon Thappawong 15.11.2023
