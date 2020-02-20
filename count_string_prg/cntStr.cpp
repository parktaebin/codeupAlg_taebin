#include <iostream>
#include<string>
#include"cntStr.h"

using namespace std;

//기본 생성자
cntStr::cntStr() {
	sInputStr = " ";					//멤버변수 sInputStr을 ""으로 초기화하는 생성자
}
//매개변수 타입이 string, 개수가 1개인 생성자
cntStr::cntStr(string testString) {
	sInputStr = testString;				//멤버변수 sInputStr을 매개변수로 초기화하는 생성자
}
void cntStr::SetString(string prmSt) {
	sInputStr = prmSt;					//멤버변수 sInputStr을 매개변수로 값할당하는 멤버함수
}
//pickString 멤버 함수
char cntStr::pickString(int iIndex) {	//정수를 입력받아 문자열을 추출해서 반환
	char cIndexingChar;
	cIndexingChar = sInputStr.at(iIndex);
	return cIndexingChar;
}
//classifyChar 멤버 함수
int cntStr::classifyChar(char cOneChar) {
										//하나의 문자를 비교
	int iResult;
		if (cOneChar >= 'A' && cOneChar<='Z') {	
			iResult = 1;				//대문자이면 1을 반환
		}
		else if (cOneChar >= 'a' && cOneChar <= 'z') {
			iResult = 2;				//소문자이면 2를 반환
		}
		else {
			iResult = 0;				//그 외(특수문자,숫자)이면 0을 반환
		}
		return iResult;
}
//isupper함수
int cntStr::isupper(char cOneChar){		//문자를 받아서 인덱스로 바꾸는 과정 ex)A->0,B->1	
	int sArrIndex=cOneChar - 'A';
	return sArrIndex;
}
//islower함수
int cntStr::islower(char cOneChar) {	//소문자를 인덱스로 바꾸는 과정 a->0,b->1...
	int lArrIndex = cOneChar - 'a';
	return lArrIndex;
}
//isalpha함수
int cntStr::isalpha(char cOneChar) {	//특수문자가 들어오면 1을 반환하는 멤버 함수
	int ArrIndex = 1;
	return ArrIndex;
}
