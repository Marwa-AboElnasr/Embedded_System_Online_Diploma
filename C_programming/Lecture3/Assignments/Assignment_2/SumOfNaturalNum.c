/*
 * SumOfNaturalNum.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Marwa
 */


#include <stdio.h>
void main()
{

	int number,sum=0;
	printf("Enter The Integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	for (int i=0;i<=number;i++)
	{
		sum+=i;
	}
	printf("Sum = %d ",sum);

}
