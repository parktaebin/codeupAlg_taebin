#include<iostream>

using namespace std;

int main() {

	float fFirstNumber, fLastNumber, fIndex,fCount;

	cin >> fFirstNumber >> fLastNumber;

	if (fLastNumber<0&& fFirstNumber < 0) {
		fCount = (fLastNumber - fFirstNumber + 0.01) * 100 -1;
	}
	else {
		fCount = (fLastNumber - fFirstNumber + 0.01) * 100;
	}
	

	for (fIndex =0; fIndex < fCount; fIndex++) {

		cout << fixed;								//소숫점 자리 2자리로 출력고정
		cout.precision(2);
		cout << fFirstNumber<<' ';
		fFirstNumber=fFirstNumber + 0.01;
	}

	return 0;
}
