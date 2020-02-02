#include<iostream>
#include<string>
using namespace std;

int main() {

	int iYear;
	string sMessage;
	cin >> iYear;
	while (true) {
		if (iYear % 4 == 0 && iYear % 100 != 0) {
			sMessage = "yes";
			break;
		}
		else if (iYear % 400 == 0) {
			sMessage = "yes";
			break;
		}
		else {
			sMessage = "no";
			break;
		}
	}
	cout << sMessage;

	return 0;
}
