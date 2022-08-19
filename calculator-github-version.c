#include <stdio.h>
#include <stdbool.h>
// By MikeTheHash
int func(void){
	printf("\n::::::::::::::::::::::::::::::::");
	printf("\nSelect a type of calculation \n1 - Addition; \n2 - Subtraction; \n3 - Multiplication; \n4 - Division; \n");
	int input;
	printf(">");
	scanf("%i", &input);
	switch(input){
		case 1:
		printf("\n---You have selected the addition---");
		printf("\nEnter the first number: ");
		int n1;
		scanf("%i", &n1);
		printf("\nEnter the second number: ");
		int n2;
		scanf("%i", &n2);
		int risultato = n1 + n2;
		printf("The result is: %i", risultato);
		break;
		case 2:
		printf("\n---You have selected subtraction---");
		printf("\nEnter the first number: ");
		int n1_2;
		scanf("%i", &n1_2);
		printf("\nEnter the second number: ");
		int n2_2;
		scanf("%i", &n2_2);
		int ris = n1_2 - n2_2;
		printf("The result is: %i", ris);
		break;
		case 3:
		printf("\n---You have selected multiplication---");
		printf("\nEnter the first number: ");
		int n1_3;
		scanf("%i", &n1_3);
		printf("\nEnter the second number: ");
		int n2_3;
		scanf("%i", &n2_3);
		int ris1 = n1_3 * n2_3;
		printf("The result is: %i ", ris1);
		break;
		case 4:
		printf("\n---You have selected the division---");
		printf("\nEnter the first number: ");
		int n1_4;
		scanf("%i", &n1_4);
		printf("\nEnter the second number: ");
		int n2_4;
		scanf("%i", &n2_4);
		int ris2 = n1_4 / n2_4;
		printf("The result is: %i ", ris2);
		break;
	}
}

int main(){
	printf("\n.......................");
	printf("\n---Calculator In C---\n");
	printf(".......................\n");
	while(true){
		func();
	}
	return 0;
}
