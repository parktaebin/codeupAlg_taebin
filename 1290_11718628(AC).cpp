#include <iostream>
using namespace std;

int main()
{	
	int iIndex, iLength,iNumber;
	cin >> iLength;
	iNumber = 0;
	for (iIndex = 1; iIndex <= iLength / 2; iIndex++) {
		if (iLength % iIndex == 0) {
			iNumber++;
		}
	}
	cout << iNumber;
	return 0;
}
