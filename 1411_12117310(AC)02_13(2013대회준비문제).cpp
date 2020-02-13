#include<iostream>

using namespace std;

int main() {

	int iCardCount,iIndex,iNumber;
	cin >> iCardCount;
	int* p = new int[iCardCount];

	for (iIndex = 0; iIndex < iCardCount; iIndex++) {
		p[iIndex] = iIndex + 1;							//배열의 인덱스에 순차대로 1,2,3...iCount-1의 수저장
	}																		

	for (iIndex = 0; iIndex < iCardCount - 1; iIndex++) {
		cin >> iNumber;									//숫자입력
		p[iNumber - 1] = 0;								//해당 숫자를 이용해 배열의 인덱스-1번째 저장된 수를 0으로 변경
														//ex)1입력시 0번째에 저장된 숫자 1을 0으로 변경
	}
	for (iIndex = 0; iIndex < iCardCount; iIndex++) {
		if (p[iIndex] != 0) {
			cout << p[iIndex];
		}
	}
	delete []p;
	return 0;
}
