/*
 * Operations.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Marwa
 */


#include <stdio.h>
void main()
{
	char op,choice;
		int a ,b,result=0;
do{


	printf("Enter Operator Either + or - or * or / :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d\n%d",&a,&b);

	switch(op)
	{
	case '+':
		result = a+b;

		break;
	case '-':
		result = a-b;

		break;
	case '*':
		result = a*b;

		break;
	case '/':
		result = a/b;

		break;

	}

	printf("%d %c %d = %d\n",a,op,b,result);
	printf("do you need another operation (y/n) ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&choice);
}
while(choice=='y');
}
