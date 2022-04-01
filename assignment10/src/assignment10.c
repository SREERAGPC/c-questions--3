/*
 ============================================================================
 Name        : assignment10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	Write a program to Find Square Root of a Number
    setbuf(stdout,NULL);
	float n,i,count=1,output;
	printf("enter a number");
	scanf("%f",&n);
	for(i=1;i<=n;i+0.000001){
		count=count+0.000001;
		i=count*count;
	}
	output=count-0.000001;
	printf("%f",output);
	//another method
	printf("\nenter a number");
		scanf("%f",&n);
		for(i=0.1;i*i<n;i=i+0.01){

		}printf("%f",i);

	return EXIT_SUCCESS;
}
