#include <iostream>
#include<string>

using namespace std;

int main()
{	
	int a, b,iTemp,iIndex;
	cin >> a >> b;
	if (a > b) {
		iTemp = a;
		a = b;
		b = iTemp;
	}
	for (iIndex = a; iIndex < b + 1; iIndex++) {
		cout << iIndex << " ";
	}
	return 0;
}

