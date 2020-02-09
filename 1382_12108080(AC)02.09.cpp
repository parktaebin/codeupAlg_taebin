#include<iostream>

using namespace std;

int main() {

	int iDan, iTimedNumber, iResult;

	for (iTimedNumber = 1; iTimedNumber <= 9; iTimedNumber++) {

		for (iDan = 2; iDan <= 5; iDan++) {
			if (iDan * iTimedNumber < 10) {
				cout << iDan << " x " << iTimedNumber << " = " <<' '<<iDan * iTimedNumber << '\t';
			}
			else {
				cout << iDan << " x " << iTimedNumber << " = " << iDan * iTimedNumber << '\t';
			}
		}
		cout << '\n';
	}
	return 0;
}
