/*
 ============================================================================
 Name        : love.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,col,space;
	printf("\n");
	for(row=5;row<=8;row++){
		for(space=8;space>=row;space--){
			printf("  ");
		}for(col=1;col<=row;col++){
			printf(" * ");
		}for(space=8;space>=row;space--){
			printf("  ");
		}for(col=1;col<=row;col++){
			printf(" * ");
		}printf("\n");
	}
	for(row=1;row<=16;row++){
		for(space=1;space<=row;space++){
			printf("  ");
		}for(col=16;col>=row;col--){
			printf(" * ");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
