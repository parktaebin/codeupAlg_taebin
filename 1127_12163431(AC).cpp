#include <iostream>

using namespace std;

int main() {

	double dRatio[3], dFinalScore;
	int iScore[3], iIndex;

	dFinalScore = 0;

	for (iIndex = 0; iIndex < 3; iIndex++) {
		cin >> dRatio[iIndex] >> iScore[iIndex];
		dFinalScore = dFinalScore + dRatio[iIndex] * iScore[iIndex];
	}
	cout << fixed;
	cout.precision(1);
	cout << dFinalScore;

	return 0;
}

