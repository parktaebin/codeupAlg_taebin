#include<iostream>

using namespace std;

int main() {

	int iStar,iBlankIndex,iLine;
	cin >> iStar;
	for (iLine = 0; iLine < iStar; iLine++) {

		for (iBlankIndex = 0; iBlankIndex < iLine; iBlankIndex++) {
			cout << ' ';
		}
		cout << "**" << endl;
	}
	return 0;
}
