#include <iostream>
#include <string>

	using namespace std;
	int main()
	{
		int iIndex;
		string sMessage;
		cin >> sMessage;
		string* pStr = new string [sMessage.length()];
		string* pStr2 = new string[sMessage.length()];
		for (iIndex = 0; iIndex < sMessage.length(); iIndex++) {
			pStr[iIndex]=sMessage.at(iIndex)+2;
			cout << pStr[iIndex];
		}
		cout << endl;
		for (iIndex = 0; iIndex < sMessage.length(); iIndex++) {
			pStr2[iIndex]=(sMessage.at(iIndex)*7)%80+48 ;
			cout << pStr2[iIndex];
		}
		return 0;
	}
