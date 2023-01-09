/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Marwa
 */


/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Marwa
 */

#include "stdio.h"

void main()
{
	//Assignment1

	//Example1

	/*printf("##########Console-output###\nC Programming\n###########################");*/

	//Example 2
	     /*   int number;
			printf("##########Console-output###\n");
			printf("Enter a integer: ");
			fflush(stdin);
			fflush(stdout);
		    scanf("%d",&number);
		    printf("You entered: %d\n###########################",number);*/

	//Example 3

	/*int number1,number2,sum=0;
	printf("##########Console-output###\nEnter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d\n%d",&number1,&number2);
	sum=number1+number2;
	printf("Sum : %d\n###########################",sum);*/

    //Example 4
	/*float number1,number2,sum=1.0;
	printf("##########Console-output###\n\n###########################\nEnter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f\n%f",&number1,&number2);
	sum=number1*number2;
	printf("Product: %f ",sum);*/

	//Example 5
	/*char c;
	int Ascii;
	printf("##########Console-output###\nEnter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	Ascii = c;
	printf("ASCII value of %c = %d\n#############################",c,Ascii );*/

	//Example 6
	/*float a,b,temp;
	printf("#########Console_output######\nEnter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n#############################",b);*/


	//Example 7 Swap without temp

	int sum=0,a,b;
	printf("#########Swap Without Temp ######\nEnter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	sum = a+b;
	a=sum-a;
	b=sum-b;
	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n#############################",b);












}
