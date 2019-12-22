#include <iostream>
#include <string>

	using namespace std;
	int main()
	{
		int iIndex;
		string sMessage;
		getline(cin, sMessage, '\n');
		string* pstr = new string[sMessage.length()];
		for (iIndex = 0; iIndex < sMessage.length(); iIndex++) {
			pstr[sMessage.length() - (iIndex + 1)] = sMessage.at(iIndex);
		}
		for (iIndex = 0; iIndex < sMessage.length(); iIndex++) {
			cout << pstr[iIndex];
		}
		return 0;
	}
