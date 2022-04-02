/*
 ============================================================================
 Name        : fibanocci.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int n,f;
    setbuf(stdout,NULL);
    printf("enter a random number");
    scanf("%d",&n);
    f = fibonacci(n);
    printf("the value of  nth  Fibonacci %d",f);
}
int fibonacci (int n){
    if (n==0){
         return 0;
    }
    else if (n == 1){
    	return 1;
    }else{
    	return fibonacci(n-1)+fibonacci(n-2);
    }

	return EXIT_SUCCESS;
}
