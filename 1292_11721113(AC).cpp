
#include <iostream>
#include <string>

	using namespace std;
	int main()
	{
		long iDna, iSum, iLength;
		string sDna;
		int iTemp;

		iSum = 0;
		cin >> sDna;
		iLength = sDna.length();
		for (int iIndex = 0; iIndex < iLength; ++iIndex) {
			iTemp = sDna.at(iIndex) - '0';
			iSum = iSum + iTemp;
		}

		if (iSum % 7 == 4) {
			cout << "suspect" << endl;
		}
		else {
			cout << "citizen" << endl;
		}
		return 0;
	}


