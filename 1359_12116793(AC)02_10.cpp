#include<iostream>

using namespace std;

int main() {

	int iLine, iLineIndex, iIndex;
	cin >> iLine;
	for (iLineIndex = 0; iLineIndex < iLine; iLineIndex++) {

		for (iIndex = 0; iIndex < iLineIndex+1; iIndex++) {

			cout << iIndex+1 << ' ';

		}
		cout << endl;
	}
	return 0;
}
