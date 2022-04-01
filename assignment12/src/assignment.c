/*
 ============================================================================
 Name        : assignment12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	Write a program to check weather the sum of digits and product of digits of a number is same

	        setbuf(stdout,NULL);
			int n,i,r,sum=0,mul=1;
			printf("entered a number");
			scanf("%d",&n);
			for(i=n;n>0;n=n/10){
						r=n%10;
						sum=sum+r;
						mul=mul*r;
			}if(sum==mul){
				printf("the sum of digits and product of digits of a number is same");
			}else{
				printf("the sum of digits and product of digits of a number not  same");
			}



	return EXIT_SUCCESS;
}
