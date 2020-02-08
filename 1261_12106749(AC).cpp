#include<iostream>

using namespace std;

int main() {

	int iNumber[10],iIndex,iPrintNumber;

	for (iIndex = 0; iIndex < 10; iIndex++) {
		cin >> iNumber[iIndex];
	}
	iPrintNumber = 0;

	for (iIndex = 0; iIndex < 10; iIndex++) {

		if (iNumber[iIndex] % 5 == 0) {
			iPrintNumber = iNumber[iIndex];
			break;
		}
	}
	cout <<iPrintNumber;

	return 0;
}
