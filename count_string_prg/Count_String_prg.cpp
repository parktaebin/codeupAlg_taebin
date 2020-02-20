#include <iostream>
#include<string>
#include"cntStr.h"

using namespace std;


int main()
{
	int iIndex, upperCase[26] = { 0, },lowerCase[26] = { 0, }, uIndex,lIndex,iSpecCnt;
	string cInString;
	cntStr strObj;													//기본생성자 호출
	//cntStr strObj("ABCDEFGH1943859!!&&&#9038akjfklsadjflkskfljkfskdjflkcxknlkvnlskjdlkrABBCkdkgoelgkfkdltflsskdk");									//cin 없이 test간단히 할때 -> 멤버변수 이미 할당된 값으로초기화
	char cIndexingChar, cUpPrint,cLoPrint;

	cout << "문자열 50개 이상을 입력하세요(공백 허용됨)" << endl;
	getline(cin, cInString, '\n');									// 문자열의 입력
	strObj.SetString(cInString);									//입력된 문자열로 문자열(멤버변수) 값을 할당
										
	iSpecCnt = 0;													// 특수문자의 개수를 저장할 변수iSpecCnt의 값은 0으로 초기화한다. 

	//1) 받은 문자열의 length 만큼 반복.
	for (iIndex = 0; iIndex < cInString.length(); iIndex++) {
		
		cIndexingChar = strObj.pickString(iIndex);					// 각 인덱스별 문자 추출. -> setString멤버함수

		//2) 인덱스에 담긴 문자 비교 -> classifyChar멤버함수
			//2-1) classifyChar를 통한 리턴값이 1 -> 대문자이다.
		if (strObj.classifyChar(cIndexingChar) == 1) {		

			uIndex=strObj.isupper(cIndexingChar);					// 각 문자의 인덱스를 구함->isupper멤버함수
			upperCase[uIndex] = upperCase[uIndex] + 1;				// 인덱스번째의 값을 증가시킴 

		}
		else {
			//2-2) classifyChar를 통한 리턴값이 2 -> 소문자이다.
			if (strObj.classifyChar(cIndexingChar) == 2) {	

				lIndex=strObj.islower(cIndexingChar);				//각 문자의 인덱스를 구함->islower멤버함수
				lowerCase[lIndex] = lowerCase[lIndex] + 1;			//인덱스번째의 값을 증가시킴 

			}

			//2-3) classifyChar를 통한 리턴값이 0 -> 특수문자,숫자이다.
			else if(strObj.classifyChar(cIndexingChar) == 0) {

				iSpecCnt=iSpecCnt+strObj.isalpha(cIndexingChar);	//iSpecCnt의 값을 증가시킴-> isalpha

			}

		}	// if - end
	}	// for - end

	//3-1) 대문자 출력
	for (iIndex = 0; iIndex < 26; iIndex++) {
		cUpPrint = iIndex + 'A';
		cout << cUpPrint << '(' << upperCase[iIndex] << ')' << ' ';
		}
	cout << endl;

	//3-2) 소문자 출력
	for (iIndex = 0; iIndex < 26; iIndex++) {
		cLoPrint = iIndex + 'a';
		cout << cLoPrint << '(' << lowerCase[iIndex] << ')' << ' ';
	}

	cout << endl;

	//3-3) 특수문자 출력
	cout << "특수문자/숫자의 개수 :" << iSpecCnt << endl;

	return 0;
}

