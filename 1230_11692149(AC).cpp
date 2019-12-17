#include <iostream>
using namespace std;
int main()
{
	int iFirTunnelHeight, iSecTunnelHeight, iThirTunnelHeight;
	cin >> iFirTunnelHeight >> iSecTunnelHeight >> iThirTunnelHeight;

	if (iFirTunnelHeight <= 170) {
		cout << "CRASH" << " " << iFirTunnelHeight << endl;
	}
	else if (iSecTunnelHeight <= 170) {
		cout << "CRASH" << " " << iSecTunnelHeight << endl;
	}
	else if (iThirTunnelHeight <= 170) {
		cout << "CRASH" << " " << iThirTunnelHeight << endl;
	}
	else {
		cout << "PASS" << endl;
	}
	return 0;
}

