#include <iostream>
using namespace std;

int main()
{	
	int a, b, c, iLength,iCount;
	cin >> iLength;
	iCount = 0;
	for (a = 1; a <= iLength / 2; a++) {
		for (b = a; b <= iLength / 2; b++) {
			for (c = b; c <= iLength / 2; c++) {

				if (a + b + c == iLength && a + b > c) {
					iCount++;
					cout << a << " " << b << " " << c<<" "<< endl;
				}
			}
		}
	}
	if (iCount == 0) {
		cout << -1;
	}
	return 0;
}
