#include <iostream>
using namespace std;
int main()
{
	int iYear, iMonth, iDay,iJum;
	cin >> iYear >> iMonth >> iDay;

	iJum = (iYear - iMonth + iDay)%10;
	if (iJum == 0) {
		cout << "대박" << endl;
	}
	else {
		cout << "그럭저럭" << endl;
	}
}

