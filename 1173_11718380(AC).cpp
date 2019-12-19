#include <iostream>
#include<string>

using namespace std;

int main()
{	
	int iHour, iMinutes;
	cin >> iHour >> iMinutes;
	if (iMinutes >= 30) {
		iMinutes = iMinutes - 30;
	}
	else {
		iHour=(iHour + 23) % 24;
		iMinutes = (iMinutes + 30) % 60;
	}

	cout << iHour <<" "<<iMinutes << endl;

	return 0;
}
