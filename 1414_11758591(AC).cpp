#include <iostream>
#include <string>

	using namespace std;
	int main()
	{
		int cCount, ccCount,iStartIndex,iCIndex,iCStartIndex,iCcStartIndex;
		string sMessage,replaceChar;
		getline(cin, sMessage, '\n');
		
		iStartIndex = 0;
		replaceChar = 'c';
		while(true) {
			if (sMessage.find('C', iStartIndex) == -1) {
				break;
			}
			else {
				iCIndex = sMessage.find('C', iStartIndex);
				sMessage.replace(iCIndex, 1, replaceChar);
				iStartIndex = iCIndex + 1;
			}
		}
		iCStartIndex = 0,cCount = 0 ;
		while(true) {
			if (sMessage.find('c', iCStartIndex) == -1) {
				break;
			}
			else {
				iCStartIndex =sMessage.find('c', iCStartIndex)+1;
				cCount++;
			}
		}
		iCcStartIndex = 0,ccCount = 0;
		while(true) {
			if (sMessage.find("cc", iCcStartIndex) == -1) {
				break;
			}
			else {

				iCcStartIndex = sMessage.find("cc", iCcStartIndex) + 1;
				ccCount++;
			}
		}
		cout << cCount<<endl;
		cout << ccCount<< endl;
		return 0;
	}
