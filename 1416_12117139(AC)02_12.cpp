#include<iostream>

using namespace std;

int main() {

	int iSumIndex, iIndex = 0;
	long long iNumber,iBinary, iSum[9999];
	cin >> iNumber;
	if (iNumber == 0) {
		cout << 0;
	}
	else {
		while (iNumber > 0) {
			iBinary = iNumber % 2;
			iSum[iIndex] = iBinary;
			iNumber = iNumber / 2;
			iIndex = iIndex + 1;

		}
		for (iSumIndex = iIndex; iSumIndex > 0; iSumIndex--) {
			cout << iSum[iSumIndex - 1];
		}
	}
	
	return 0;
}
