#include <stdlib.h>
#include <stdio.h>

using namespace std;

void addition(char selection) {
	if(selection == 'A') {
		string initialValue;
		int x, y, result;
		int outCycle = 0;
		
		while(outCycle == 0) {
			cout << "Insert the number: \nValue: ";
			scanf("%s", initialValue);
			
			for (int i = 0; i < initialValue.size(); i++){
				if(initialValue[i] == '.') {
					cout << "The inserted value is not valid, please, introduce valid data.\n";
					break;
				} else {
					outCycle = 1;
				}
			}
		}
		
		x = stoi(initialValue);
		
		while(outCycle == 0) {
			cout << "Insert the number: \nValue: ";
			scanf("%s", initialValue);
			
			for (int i = 0; i < initialValue.size(); i++){
				if(initialValue[i] == '.') {
					cout << "The inserted value is not valid, please, introduce valid data.\n";
					break;
				} else {
					outCycle = 1;
				}
			}
		}
		
		y = stoi(initialValue);
		
		cout << "The result for: " << x << " + " << y << " is " << x + y;
		
		
	} else if(selection == 'B') {
		
	}
}
