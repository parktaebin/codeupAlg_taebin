#include <iostream>
#define ARRAY_SIZE 3
using namespace std;

int main()
{	
	int virus[ARRAY_SIZE], iMax, iIndex, iVaccine;
	cin >> virus[0] >> virus[1] >> virus[2];
	iMax = virus[0];
	for (iIndex = 1; iIndex < ARRAY_SIZE;iIndex++) {
		if (virus[iIndex] > iMax) {
			iMax = virus[iIndex];
		}
	}
	for (iIndex = 1; iIndex <= iMax; iIndex++) {
		if (virus[0] % iIndex == 0 && virus[1] % iIndex == 0 && virus[2] % iIndex == 0) {
			iVaccine = iIndex;
		}
	}
	cout << iVaccine<<endl;
	return 0;
}
