#include<iostream>
#include<string>
using namespace std;

int main() {

	int iCin[4], iIndex,iCount;
	string sCout[5] = { "도","개","걸","윷","모" };
	for (iIndex = 0; iIndex < 4; iIndex++) {
		cin >> iCin[iIndex];
	}
	iCount = 0;
	for (iIndex = 0; iIndex < 4; iIndex++) {
		if (iCin[iIndex] == 1) {
			iCount++;
		}
	}
	switch(iCount){
	case 1:
		cout << sCout[0];
		break;
	case 2:
		cout << sCout[1];
		break;
	case 3:
		cout << sCout[2];
		break;
	case 4:
		cout << sCout[3];
		break;
	default:
		cout << sCout[4];
		break;
	}
}
