/*
 * Factorial.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Marwa
 */


#include <stdio.h>
void main()
{
	int fact = 1,number;
	printf("Enter An Integer : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&number);
    if(number <0)
    {
    	printf("Error !!! Factorial of negative number doesn't exist");

    }
    else
    {
    	for(int i=1 ;i<=number;i++)
    	{
    		fact*=i;
    	}
    	printf("Factorial = %d ",fact);
    }


}
