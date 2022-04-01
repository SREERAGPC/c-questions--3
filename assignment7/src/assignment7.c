/*
 ============================================================================
 Name        : assignment7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	Write a program to print the prime numbers upto a limit
	setbuf(stdout,NULL);
	int limit,i,j;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("prime numbers upto %d",limit);
	for(i=2;i<=limit;i++){
		int count=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;

			}

		}if(count==0){
				printf("\n%d",i);

	}
	}
	return EXIT_SUCCESS;
}
