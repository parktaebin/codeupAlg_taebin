#include <iostream>
//inputNumber(),sortNumber(),outputNumber()함수가 선언되어있는 헤더파일을 include한다.
#include "myLib.h"

using namespace std;
void inputNumber(int* num, int aSize) {
	
	int iIndex;
	cout << aSize<<"개의 정수를 입력하세요" << endl;
	//for문을 이용해서 index를 0에서부터 배열의 사이즈 만큼 증가시키며 입력받는다.
	for (iIndex = 0; iIndex < aSize; iIndex++) {
		cin >> num[iIndex];
	}
}
void sortNumber(int* num,int aSize) {

	int iIndex,iMinValue,iMinIndex;
	int iTemp,seqIndex;

	//0번째 인덱스부터 1씩 증가하며 차례차례 자리를 바꾸는 반복문
	for (seqIndex = 0; seqIndex < aSize; seqIndex++) {

		iMinValue = num[seqIndex];
		iMinIndex = seqIndex;
		//index를 0번,1번,2번(seqIndex의 값으로 초기화하며)... 배열 크기만큼 반복하며 index를 하나씩 증가한다. 
		for (iIndex = seqIndex; iIndex < aSize; iIndex++) {
			//iIndex의 배열의 숫자가 최솟값 보다 작거나 같으면
			if (num[iIndex] <= iMinValue) {
				//최솟값은 iIndex번째의 숫자로 대입하고, 그때의 index를 최소인덱스변수에 대입한다.
				iMinValue = num[iIndex];
				iMinIndex = iIndex;
			//배열의 위치 바꾸기(if문 안에서 해줘야한다...!-> 최소값이 이미 바뀌었기 때문에)
			/*최소값이 있는 인덱스(iMinIndex)를 배열의 seqIndex번째에 위치시키고 
			원래 seqIndex의 인덱스와 자리를 바꾼다.*/
			iTemp = num[seqIndex];
			num[seqIndex]=num[iMinIndex];
			num[iMinIndex] = iTemp;
			}
		}
	}
	//반환타입이 없기때문에 리턴이 없어도 된다.
}
//배열을 출력하는 함수
void outputNumber(int* num, int aSize) {
	int iIndex;
	cout << "sorting한 결과" << endl;
	//for문을 이용해서 index를 0에서부터 배열의 사이즈 만큼 증가시키며 입력받는다.
	for (iIndex = 0; iIndex < aSize; iIndex++) {
		cout << num[iIndex] << " ";
	}
}