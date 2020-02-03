#include<iostream>
using namespace std;

int main() {

	int iNumber[3], iIndex,jIndex,iTemp;
	for (iIndex = 0; iIndex < 3; iIndex++) {
		cin >> iNumber[iIndex];
	}
	
	for (iIndex = 0; iIndex < 3; iIndex++) {

		for (jIndex = 0; jIndex < 2; jIndex++) {
			if (iNumber[jIndex] > iNumber[jIndex+1]) {
				iTemp = iNumber[jIndex];
				iNumber[jIndex] = iNumber[jIndex + 1];
				iNumber[jIndex+1] = iTemp;
			}
		}
	}
	cout << iNumber[iIndex - 2];

	return 0;
}
