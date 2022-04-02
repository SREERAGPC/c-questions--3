/*
 ============================================================================
 Name        : assignment22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i,j,limit,a[500],count=0;
		setbuf(stdout,NULL);
		printf("enter the limit");
		scanf("%d",&limit);
		for(i=0;i<limit;i++){
			scanf("%d",&a[i]);
		}

		for(i=0;i<limit;i++){
			a[i]=a[count];

			}
		printf("%d",a[count]);
		count++;
		for(i=1;i<limit;i++){
				for(j=1;j<=2*i;j++){
					printf("%d",a[count]);
					count++;


				}printf("\n");
                 for(j=1;j<=i;j++){
			      printf("_");
		          count++;

				}printf("%d",a[count]);
							count++;

				printf("\n");
		}

	return EXIT_SUCCESS;
}
