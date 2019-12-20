#include <iostream>
#include<string>
#define ARRAY_SIZE 3
using namespace std;

int main()
{	
	int iWidth[ARRAY_SIZE],iHeight[ARRAY_SIZE],iSize[ARRAY_SIZE],iIndex, iMaxSize;

	for (iIndex = 0; iIndex < ARRAY_SIZE; iIndex++) {
		cin >> iWidth[iIndex] >> iHeight[iIndex];
		iSize[iIndex] = iWidth[iIndex] * iHeight[iIndex];
	}
	iMaxSize = iSize[0];
	for (iIndex = 1; iIndex < ARRAY_SIZE; iIndex++) {
		if (iSize[iIndex] > iMaxSize) {
			iMaxSize = iSize[iIndex];
		}
	}
	cout << iMaxSize;
	return 0;
}
