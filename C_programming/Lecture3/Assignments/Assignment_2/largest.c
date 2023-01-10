/*
 * largest.c
 *
 *  Created on: Jan 10, 2023
 *      Author: Marwa
 */
#include <stdio.h>
void main()
{
	  int a, b, c;
	    printf("Enter three numbers: \na: ");
	    fflush(stdin);
	 	fflush(stdout);
	    scanf("%d", &a);
	    printf("b: ");
	    fflush(stdin);
	    fflush(stdout);
	    scanf("%d", &b);
	    fflush(stdin);
	    fflush(stdout);
	    printf("c: ");
	    fflush(stdin);
	    fflush(stdout);
	    scanf("%d", &c);
	    printf("Largest of three numbers is %d", a > b ? (a > c ? a : c) : (b > c ? b : c));

}
