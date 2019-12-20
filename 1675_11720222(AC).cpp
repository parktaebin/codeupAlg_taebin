#include <iostream>
#include<string>

using namespace std;

int main()
{
	string sMessage;
	char sPrintVolcab, beforeChangeVolcab;
	int iIndex;
	getline(cin, sMessage, '\n');

	for (iIndex = 0; iIndex < sMessage.length(); iIndex++) {

		beforeChangeVolcab = sMessage.at(iIndex);

		if (beforeChangeVolcab == ' ') {
			sPrintVolcab = ' ';
		}
		else if (beforeChangeVolcab <= 'c') {
			sPrintVolcab = beforeChangeVolcab +23;
		}
		else {
			sPrintVolcab = beforeChangeVolcab - 3;
		}
		cout << sPrintVolcab;
	}
	return 0;
}
