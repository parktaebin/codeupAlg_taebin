#include<iostream>

using namespace std;

int compare(int, int, int);

int main() {

	int iLengthA, iLengthB, iLengthC,iCompResult;
	cin >> iLengthA >> iLengthB >> iLengthC;

	
		iCompResult=compare(iLengthA, iLengthB, iLengthC);

		switch (iCompResult) {
		
		case -1:
			cout << "삼각형아님";
			break;
		case 0:
			cout << "삼각형";
			break;
		case 1:
			cout << "정삼각형";
			break;
		case 2:
			cout << "이등변삼각형";
			break;
		case 3:
			cout << "직각삼각형";
			break;
		}
	return 0;
}
int compare(int a, int b, int c) {

	int iResult=0;

	if (a + b <= c) {
		iResult = -1;
		}
		else if (a == b && b==c) {
			iResult = 1;
		}
		else if ((a == b && a != c)||(b == c && b != a) || (a == c && a != b)) {
			iResult = 2;
		}
		else if (a * a + b * b == c * c) {
			iResult = 3;
		}

	return iResult;
}
