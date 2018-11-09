#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "addition.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void printResult(int varA, int varB, int result) {
	printf("The result for: %d + %d is %d", varA, varB, result);
}

void menuSecondary(char selection) {
	string varToCalculate = "";
	
	if(selection == 'A') {
		varToCalculate = "integer";
		cout << "Program to calculate for "<< varToCalculate << " numbers only: \n";
	} else if(selection == 'B') {
		varToCalculate = "float";
		cout << "Program to calculate for "<< varToCalculate << " numbers only: \n";
	}
	printf("\t[A] ADDITION\n");
	printf("\t[B] SUBSTRACTION\n");
	printf("\t[C] MULTIPLICATION\n");
	printf("\t[D] DIVISION\n");
	printf("\t[E] POWER\n");
	printf("Please, depress any key to capture the value:\n");
	selectOptionSecondary(selection);
}

void selectOptionPrincipal() {
	printf("Principal\n");
	char selection = ' ';
	int outCycle = 0;
	
	while(outCycle == 0) {
		printf("Option: ");
		scanf(" %c", &selection);
		printf("%c\n", selection);	
		
		if(selection == 'A') {
			printf("INTEGER is the option selected!\n");
			outCycle = 1;
		} else if(selection == 'B') {
			printf("FLOAT is the option selected!\n");
			outCycle = 1;
		} else {
			cout << "The option selected is unknown, please retry the option:\n";
		}
	}
	
	menuSecondary(selection);
}

void selectOptionSecondary(char varSelection) {
	printf("Secondary\n");
	char selection = ' ';
	int outCycle = 0;
	
	while(outCycle == 0)  {
		printf("Option: ");			
		scanf(" %c", &selection);	
	
		if(selection != 'A' || selection != 'B') {
			printf("The option selected is unknown, please retry the option:\n");
		} else if(selection == 'A') {
			printf("ADDITION is the option selected!\n");
			addition(varSelection);
			outCycle = 1;
		} else if(selection == 'B') {
			printf("SUBSTRATION is the option selected!\n");
			outCycle = 1;
		} else if(selection == 'C') {
			printf("MULTIPLICATION is the option selected!\n");
			outCycle = 1;
		} else if(selection == 'D') {
			printf("DIVISION is the option selected!\n");
			outCycle = 1;
		} else if(selection == 'E') {
			printf("POWER is the option selected!\n");
			outCycle = 1;
		}				
	}
}

void menuPrincipal() {
	printf("What kind of numbers do you want to use?\n");
	printf("\t[A] INTEGER\n\t[B] FLOAT\n");
	printf("Please, depress any key to capture the value:\n");
	selectOptionPrincipal();
}

int main(int argc, char** argv) {
	menuPrincipal();
	
	return 0;
}
