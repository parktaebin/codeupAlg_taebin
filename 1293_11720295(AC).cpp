#include <iostream>
using namespace std;

int main()
{	
	int number, iIndex, iMax,iMin;
	cin >> number;
	int *pScore = new int[number];					//학생의 수를 나중에 입력받기때문에 동적할당
	
	for (iIndex = 0; iIndex < number; iIndex++) {
		cin >> pScore[iIndex];						//포인터를 배열처럼 사용		
	}
	iMax= pScore[0];
	iMin= pScore[0];
	for (iIndex = 1; iIndex < number; iIndex++) {
		if (pScore[iIndex] > iMax) {
			iMax = pScore[iIndex];
		}
		if (pScore[iIndex] < iMin) {
			iMin = pScore[iIndex];
		}
	}
	cout << iMax << " " << iMin << endl;
	return 0;
}
