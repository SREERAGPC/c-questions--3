/*
 ============================================================================
 Name        : assignment9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int bal=100000,amt,choice,true=1;
	setbuf(stdout,NULL);
	while(true==1){
	printf("\n1.Withdrawal()\n2.Deposit()\n3.Balance\n4.Exit\nEnter your Choice:");
	scanf("%d",&choice);

	switch(choice){
	case 1:
		printf("Enter the Amount You want to withdraw: ");
		scanf("%d",&amt);
		bal=bal-amt;
		printf("You have Withdrawn %d succesfully\n",amt);
		break;
	case 2:
		printf("Please Insert your cash:");
		scanf("%d",&amt);
		bal=bal+amt;
		printf("You have deposited %d Successfully\n",amt);
		break;
	case 3:
		printf("Your balance is: %d\n",bal);
		break;
	case 4:
		printf("user exited");
		exit(0);

	}
	}
	return EXIT_SUCCESS;
}

