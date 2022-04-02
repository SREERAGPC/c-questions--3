/*
 ============================================================================
 Name        : kfsdiuufhiusg;ie.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,m=2;
	for(i=1;i<5;i++){
		if(i%2==1){
			for(j=1;j<=5;j++){
			printf("*");
		}

		}
		else{for(j=1;j<=10;j++){
			printf("*");
		}

		}if(i!=4){


		for(j=0;j<=m;j++){
			printf("*\n");

		}m=2*m;

		}
	}
	return EXIT_SUCCESS;
}
