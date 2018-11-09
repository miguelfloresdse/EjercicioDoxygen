#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "addition.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void printResultInt(int varA, int varB, int result) {
	printf("The result for: %d + %d is %d\n", varA, varB, result);
}

void printResultFloat(float varA, float varB, float result) {
	printf("The result for: %f + %f is %f\n", varA, varB, result);
}

int setValueInt() {
	string initialValue;
	int outCycle = 0;
	
	while(outCycle == 0) {
		printf("Value: ");
		scanf("%s", &initialValue);
		for(int i = 0; i < initialValue.size(); i++) {
			if(initialValue[i] == '.') {
				printf("The value inserted is not valid, please, introduce valid data.\n");
				break;
			} else if(initialValue[i] < 48 || initialValue[i] > 57) {
				printf("The value inserted is not valid, please, introduce valid data.\n");
				break;
			}
		}
		outCycle = 1;	
	}
	
	return atoi(initialValue.c_str());
}

float setValueFloat() {
	string initialValue;
	int outCycle = 0;
	
	while(outCycle == 0) {
		printf("Value: ");
		scanf("%s", &initialValue);
		for(int i = 0; i < initialValue.size(); i++) {
			if(initialValue[i] == 46 && (initialValue[i] < 48 || initialValue[i] > 57)) {
				printf("The value inserted is not valid, please, introduce valid data.\n");
				break;
			}
		}
		outCycle = 1;	
	}
	
	return strtof(initialValue.c_str(),0);
}

void doOpearation(char selection, char operation) {
	if(selection == 'A') {
		int x, y, result;
		
		x = setValueInt();
		y = setValueInt();
		
		result = addition(x, y);
		
		printResult(x, y, result);
	} else {
		float x, y, result;
		
		x = setValueFloat();
		y = setValueFloat();
		
		result = addition(x, y);
		
		printResult(x, y, result);
	}
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
	
	doOperation(varSelection, selection);
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
