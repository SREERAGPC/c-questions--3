/*
 ============================================================================
 Name        : charascii.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[500];
	setbuf(stdout,NULL);
	printf("enter a character:");
	scanf("%c",&a);
	printf("ascii value of entered character:%d",a);


	return EXIT_SUCCESS;
}
