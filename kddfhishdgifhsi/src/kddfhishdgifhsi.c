/*
 ============================================================================
 Name        : kddfhishdgifhsi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,space,col;
	for(row=5;row>=1;row--){
		for(space=5;space>=5-row;space--){
			printf(" ");
		}
		for(col=row;col<=5;col++){
			printf("%d",col);
		}if(row!=5){for(col=6;col<=5+5-row;col++){
			printf("%d",col);
		}}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
