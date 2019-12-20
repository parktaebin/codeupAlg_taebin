#include <iostream>
using namespace std;

int main()
{	
	int iIndex, iWidth, iHeight,iColumn;
	cin >> iWidth >> iHeight;
	
	cout << "+";
	for (iIndex = 0; iIndex < iWidth - 2; iIndex++) {
		cout << "-";
	}
	cout << "+"<<endl;
	for (iIndex = 0; iIndex < iHeight - 2; iIndex++) {
		cout << "|";
		for (iColumn = 0; iColumn < iWidth - 2; iColumn++) {
			cout << " ";
		}
		cout << "|"<<endl;
	}
	cout << "+";
	for (iIndex = 0; iIndex < iWidth - 2; iIndex++) {
		cout << "-";
	}
	cout << "+" << endl;

	return 0;
}
