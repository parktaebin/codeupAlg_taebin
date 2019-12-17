#include <iostream>
#include<string>

using namespace std;

int main()
{	
	int iYear, iMonth, iDay;

	cin >> iYear >> iMonth;

	if (iMonth / 2 == 1) {
		if (iYear % 400 == 0 ||(iYear % 4 == 0 && iYear % 100 != 0)) {
			iDay = 29;
		}
		else {
			iDay = 28;
		}
	}
	else {
			if (iMonth <= 7) {
				if (iMonth % 2 == 1) {
					iDay = 31;
				}
				else {
					iDay = 30;
				}
			}
			else {
				if (iMonth % 2 == 0) {
					iDay = 31;
				}
				else {
					iDay = 30;
				}
			}
		}
	cout << iDay << endl;
	return 0;
}
