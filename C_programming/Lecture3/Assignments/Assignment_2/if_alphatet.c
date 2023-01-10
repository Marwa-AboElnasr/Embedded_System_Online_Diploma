/*
 * if_alphatet.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Marwa
 */

#include <stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &c);

    if (isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);


}
