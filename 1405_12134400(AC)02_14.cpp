#include<iostream>
#include<string>
using namespace std;

int main() {

	string sRotatMessage,iFirstStr,iLastStr;
	int iArraySize,iIndex,iBlankpos;
	cin >> iArraySize;

	int* p = new int[iArraySize];									//메모리의 효율적인 사용을 위한 동적할당

	for (iIndex = 0; iIndex < iArraySize; iIndex++) {
		cin >> p[iIndex];
	}
	for (iIndex = 0; iIndex < iArraySize; iIndex++) {
		sRotatMessage = sRotatMessage + to_string(p[iIndex])+' ';  //int배열안에 있는 수들을 문자열로 변환해서 저장
	}
	for (iIndex = 0; iIndex < iArraySize; iIndex++) {
		cout << sRotatMessage<<endl;
		iBlankpos=sRotatMessage.find(' ');							//공백의 인덱스를 찾기->수의 자릿수가 다를수 있음	
		iFirstStr = sRotatMessage.substr(0, iBlankpos+1);			//0번째부터 공백까지의 n+1(공백포함)개의 문자열분리
		iLastStr = sRotatMessage.substr(iBlankpos+1);				//나머지 문자들을 (2번째부터) 분리 
		sRotatMessage = iLastStr + iFirstStr;						//두 문자열을 연결해서 새로운 문자열 만듦

	}

	delete []p;
	return 0;
}
