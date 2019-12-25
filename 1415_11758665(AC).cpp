#include <iostream>
#define ARRAY_LENGTH 10

	using namespace std;
	int main()
	{
		int iNumb[ARRAY_LENGTH],iIndex,iLOddNumber,iLevenNumber,iMaxNumber;
		for (iIndex = 0; iIndex < ARRAY_LENGTH; iIndex++) {
			cin >> iNumb[iIndex];
		}
		iLOddNumber = 0, iLevenNumber = 0;
		for (iIndex = 0; iIndex < ARRAY_LENGTH; iIndex++) {
			if (iLOddNumber < iNumb[iIndex] && iNumb[iIndex] % 2 == 1) {
				iLOddNumber = iNumb[iIndex];
			}
			else if (iLevenNumber < iNumb[iIndex] && iNumb[iIndex] % 2 == 0) {
				iLevenNumber = iNumb[iIndex];
			}
		}
		iMaxNumber = iNumb[0];
		if (iLOddNumber == 0 || iLevenNumber == 0) {
			for (iIndex = 1; iIndex < ARRAY_LENGTH; iIndex++) {
				if (iNumb[iIndex] > iMaxNumber) {
					iMaxNumber = iNumb[iIndex];
				}
			}
			cout << iMaxNumber;
		}
		else {
			cout << iLOddNumber << " " << iLevenNumber << endl;
		}
		
		return 0;
	}
