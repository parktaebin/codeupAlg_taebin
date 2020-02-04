#include<iostream>
using namespace std;

int main() {

	int idNumber[2],iYear,iIndex,iAge;

	for (iIndex = 0; iIndex < 2; iIndex++) {
		cin >> idNumber[iIndex];
	}
	iYear = idNumber[0] / 10000;

	if (idNumber[1] == 3 || idNumber[1] == 4) {
		iAge = 12 - iYear + 1;
	}
	else {
		iAge = 100 - iYear + 13;
	}
	cout << iAge;

	return 0;
}
