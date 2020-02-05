#include<iostream>
using namespace std;

int main() {

	long long iStartNumber,iRatio,iSequence,iIndex,iSum;
	cin >> iStartNumber >> iRatio >> iSequence;

	iSum =0;

	for (iIndex = 0; iIndex < iSequence; iIndex++) {

		iSum = iStartNumber+(iSum *iRatio);
		iStartNumber = 0;
	}

	cout << iSum;

	return 0;
}
