
#include<iostream>


using namespace std;
int main() {

	int i, j, starcnt, line, blank;
	while (true) {
		cout << "입력";
		cin >> line;

		if (line == 0) {
			cout << "종료";
			break;
		}
		else {
			if (line < 0 || line % 2 == 0) {
				cout << "다시입력";
				continue;
			}
			else {
				for (i = 0; i < line; i++) {

					starcnt = (line * 2) - (2 * i) - 1;
					blank = i;
					for (j = 0; j < blank; j++) {
						cout << " ";
					}
					for (j = 0; j < starcnt; j++) {
						cout << "*";
					}
					cout << endl;
				}
			}
			}
		}
		
	return 0;
}