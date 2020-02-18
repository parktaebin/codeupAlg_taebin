#include<iostream>
#include<string>
using namespace std;


int main() {

	string identCode;
	int iStudentNumber, iIndex;
	cin >> iStudentNumber >> identCode;

	string* pClass = new string[iStudentNumber];
	string* pName = new string[iStudentNumber];

	for (iIndex = 0; iIndex < iStudentNumber; iIndex++) {

		getline(cin, pClass[iIndex], ',');
		cin >> pName[iIndex];
	}
	for (iIndex = 0; iIndex < iStudentNumber; iIndex++) {
		cout<< "\"" << pClass[iIndex] <<"\",\""<< pName[iIndex] << "\",\"" <<
			identCode << "\",\"" << "0" << "\",\"" << " " << "\",\"" << "0" << "\",\"" << "0" << "\"" << endl;
	}

	delete[]pName;
	delete[]pClass;
	return 0;
}
