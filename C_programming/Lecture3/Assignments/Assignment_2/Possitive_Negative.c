/*
 * Possitive_Negative.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Marwa
 */


#include <stdio.h>
void main()
{
float number;
printf("Enter the Number : ");
fflush(stdin);
fflush(stdout);
scanf(" %f",&number);
if(number < 0)
{
	printf("%f is negative Number",number);

}
else if (number > 0)
{
	printf("%f is positive Number",number);
}
else
	printf("You Entered 0");
}
