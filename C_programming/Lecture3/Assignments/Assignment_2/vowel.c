/*
 * vowel.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Marwa
 */



#include <stdio.h>

void main()
{
    char ch;
    printf("Enter an Alphabet: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("%c is Vowel",ch);
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("%c is Vowel",ch);
    else
        printf("%c is a Consonant",ch);


}
