/*
 ============================================================================
 Name        : charcounting.c
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
	int i,chara=0,num=0,spec=0;
	setbuf(stdout,NULL);
	printf("enter the sentence:");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a'&& a[i]<='z') || (a[i]>='A' && a[i<='Z'])){
			chara++;

		}else if(a[i]>='0'&& a[i]<='9'){
			num++;

		}else{spec++;

		}

	}
	printf("\nThe number of alphabets are:%d",chara);
	printf("\nThe number of digits are:%d",num);
	printf("\nThe number of special characters are:%d",spec);



	return EXIT_SUCCESS;
}
