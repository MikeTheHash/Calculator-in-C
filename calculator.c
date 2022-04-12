#include <stdio.h>

int main(){
	printf("---Calculator In C---\n");
	printf("Select a type of calculation: \n1 - Addition; \n2 - Subtraction; \n3 - Multiplication; \n4 - Division; \n");
	int input_user;
	printf("> ");
	scanf("%i", &input_user);
	if(input_user == 1){
		printf("---You have selected the addition---");
		printf("\nEnter the first number: ");
		int var;
		scanf("%i", &var);
		printf("Enter the second number: ");
		int var1;
		scanf("%i", &var1);
		int somma = var + var1;
		printf("The result is: %i \n", somma);
	}
	if(input_user == 2){
		printf("---You have selected subtraction---");
		printf("\nEnter the first number: ");
		int altra_variabile;
		scanf("%i", &altra_variabile);
		printf("Enter the second number: ");
		int var_tattica;
		scanf("%i", &var_tattica);
		int ris = altra_variabile - var_tattica;
		printf("The result is: %i \n", ris);
	}
	if(input_user == 3){
		printf("---You have selected multiplication---");
		printf("\nEnter the first number: ");
		int porcaboia;
		scanf("%i", &porcaboia);
		printf("Enter the second number: ");
		int varciao;
		scanf("%i", &varciao);
		int ris1 = porcaboia * varciao;
		printf("The result is: %i \n", ris1);
	}
	if(input_user == 4){
		printf("---You have selected the division---");
		printf("\nEnter the first number: ");
		int ancora_altre_due_variabili;
		scanf("%i", &ancora_altre_due_variabili);
		printf("Enter the second number: ");
		int variabile_finaleeeeh_yay;
		scanf("%i", &variabile_finaleeeeh_yay);
		int ris2 = ancora_altre_due_variabili / variabile_finaleeeeh_yay;
		printf("The result is: %i \n", ris2);
	}
}
